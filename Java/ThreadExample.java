class Thread1 extends Thread {
  @Override
  public void run() {
    int i = 0;
    while (i < 400) {
      System.out.println("Tanzeel Khan.");
      i++;
    }
  }
}

class Thread2 extends Thread {
  @Override
  public void run() {
    int i = 0;
    while (i < 400) {
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
    t2.start();
  }
}
