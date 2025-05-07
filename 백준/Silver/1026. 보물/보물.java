import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		
		int N = Integer.parseInt(br.readLine());
		
		int A[] = new int[N];
		
		int B[] = new int[N];
		
		String[] input = br.readLine().split(" ");
		
		for(int i = 0;i < N;i++) {
			A[i] = Integer.parseInt(input[i]);
		}
		
		String[] inputs = br.readLine().split(" ");
		
		for(int i = 0;i < N;i++) {
			B[i] = Integer.parseInt(inputs[i]);
		}
		
		Arrays.sort(A);
		
		Arrays.sort(B);
		
		int sum = 0;
		
		for(int i = 0;i < N;i++) {
			
			sum += A[i] * B[N-1-i];
		}
		
		System.out.println(sum);
		
	}

}
