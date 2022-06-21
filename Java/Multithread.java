class CSthread extends Thread {
  public void run() {
    for (int i = 0; i <= 5; i++) {
      System.out.println("CS Thread : " + i);
    }
  }
}

class ITthread extends Thread {
  public void run() {
    for (int i = 0; i <= 5; i++) {
      System.out.println("IT Thread : " + i);
    }
  }
}

public class Multithread {
  public static void main(String[] args) throws InterruptedException {
    Thread cs = new CSthread();
    Thread it = new ITthread();
    cs.start();
    cs.sleep(500);
    it.start();
    cs.sleep(500);
  }
}
