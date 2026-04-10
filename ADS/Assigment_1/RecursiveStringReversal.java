package Recursion.Assigment_1;

public class RecursiveStringReversal {
    public static void reverseString(String name, int i)
    {
        if(i==name.length()) // base condtn
            return;

        reverseString(name, i+1);
        System.out.print(name.charAt(i));
    }
    public static void main(String[] args) {
        
        String name = "abcde";
        System.out.println("Original String -> " + name);
        System.out.print("Reversed String -> ");
        reverseString(name, 0);
    }
}
