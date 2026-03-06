/*Createa class called Student which has the following methods:
i). Average: which would accept marks of 3 examinations & return 
    whether the student has passed or failed
    Depending on whether he has scored an average above 50 or not.
ii). Input name: which would accept the name of the student & returns the name. */
import java.util.*;

class Student {
    String name;
    String inputName(String n){ name=n; return name; }
    String average(int m1,int m2,int m3){
        double avg=(m1+m2+m3)/3.0; return avg>50?"Passed":"Failed";
    }
}

public class Q6 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Student s=new Student();
        System.out.print("Enter student name: ");
        s.inputName(sc.nextLine());
        System.out.print("Enter 3 marks: ");
        System.out.println(s.name+" "+s.average(sc.nextInt(),sc.nextInt(),sc.nextInt()));
        sc.close();
    }
}