import java.util.Scanner;
public class table {
    public static void main(String[] args) {   
          Scanner s1 =new Scanner(System.in);
          int i,j,k,n=5;
          for(i=1;i<=n;i++)
          {
            for(j=1;j<=i;j++)
            {
              System.out.print((i*j)+" ");
            }
            System.out.println("");
          } 
        }
}
