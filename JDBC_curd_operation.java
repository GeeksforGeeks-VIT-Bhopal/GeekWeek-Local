package JDBC_codes;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.ResultSet;

public class JDBC_curd_operation {
    
    private String driver = "com.mysql.jdbc.Driver";
    private String url = "jdbc:mysql://localhost/jdbccurdoperation";
    private String uid = "root";
    private String password = "";
    
    public void employee_data()
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbccurdoperation?zeroDateTimeBehavior=convertToNull","root","");
            Statement stmt = con.createStatement();
            ResultSet result= stmt.executeQuery("select * from employee");
            
            while(result.next())
            {
                System.out.println("EmpID = "+result.getInt(1));
                System.out.println("FName = "+result.getString(2));
                System.out.println("LName = "+result.getString(3));
                System.out.println("City = "+result.getString(4));
                System.out.println("ProjID = "+result.getInt(5));  
            }
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    //insertion, updation, deletion
    public boolean record_manipulation(String query)
    {
        boolean flag=false;
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbccurdoperation?zeroDateTimeBehavior=convertToNull","root","");
            Statement stmt = con.createStatement();
            flag= stmt.executeUpdate(query)>0? true:false;
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
        return flag;
    }
    
    public void getEmployeeProjectID(int EmpID)
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbccurdoperation?zeroDateTimeBehavior=convertToNull","root","");
            Statement stmt = con.createStatement();
            ResultSet result= stmt.executeQuery("select ProjID from employee where EmpID='"+EmpID+"'");
            
            while(result.next())
            {
                System.out.println("Project ID = "+result.getInt(1));
            }
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    public void getEmployeeCity(int EmpID)
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbccurdoperation?zeroDateTimeBehavior=convertToNull","root","");
            Statement stmt = con.createStatement();
            ResultSet result= stmt.executeQuery("select City from employee where EmpID='"+EmpID+"'");
            
            while(result.next())
            {
                System.out.println("City = "+result.getString(1));
            }
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
    public void getEmployeeName(int ProjID)
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            Connection con= DriverManager.getConnection("jdbc:mysql://localhost:3306/jdbccurdoperation?zeroDateTimeBehavior=convertToNull","root","");
            Statement stmt = con.createStatement();
            ResultSet result= stmt.executeQuery("select FName,LName from employee where ProjID='"+ProjID+"'");
            
            while(result.next())
            {
                System.out.print("Name = "+result.getString(1));
                System.out.println(" "+result.getString(2));
            }
            con.close();
        }
        catch(Exception e)
        {
            System.out.println(e);
        }
    }
}