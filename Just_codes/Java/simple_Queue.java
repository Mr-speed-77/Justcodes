import java.util.LinkedList;
import java.util.Queue;

class Main {
    public static void main(String[] args) {
        // Create a Queue to hold String values
        Queue<String> queue = new LinkedList<>();

        // Enqueue elements
        queue.add("Apple");
        queue.add("Banana");
        queue.add("Cherry");
        queue.add("Tomato");
        
        // Peek at the front element
        System.out.println("Top element (peek): " + queue.peek());
        
        // Optional: Dequeue an element
        String removedElement = queue.poll();
        System.out.println("Dequeued element: " + removedElement);
        System.out.println("Queue after dequeue: " + queue);
        
        // Check if the queue is empty
        System.out.println("Is queue empty? " + queue.isEmpty());
        
        // Get the size of the queue
        System.out.println("Queue size: " + queue.size());
    }
}
