class Main {
    public static void main(String[] args) {
        int arr[] = {66, 24, 11, 80, 35};
        selectionsort(arr);
        
        for(int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }

    public static void selectionsort(int arr[]) {
        int len = arr.length;

        for(int i = 0; i < len; i++) {
            int minIdx = i;

            for(int j = i + 1; j < len; j++) {
                if(arr[j] < arr[minIdx]) {
                    minIdx = j;
                }
            }

            int temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
        }
    }
}
