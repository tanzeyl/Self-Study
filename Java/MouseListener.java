import java.awt.FlowLayout;
import java.awt.event.*;
import javax.swing.*;

public class MouseListener {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame {
  public GUI() {
    addMouseListener(new MouseAdapter() {
      @Override
      public void mousePressed(MouseEvent e) {
        int x = e.getX();
        int y = e.getY();
        System.out.println(x + " , " + y);
      }
    });
    setLayout(new FlowLayout());
    setSize(400, 400);
    setVisible(true);
  }
}
