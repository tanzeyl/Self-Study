import java.util.Scanner;

public class MatrixOperations {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int m, i, j, k;
        System.out.println("Enter the order of the matrices.");
        m = sc.nextInt();
        int[][] a = new int[m][m];
        int[][] b = new int[m][m];
        int[][] c = new int[m][m];
        System.out.println("Enter the elements of first matrix.");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                a[i][j] = sc.nextInt();
        }
        System.out.println("Enter the elements of second matrix.");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                b[i][j] = sc.nextInt();
        }
        sc.close();
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++) {
                k = 0;
                c[i][j] = 0;
                while (k < 3) {
                    c[i][j] += a[i][k] * b[k][j];
                    k++;
                }
            }
        }
        System.out.println("Multiplication: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                System.out.print(c[i][j] + "\t");
            System.out.print("\n");
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                c[i][j] = a[i][j] + b[i][j];
        }
        System.out.println("Addition: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                System.out.print(c[i][j] + "\t");
            System.out.print("\n");
        }
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                c[i][j] = a[i][j] - b[i][j];
        }
        System.out.println("Subtraction: ");
        for (i = 0; i < m; i++) {
            for (j = 0; j < m; j++)
                System.out.print(c[i][j] + "\t");
            System.out.print("\n");
        }
    }
}
