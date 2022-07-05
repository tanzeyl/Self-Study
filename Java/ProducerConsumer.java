class Utility {
  int i;
  Boolean produced = false;

  public synchronized void set(int i) throws InterruptedException {
    while (produced) {
      wait();
    }
    this.i = i;
    produced = true;
    System.out.println("Producer: " + i);
    notify();
  }

  public synchronized void get() throws InterruptedException {
    while (!produced) {
      wait();
    }
    produced = false;
    System.out.println("Consumer: " + i);
    notify();
  }
}

class Producer implements Runnable {
  private Utility u;

  Producer(Utility u) {
    this.u = u;
    Thread producer = new Thread(this, "Producer");
    producer.start();
  }

  @Override
  public void run() {
    int i = 0;
    while (true) {
      try {
        u.set(i);
        Thread.sleep(500);
      } catch (InterruptedException e) {
        System.out.println(e);
      }
      i++;
    }
  }
}

class Consumer implements Runnable {
  private Utility u;

  Consumer(Utility u) {
    this.u = u;
    Thread consumer = new Thread(this, "Consumer");
    consumer.start();
  }

  @Override
  public void run() {
    while (true) {
      try {
        u.get();
        Thread.sleep(2000);
      } catch (InterruptedException e) {
        System.out.println(e);
      }
    }
  }
}

public class ProducerConsumer {
  public static void main(String[] args) {
    Utility u = new Utility();
    new Producer(u);
    new Consumer(u);
  }
}
