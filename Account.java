package quanlysinhvien;

import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.DriverManager;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Account extends JFrame {
	JLabel lblUser;
	JTextField tfUser;
	JLabel lblPassword;
	JTextField tfPassword;
	JButton btnDK;
	private Object conn;
	public Account() {
		lblUser = new JLabel("UserName");
		tfUser = new JTextField(10);
		lblPassword = new JLabel("Password");
		tfPassword = new JTextField(10);
		btnDK = new JButton("Dang ky");		
		Container cont = this.getContentPane();
		setLayout(new FlowLayout());
		setSize(400, 300);
		cont.add(lblUser);
		cont.add(tfUser);
		cont.add(lblPassword);
		cont.add(tfPassword);
		cont.add(btnDK);
		setVisible(true);
	}
	//ham connect tu java den csdl
	public void connectDB() {
		try {
			//load jdbc su dung cac thu vien trong jdbc
			Class.forName("com.microsoft.mysql.jdbc.Driver");
			DriverManager.getConnection("jdbc:sqlserver://DESKTOP-1I94MIJ;"
						+ "	databaseName=StudentDB;integratedSecurity=TRUE");
			System.out.println("Connect thanh cong");
		} catch (Exception e) {
			// TODO: handle exception
			System.out.println(e.getMessage());
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		new Account();
	}

}