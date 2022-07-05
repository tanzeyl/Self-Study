public class test {
  String name;
  int age;
  public static String un = "Graphic Era";

  public void set(String name, int age) {
    this.name = name;
    this.age = age;
  }

  public void get() {
    System.out.println(name);
    System.out.println(age);
    System.out.println(un);
  }

  public static void main(String[] args) {
    test a = new test();
    a.set("Tanzeel", 21);
    test b = a;
    b.get();
    a.get();
  }
}
