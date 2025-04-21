
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] matrix = new int[2][2];

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                matrix[i][j] = sc.nextInt();

        int answer = 0;
        double maxValue = calc(matrix);

        for (int i = 1; i <= 3; i++) {
            matrix = rotate90(matrix);  
            double value = calc(matrix);
            if (value > maxValue) {
                maxValue = value;
                answer = i;
            }
        }

        System.out.println(answer);
    }

    public static double calc(int[][] m) {
        return (double)m[0][0] / m[1][0] + (double)m[0][1] / m[1][1];
    }

    public static int[][] rotate90(int[][] m) {
        int n = m.length;
        int[][] r = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                r[j][n - 1 - i] = m[i][j];
        return r;
    }
}