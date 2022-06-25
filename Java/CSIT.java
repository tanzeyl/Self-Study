class CSThread extends Thread {
  @Override
  public void run() {
    int i = 1;
    while (true) {
      try {
        Thread.sleep(500);
      } catch (Exception e) {
        System.out.println(e);
      }
      System.out.println("CSThread -> " + i);
      i++;
    }
  }
}

class ITThread extends Thread {
  @Override
  public void run() {
    int i = 1;
    while (true) {
      try {
        Thread.sleep(500);
      } catch (Exception e) {
        System.out.println(e);
      }
      System.out.println("ITThread -> " + i);
      i++;
    }
  }
}

public class CSIT {
  public static void main(String[] args) {
    CSThread t1 = new CSThread();
    ITThread t2 = new ITThread();
    t1.start();
    t2.start();
  }
}
