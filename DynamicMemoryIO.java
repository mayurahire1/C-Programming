
import java.util.Scanner;

class DynamicMemoryIO {

    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        int size = 0;
        int i = 0;

        System.out.println("Enter number of Elements: ");
        size = sobj.nextInt();

        // Dynamic Memory allocation
        float Marks[] = new float[size];

        // use the memory
        System.out.println("Enter your Marks: ");

        for (i = 0; i < size; i++) 
        {
            Marks[i] = sobj.nextFloat();
        }

        System.out.println("Entered Marks are: ");
        for (i = 0; i < size; i++) 
        {
            System.out.println(Marks[i]);
        }

        Marks = null;
        System.gc();

    }
}
