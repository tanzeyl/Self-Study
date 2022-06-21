class Mythread1 extends Thread {
  Mythread1(String name) {
    super(name);
  }

  @Override
  public void run() {
    int i = 0;
    while (i < 100) {
      System.out.println("Thread 1.");
      i++;
    }
  }
}

class Mythread2 implements Runnable {
  // Mythread2(Runnable r, String name)
  // {
  // super(name);
  // }
  @Override
  public void run() {
    int i = 0;
    while (i < 100) {
      System.out.println("Thread 2.");
      i++;
    }
  }
}

public class ConstructorsInThreading {
  public static void main(String[] args) {
    Mythread1 t1 = new Mythread1("Tanzeel.");
    Mythread2 t2 = new Mythread2();
    Thread t3 = new Thread(t2, "Hello");
    System.out.println("ID: " + t1.getId());
    System.out.println("Name " + t1.getName());
    System.out.println("ID: " + t3.getId());
    System.out.println("Name " + t3.getName());
    t1.start();
    t3.start();
  }
}
