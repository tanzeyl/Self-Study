import java.awt.*;
import java.awt.Graphics;
import java.awt.event.*;
import java.sql.PseudoColumnUsage;

import javax.swing.*;

public class Graphic {
  public static void main(String[] args) {
    new GUI();
  }
}

class Panel extends JPanel {
  @Override
  public void paint(Graphics g) {
    super.paint(g);
    g.drawString("Hello World", 50, 50);
  }
}

class GUI extends JFrame {
  public GUI() {
    Panel p = new Panel();
    p.setBackground(Color.black);
    add(p);
    setVisible(true);
    setSize(400, 400);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }
}
