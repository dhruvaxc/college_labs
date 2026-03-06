/*Define a class called fruit with the following attributes :
1. Name of the fruit.
2. Single fruit or bunch fruit.
3. Price.
Define a suitable constructor and displayFruit() method that 
displays values of all the attributes. Write a program that creates 
2 objects of fruit class and display their attributes. */
import java.util.*;

class Fruit {
    String name,type; double price;
    Fruit(String n,String t,double p){ name=n; type=t; price=p; }
    void displayFruit(){ System.out.println(name+" "+type+" "+price); }
}

public class Q4 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter fruit1 name type price: ");
        Fruit f1=new Fruit(sc.next(),sc.next(),sc.nextDouble());
        System.out.print("Enter fruit2 name type price: ");
        Fruit f2=new Fruit(sc.next(),sc.next(),sc.nextDouble());
        f1.displayFruit(); f2.displayFruit();
        sc.close();
    }
}