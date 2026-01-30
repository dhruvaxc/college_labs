/*Create a Student class with attributes: name and rollNumber. 
Create an object and print its details. */
class Student
{
    String name;
    int rollNumber;
    Student(String name, int rollNumber)
    {
        this.name = name;
        this.rollNumber = rollNumber;
    }
    void display()
    {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
    }
}
public class Q11 
{
    public static void main(String[] args)
    {
        Student s1 = new Student("Dhruva", 101);
        s1.display();
    }
}