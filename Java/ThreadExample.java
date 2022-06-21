class Thread1 extends Thread {
  @Override
  public void run() {
    int i = 0;
    while (i < 100) {
      System.out.println("Hello");
      i++;
    }
  }
}

class Thread2 extends Thread {
  @Override
  public void run() {
    int i = 0;
    while (i < 100) {
      System.out.println("Good morning");
      i++;
    }
  }
}

public class ThreadExample {
  public static void main(String[] args) {
    Thread1 t1 = new Thread1();
    Thread2 t2 = new Thread2();
    t1.start();
    try {
      t1.join();
    } catch (Exception e) {
      System.out.println(e);
    }
    t2.start();
    System.out.println(t1.getState());
    System.out.println(t2.getState());
  }
}
