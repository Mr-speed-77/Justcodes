import java.util.Stack;

class Main{
    public static void main(String[] args){
        
        Stack<String> number = new Stack<>();
        
        number.push("Apple");
        number.push("Ball");
        number.push("Cherry");
        number.push("Dog");
        System.out.print("1st Stack: "+number);
        System.out.print("\nTop element(peek): "+number.peek());
        
        System.out.print("\nIf stack is Empty: "+number.isEmpty());
        System.out.print("\nStack size: "+number.size()+"\n");
        
        while(!number.isEmpty()){
            System.out.print(number.pop()+" ");
        }
    }
}