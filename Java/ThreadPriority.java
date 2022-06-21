class Mythread1 extends Thread {
  Mythread1(String name) {
    super(name);
  }

  @Override
  public void run() {
    int i = 0;
    while (true) {
      System.out.println("Hello " + this.getName());
    }
  }
}

public class ThreadPriority {
  public static void main(String[] args) {
    Mythread1 t1 = new Mythread1("Thread1");
    Mythread1 t2 = new Mythread1("Thread2");
    Mythread1 t3 = new Mythread1("Thread3");
    t1.setPriority(Thread.MAX_PRIORITY);
    t1.start();
    t2.start();
    t3.start();
  }
}
