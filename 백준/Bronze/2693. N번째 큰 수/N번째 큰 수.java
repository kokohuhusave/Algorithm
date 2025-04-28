
import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int T = Integer.parseInt(br.readLine());
		
		for (int t = 0; t < T; t++) {
            String[] input = br.readLine().split(" ");
            int[] A = new int[10];

            for (int i = 0; i < 10; i++) {
                A[i] = Integer.parseInt(input[i]);
            }

            Arrays.sort(A); 

            System.out.println(A[7]);
        }
	}

}
