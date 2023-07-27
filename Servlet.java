import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.Scanner;

public class Servlet {

	public static void main(String[] args) throws ClassNotFoundException {
		try {
			Scanner sc = new Scanner(System.in);
			Class.forName("com.mysql.cj.jdbc.Driver");
			Connection c = DriverManager.getConnection("jdbc:mysql://localhost:3306/s1", "root", "akshat@123");
			Statement s = c.createStatement();
			String sql = "insert into student values(?,?,?)";
			PreparedStatement ps = c.prepareStatement(sql);
			System.out.println("Enter the id of the user: ");
			ps.setInt(1, sc.nextInt());
			System.out.println("Enter the name of the student: ");
			ps.setString(2, sc.next());
			System.out.println("Enter the age of the student: ");
			ps.setInt(3, sc.nextInt());
			ps.executeUpdate();
			ResultSet rs = s.executeQuery("select * from student");
			while (rs.next()) {
				System.out.println(rs.getInt(1) + " " + rs.getString(2) + " " + rs.getInt(3));

			}
			c.close();
		} catch (Exception e) {
			System.out.println(e);
		}

	}
}