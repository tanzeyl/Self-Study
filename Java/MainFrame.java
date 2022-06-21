package SQL_Swing;

import com.mysql.cj.jdbc.result.ResultSetMetaData;
import java.sql.*;

public class employee{
 Connection con;
 Statement st;
 employee(){
 }
 employee(String na, String co, String de, String sa) {
 try{
 con = DriverManager.getConnection("jdbc:mysql://localhost:3306/Employee", "root", "12345");
 System.out.println("Connection established");
 st = con.createStatement();
 PreparedStatement query = con.prepareStatement("INSERT INTO data VALUES (?,?,?,?)");
 query.setString(1, na);
 query.setString(2, co);
 query.setString(3, de);
 query.setInt(4, Integer.parseInt(sa));
 int i = query.executeUpdate();
 System.out.println(i + " records inserted");
 retrieve();
 con.close();
 }
 catch(Exception e){
 e.printStackTrace();
 }
 }
 public void retrieve() throws Exception{
 try {
 ResultSet rs = st.executeQuery("SELECT * FROM data");
 ResultSetMetaData rsmd = (ResultSetMetaData) rs.getMetaData();
 int col = rsmd.getColumnCount();
 while(rs.next()){
 for(int i = 1; i <= col; i++){
 System.out.print(rs.getString(i) + "\t");
 }
 System.out.println();
 }
 }
 catch(Exception e){
 e.printStackTrace();
 }
 }
}
EMPLOYEE DETAIL FILE: -
package SQL_Swing;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

public class Employee_Details extends employee implements ActionListener {
  JFrame frame = new JFrame();
  JButton save, reset, exit;
  JLabel name, code, designation, salary;
  JTextField n, c, d, s;
  String na, co, de, sa;

  Employee_Details() {
    frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    frame.setSize(500, 500);
    frame.setLayout(null);
    name = new JLabel("Name");
    name.setBounds(50, 30, 150, 30);
    code = new JLabel("Code");
    code.setBounds(50, 70, 150, 30);
    designation = new JLabel("Designation");
    designation.setBounds(50, 110, 150, 30);
    salary = new JLabel("Salary");
    salary.setBounds(50, 150, 150, 30);
    n = new JTextField();
    n.setBounds(250, 30, 150, 30);
    c = new JTextField();
    c.setBounds(250, 70, 150, 30);
    d = new JTextField();
    d.setBounds(250, 110, 150, 30);
    s = new JTextField();
    s.setBounds(250, 150, 150, 30);
    JPanel panel = new JPanel();
    panel.setLayout(new FlowLayout());
    panel.setBounds(30, 250, 400, 100);
    save = new JButton("SAVE");
    save.addActionListener(this);
    reset = new JButton("RESET");
    reset.addActionListener(this);
    exit = new JButton("EXIT");
    exit.addActionListener(this);
    panel.add(save);
    panel.add(reset);
    panel.add(exit);
    frame.add(name);
    frame.add(code);
    frame.add(designation);
    frame.add(salary);
    frame.add(n);
    frame.add(c);
    frame.add(d);
    frame.add(s);
    frame.add(panel);
    frame.setVisible(true);
  }

  @Override
  public void actionPerformed(ActionEvent e) {
    if (e.getSource() == save) {
      na = n.getText();
      co = c.getText();
      de = d.getText();
      sa = s.getText();
      // System.out.println(na+co+de+sa);
      employee ob = new employee(na, co, de, sa);
    } else if (e.getSource() == reset) {
      n.setText("");
      c.setText("");
      d.setText("");
      s.setText("");
    } else if (e.getSource() == exit) {
      frame.dispose();
    }
  }

 public static void main(String[] args) {
 Employee_Details ob = new Employee_Details();
 }
