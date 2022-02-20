
package JDBC_codes;

public class Call_curd_operation {
    
    private JDBC_curd_operation obj;
    public Call_curd_operation()
    {
        obj=new JDBC_curd_operation();
    }
    
    public void read()
    {
        obj.employee_data();
    }
    public void insert(int EmpID, String FName, String LName, String City, int ProjID)
    {
        String cmd="insert into Employee(EmpID,FName,LName,City,ProjID) values('"+EmpID+"','"+FName+"','"+LName+"','"+City+"','"+ProjID+"')";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been saved successfully!!");
        else
            System.out.println("Record has not been saved successfully!!");
    }
    public void updateProjectID(int EmpID,int ProjID)
    {
        String cmd="update Employee set ProjID='"+ProjID+"' where EmpID='"+EmpID+"'";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been updated successfully!!");
        else
            System.out.println("Record has not been updated successfully!!");
    }
    public void updateFirstName(int EmpID,String FName)
    {
        String cmd="update Employee set FName='"+FName+"' where EmpID='"+EmpID+"'";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been updated successfully!!");
        else
            System.out.println("Record has not been updated successfully!!");
    }
    public void updateLastName(int EmpID,String LName)
    {
        String cmd="update Employee set LName='"+LName+"' where EmpID='"+EmpID+"'";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been updated successfully!!");
        else
            System.out.println("Record has not been updated successfully!!");
    }
    public void updateCity(int EmpID,String City)
    {
        String cmd="update Employee set City='"+City+"' where EmpID='"+EmpID+"'";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been updated successfully!!");
        else
            System.out.println("Record has not been updated successfully!!");
    }
    public void delete(int EmpID)
    {
        String cmd="delete from Employee where EmpID='"+EmpID+"'";
        if(obj.record_manipulation(cmd))
            System.out.println("Record has been deleted successfully!!");
        else
            System.out.println("Record has not been deleted successfully!!");
    }
    public void getEmpProjID(int EmpID)
    {
        obj.getEmployeeProjectID(EmpID);
    }
    public void getEmpCity(int EmpID)
    {
        obj.getEmployeeCity(EmpID);
    }
    public void getEmpName(int ProjID)
    {
        obj.getEmployeeName(ProjID);
    }
}