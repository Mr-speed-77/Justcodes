import java.util.LinkedList;
import java.util.Scanner;

class Main{
    
    public static void main(String[] args){
        
        LinkedList<String> animals = new LinkedList<>();
        
        Scanner sc = new Scanner(System.in);
        System.out.print("How many element you need add in the LinkedList: ");
        int n = sc.nextInt();
        sc.nextLine();
        
        for(int i=0; i<n;i++){
            System.out.println("Enter a "+(i+1)+" element: ");
            String value = sc.nextLine();
            animals.add(value);
            
        }
        // First Create List
    System.out.println("\nLinkedList: "+ animals);
    
    // Get a particular element
    System.out.println("LinkedList[1]: "+animals.get(1));
    
    // Change the element
    
    animals.set(1,"King Kong");
    
    // Remove the elements
    
    animals.remove(0);
    
    // After chage print the elements
    
    System.out.print("After changed LinkedList: "+animals);
    }
}