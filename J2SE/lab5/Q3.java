/*Create Product having following attributes: Product ID, Name, Category ID 
and UnitPrice. Create ElectricalProduct having the following additional attributes:
VoltageRange and Wattage. Add a behavior to change the Wattage and price of the 
electrical product. Display the updated ElectricalProduct details. */
import java.util.*;

class Product {
    int productId; String name; int categoryId; double unitPrice;
    Product(int id, String n, int cid, double price) {
        productId=id; name=n; categoryId=cid; unitPrice=price;
    }
}

class ElectricalProduct extends Product {
    String voltageRange; int wattage;
    ElectricalProduct(int id,String n,int cid,double price,String v,int w){
        super(id,n,cid,price); voltageRange=v; wattage=w;
    }
    void update(int newWattage,double newPrice){ wattage=newWattage; unitPrice=newPrice; }
    void display(){ System.out.println(productId+" "+name+" "+categoryId+" "+unitPrice+" "+voltageRange+" "+wattage); }
}

public class Q3 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter Product ID, Name, Category ID, Price, VoltageRange, Wattage: ");
        int id=sc.nextInt(); String name=sc.next(); int cid=sc.nextInt(); double price=sc.nextDouble();
        String v=sc.next(); int w=sc.nextInt();
        ElectricalProduct ep=new ElectricalProduct(id,name,cid,price,v,w);
        ep.display();
        System.out.print("Enter new Wattage and Price: ");
        ep.update(sc.nextInt(), sc.nextDouble());
        ep.display();
        sc.close();
    }
}