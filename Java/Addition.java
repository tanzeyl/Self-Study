import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class Addition {
  public static void main(String[] args) {
    GUI add = new GUI();
  }
}

class GUI extends JFrame implements ActionListener {
  JTextField t1, t2;
  JButton b1, b2;
  JLabel l1;

  public GUI() {
    t1 = new JTextField(15);
    t2 = new JTextField(15);
    b1 = new JButton("ADD");
    b2 = new JButton("SUBTRACT");
    l1 = new JLabel("Result");
    add(t1);
    add(t2);
    add(b1);
    add(b2);
    add(l1);
    b1.addActionListener(this);
    b2.addActionListener(this);
    setLayout(new FlowLayout());
    setSize(400, 400);
    setVisible(true);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }

  @Override
  public void actionPerformed(ActionEvent ae) {
    int n1, n2, res;
    n1 = Integer.parseInt(t1.getText());
    n2 = Integer.parseInt(t2.getText());
    if (ae.getSource() == b1) {

      res = n1 + n2;
    } else {
      res = n1 - n2;
    }
    l1.setText(res + " ");
  }
}
