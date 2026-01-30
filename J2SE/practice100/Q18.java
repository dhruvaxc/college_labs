/*Design an Employee class with empId, name, and salary. Create an employee object and
print details. */
class Employee 
{
    private String empId;
    private String name;
    private double salary;  
    public Employee(String empId, String name, double salary) 
    {
        this.empId = empId;
        this.name = name;
        this.salary = salary;
    }
    public String getEmpId() 
    {
        return empId;
    }
    public String getName() 
    {
        return name;
    }
    public double getSalary() 
    {
        return salary;
    }
}
public class Q18 
{
    public static void main(String[] args) 
    {
        Employee employee = new Employee("E001", "Alice", 75000.00);
        System.out.println("Employee ID: " + employee.getEmpId());
        System.out.println("Name: " + employee.getName());
        System.out.println("Salary: $" + employee.getSalary());
    }
}
