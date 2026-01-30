/*Create a Person class with name and age. Create three person objects representing
family members. */
class Person 
{
    private String name;
    private int age;
    
    public Person(String name, int age) 
    {
        this.name = name;
        this.age = age;
    }
    
    public String getName() 
    {
        return name;
    }
    
    public int getAge() 
    {
        return age;
    }
}
public class Q15 
{
    public static void main(String[] args) 
    {
        Person father = new Person("John", 45);
        Person mother = new Person("Jane", 42);
        Person child = new Person("Emily", 18);
        System.out.println("Father: " + father.getName() + ", Age: " + father.getAge());
        System.out.println("Mother: " + mother.getName() + ", Age: " + mother.getAge());
        System.out.println("Child: " + child.getName() + ", Age: " + child.getAge());
    }
}
