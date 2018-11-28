
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class SimpleCalculator extends JFrame implements ActionListener{
	private JButton bt1,bt2,bt3,bt4;
	private JTextField tf1,tf2,tf3,tf4;
	private double result;
	private Container cont;
	private JPanel panel1,panel2;

public SimpleCalculator(String s)
{
	super(s);
	cont=this.getContentPane();
	JLabel num1ld=new JLabel("Num1:");
	tf1=new JTextField();
	JLabel num2ld=new JLabel("Num2:");
	tf2=new JTextField();
	JLabel resultlb=new JLabel("Result:");
	tf3=new JTextField();
	tf3.setEditable(false);
	panel1=new JPanel();
	panel1.setLayout(new GridLayout(3,2));
	panel1.add(num1lb);
	panel1.add(tf1);
	panel1.add(num2lb);
	panel1.add(tf2);
	panel1.add(num2lb);
   }
}
