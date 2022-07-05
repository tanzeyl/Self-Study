import javax.swing.*;
import java.awt.FlowLayout;

public class Swing {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame {
  public GUI() {
    JLabel l1 = new JLabel("Tanzeel Khan");
    JLabel l2 = new JLabel("Hello World");
    add(l1);
    add(l2);
    setLayout(new FlowLayout());
    setVisible(true);
    setSize(400, 400);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
}
