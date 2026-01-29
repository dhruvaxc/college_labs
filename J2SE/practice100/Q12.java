class book
{
    String name,author;
    int price;
    book(String name, String author,int price)
    {
        this.name = name;
        this.author = author;
        this.price = price;
    }
    void display()
    {
        System.out.println("title: " + name);
        System.out.println("author: " + author);
        System.out.println("price: " +price);
        System.out.println();
    }
}
public class Q12
{
    public static void main(String[] args)
    {
        book b1=new book("harry potter", "jk rolling", 900);
        book b2=new book("reverend insanity", "fang yung", 900);
        b1.display();
        b2.display();
    }
}