class Thread1 implements Runnable {
  @Override
  public void run() {
    int i = 0;
    while (i < 400) {
      System.out.println("This is thread 1.");
      i++;
    }
  }
}

class Thread2 implements Runnable {
  @Override
  public void run() {
    int i = 0;
    while (i < 400) {
      System.out.println("This is thread 2.");
      i++;
    }
  }
}

public class RunnableExample {
  public static void main(String[] args) {
    Thread1 r1 = new Thread1();
    Thread t1 = new Thread(r1);
    Thread2 r2 = new Thread2();
    Thread t2 = new Thread(r2);
    t1.start();
    t2.start();
  }
}
