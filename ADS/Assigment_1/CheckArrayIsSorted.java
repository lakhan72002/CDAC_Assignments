package Recursion.Assigment_1;

public class CheckArrayIsSorted {
    public static void check(int[] arr, int i)
    {
        if(i==arr.length) //base contn
        {
            System.out.println("True");
            return;
        }

        if(arr[i-1] > arr[i])
        {
            System.out.println("False");
            return;
        }
        else 
            check(arr, i+1);
    }
    public static void main(String[] args) {
        int [] arr = {1,2,0};
        if(arr.length==1)
            System.out.println("True");
        else 
            check(arr,1);
    }
}
