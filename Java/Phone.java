interface Camera {
  void takeSnap();

  void recordVideo();

  default void record4kVideo() {
    System.out.println("Taking a snap and recording...");
  }
}

interface Wifi {
  String getNetworks();

  void connected();
}

class Cell {
  void callNumber(String s) {
    System.out.println("Calling " + s);
  }

  void pickCall(String s) {
    System.out.println("Connected to " + s);
  }
}

class MyPhone extends Cell implements Camera, Wifi {
  @Override
  public void takeSnap() {
    System.out.println("Taking a snap...");
  }

  @Override
  public void recordVideo() {
    System.out.println("Recording a video");
  }

  @Override
  public String getNetworks() {
    return "myWIFI, hello, port005";
  }

  @Override
  public void connected() {
    System.out.println("Connected to WIFI.");
  }
}

public class Phone {
  public static void main(String[] args) {
    MyPhone p = new MyPhone();
    p.takeSnap();
    p.recordVideo();
    p.record4kVideo();
    p.getNetworks();
    p.connected();
    p.callNumber("9998887774");
    p.pickCall("6665554441");
  }
}
