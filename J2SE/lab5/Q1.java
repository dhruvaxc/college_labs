/*Q.1)Image a queue of people standing at the bus stand to buy tickets .
whenever a person buys a ticket,he leaves the queue and all the remaining 
people take one step forward.any new person joins the queue at the
back.implement the above queue for integer in the folowing mannerdefine an
interface named QueueImpl that will have method to insert into the queue ,
delete from the queue and display the integer currently present int the
queue.let a class calleld QueueDemo implement the interface .Make your own 
provisions for exception handaling in case of overflow and underflow condation 
use an array (with maximum size 10) to hiuse the queue. Write a
single main program ti demonstrate the insert ,delete and display 
operations as well as the Exception handalingin case of overflow and underflow 
condation. */
import java.util.*;

interface QueueImpl {
    void insert(int x) throws Exception;
    int delete() throws Exception;
    void display();
}

class QueueDemo implements QueueImpl {
    private int[] arr = new int[10];
    private int front = 0, rear = -1, size = 0;

    public void insert(int x) throws Exception {
        if (size == 10) throw new Exception("Queue Overflow");
        arr[++rear] = x;
        size++;
    }

    public int delete() throws Exception {
        if (size == 0) throw new Exception("Queue Underflow");
        int val = arr[front++];
        size--;
        return val;
    }

    public void display() {
        if (size == 0) {
            System.out.println("Queue is empty");
            return;
        }
        for (int i = front; i <= rear; i++) System.out.print(arr[i] + " ");
        System.out.println();
    }
}

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        QueueDemo q = new QueueDemo();
        int choice;
        do {
            System.out.println("1.Insert 2.Delete 3.Display 4.Exit");
            choice = sc.nextInt();
            try {
                switch (choice) {
                    case 1 -> { System.out.print("Enter value: "); q.insert(sc.nextInt()); }
                    case 2 -> System.out.println("Deleted: " + q.delete());
                    case 3 -> q.display();
                }
            } catch (Exception e) { System.out.println(e.getMessage()); }
        } while (choice != 4);
        sc.close();
    }
}