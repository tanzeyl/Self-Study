import java.util.concurrent.ExecutorCompletionService;

class MyException extends Exception {
  @Override
  public String toString() {
    return "This is toString()";
  }

  @Override
  public String getMessage() {
    return "This is getMessage()";
  }
}

public class CustomExceptions {
  public static void main(String[] args) {
    try {
      throw new MyException();
    } catch (Exception e) {
      System.out.println(e.toString());
      System.out.println(e.getMessage());
    }
  }
}
