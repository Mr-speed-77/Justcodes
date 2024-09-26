import java.util.Scanner;

class Main{
    
    public static int binarysearch(int arr[], int target){
        int low = 0;
        int high = arr.length-1;
        
        while(low<=high){
            int mid = (low+high)/2;
            
            if(arr[mid] == target){
                return mid;
            }
            
            if(arr[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
    
    public static void loop(int arr[]){
        
        for(int i =0; i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.print("\n");
    }
    
    
    public static void main(String[] args){
        int arr[] = {3,4,5,6,7};
        System.out.print("Array: ");
        loop(arr);
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter element to be searched: ");
        int target = sc.nextInt();
        
        int result = binarysearch(arr, target);
        if(result!=-1){
            System.out.println("Element found at index: "+result);
        }    
        else{
            System.out.println("Element not found !");
        }
    }
        
}