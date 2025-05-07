

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader st = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(st.readLine());
		
		String[] input = st.readLine().split(" ");
		int A[] = new int[N];
		
		for(int i = 0;i < N;i++) {
			A[i] = Integer.parseInt(input[i]);
		}
		
		Arrays.sort(A);
		
		System.out.println(A[(N - 1) / 2]);

	}

}
