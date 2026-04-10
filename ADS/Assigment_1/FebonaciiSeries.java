package Recursion.Assigment_1;

public class FebonaciiSeries {
    public static void febo (int a, int b,int n)
    {
        if(n==0)
            return ;
        int c = a+b;
        System.out.print(" " + c);
        febo(b, c, n-1);
    }
    public static void main(String[] args) {
        int a=0,b=1,n=10;
        System.out.print("Febonacii Series -> " +a+" "+b);
        febo(a, b, n);
    }
}
