import java.util.Scanner;
public class sunny {
    public static void main(String[] args) {
        Scanner S1=new Scanner(System.in);
        int v;
        double r;
        System.out.print("Enter the no. :");
        v=S1.nextInt();
        r=(v+1)*(v+1);
        if((int)r==r)
        {
            System.out.println("This is a sunny no. :");
        }
        else 
        {
            System.out.println("This is not a sunny no. :");
        }
    }
}