

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		String[] input = br.readLine().split(" "); 
		
		long A[] = new long[N];
		
		for (int i = 0; i < N; i++) {
			A[i] = Long.parseLong(input[i]);
		}
		
		long max = A[0];
		long min = A[0];
		
		for (int j = 0; j < N; j++) {
			if (A[j] > max) {
				max = A[j];
			}
			if (A[j] < min) {
				min = A[j];
			}
		}
		
		System.out.println(min + " " + max);
	}
}
