interface Parent {
  void method1();

  void method2();
}

interface Child extends Parent {
  void method3();

  void method4();
}

class MyClass implements Child {
  @Override
  public void method1() {
    System.out.println("Method 1");
  }

  @Override
  public void method2() {
    System.out.println("Method 2");
  }

  @Override
  public void method3() {
    System.out.println("Method 3");
  }

  @Override
  public void method4() {
    System.out.println("Method 4");
  }
}

public class InterfaceInheritance {
  public static void main(String[] args) {
    MyClass m = new MyClass();
    m.method1();
    m.method2();
    m.method3();
    m.method4();
  }
}
