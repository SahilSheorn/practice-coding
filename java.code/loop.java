public class loop {
    public static void main(String[] args) {
        int n = 5; // The number of rows

        for (int i = 1; i <= n; i++) {
            // Print numbers in decreasing order
            for (int j = n; j >= i; j--) {
                System.out.print(j);
            }

            // Print asterisks
            for (int k = 1; k <= i - 1; k++) {
                System.out.print("*");
            }

            // Move to the next line
            System.out.println();
        }
    }
}
