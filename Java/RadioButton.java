import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class RadioButton {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame implements ActionListener, ItemListener {
  JTextField t1;
  JRadioButton r1, r2;
  JButton b1;
  JLabel l1;
  JCheckBox c1, c2;

  public GUI() {
    t1 = new JTextField(15);
    r1 = new JRadioButton("Male");
    r2 = new JRadioButton("Female");
    l1 = new JLabel("Result");
    b1 = new JButton("Enter your name.");
    c1 = new JCheckBox("Dancing");
    c2 = new JCheckBox("Singing");
    add(t1);
    add(r1);
    add(r2);
    add(c1);
    add(c2);
    add(b1);
    add(l1);
    ButtonGroup bg = new ButtonGroup();
    bg.add(r1);
    bg.add(r2);
    b1.addActionListener(this);
    c1.addItemListener(this);
    setLayout(new FlowLayout());
    setSize(400, 400);
    setVisible(true);
  }

  @Override
  public void actionPerformed(ActionEvent ae) {
    String res = t1.getText();
    if (r1.isSelected()) {
      res = "Mr. " + res;
    } else {
      res = "Mrs. " + res;
    }
    if (c1.isSelected()) {
      res = res + " Dancer";
    }
    if (c2.isSelected()) {
      res += " Singer";
    }
    l1.setText(res);
  }

  @Override
  public void itemStateChanged(ItemEvent ae) {
    System.out.println("Dancer.");
  }
}
