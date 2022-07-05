import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.table.*;

public class Table {
  public static void main(String[] args) {
    new GUI();
  }
}

class GUI extends JFrame implements ActionListener {
  DefaultTableModel model;
  JTextField t1, t2, t3;
  JButton b1;

  public GUI() {
    Object[][] data = { { 101, "Name1", 21 }, { 102, "Name2", 18 }, { 103, "Name3", 22 } };
    String[] columns = { "Roll Number", "Name", "Age" };
    model = new DefaultTableModel(data, columns);
    JTable table = new JTable(model);
    t1 = new JTextField(10);
    t2 = new JTextField(10);
    t3 = new JTextField(10);
    b1 = new JButton("ADD.");
    add(new JScrollPane(table));
    add(t1);
    add(t2);
    add(t3);
    add(b1);
    b1.addActionListener(this);
    setLayout(new FlowLayout());
    setVisible(true);
    setSize(400, 400);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
  }

  @Override
  public void actionPerformed(ActionEvent ae) {
    int rn = Integer.parseInt(t1.getText());
    String name = t2.getText();
    int age = Integer.parseInt(t3.getText());
    Object[] data = { rn, name, age };
    model.addRow(data);
    t1.setText("");
    t2.setText("");
    t3.setText("");
  }
}
