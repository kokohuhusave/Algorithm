

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.util.Collections;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferReader = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer stringTokenizer = new StringTokenizer(bufferReader.readLine());

		int SIZE = Integer.parseInt(stringTokenizer.nextToken());
		int N = Integer.parseInt(stringTokenizer.nextToken());
		
		int A[] = new int[SIZE + 1];
		
		stringTokenizer = new StringTokenizer(bufferReader.readLine());
		
		for(int i = 1;i <= SIZE;i++) {
			A[i] = Integer.parseInt(stringTokenizer.nextToken());
		}
		
		Arrays.sort(A);
		
		for(int i = 2;i < SIZE+1;i++) {
			A[i] = A[i-1] + A[i];
		}
		
		while(N-- > 0) {
			stringTokenizer = new StringTokenizer(bufferReader.readLine());
			int start = Integer.parseInt(stringTokenizer.nextToken());
			int end = Integer.parseInt(stringTokenizer.nextToken());
			int result = A[end] - A[start-1];
			System.out.println(result);
		}
	}
}
