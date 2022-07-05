import java.awt.event.*;
import java.awt.*;
import javax.swing.*;

public class TextArea {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame implements ActionListener {
  JTextArea ta1;
  JButton b1;

  public GUI() {
    Container c = getContentPane();
    c.setLayout(null);
    c.setBackground(Color.YELLOW);
    ta1 = new JTextArea(10, 15);
    ta1.setText("This is a TextArea.");
    ta1.setLineWrap(true);
    ta1.setFont(new Font("arial", Font.BOLD, 15));
    b1 = new JButton("Print");
    c.add(ta1);
    c.add(b1);
    b1.addActionListener(this);
    setSize(400, 400);
    setVisible(true);
    setLayout(new FlowLayout());
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }

  @Override
  public void actionPerformed(ActionEvent ae) {
    String text = ta1.getText();
    System.out.println(text);
  }
}
