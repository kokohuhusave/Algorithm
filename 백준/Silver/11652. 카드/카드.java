

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		long A[] = new long[N];
		
		for(int i = 0;i < N;i++) {
			A[i] = Long.parseLong(br.readLine());
		}
		
		Arrays.sort(A);
		
		int[] counts = new int[N];
		
		counts[0] = 1;
        int maxCount = 1;
        long maxNum = A[0];
        for (int i = 1; i < N; i++) {
            counts[i] = 1;
            if (A[i] == A[i-1]) counts[i] = counts[i-1] + 1;
            if (counts[i] > maxCount) {
                maxCount = counts[i];
                maxNum = A[i];
            }
        }
        System.out.println(maxNum);
	}

}
