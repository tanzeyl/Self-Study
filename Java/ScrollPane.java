import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class ScrollPane {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame {
  public GUI() {
    JTextArea ta = new JTextArea(15, 15);
    JScrollPane sp = new JScrollPane(ta, JScrollPane.VERTICAL_SCROLLBAR_ALWAYS,
        JScrollPane.HORIZONTAL_SCROLLBAR_ALWAYS);
    add(sp);
    setLayout(new FlowLayout());
    setVisible(true);
    setSize(400, 400);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
}
