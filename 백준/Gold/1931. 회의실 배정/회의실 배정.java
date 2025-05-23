

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int[][] A = new int[N][2];
		
		
		
		for(int i = 0;i < N;i++) {
			A[i][0] = sc.nextInt();
			A[i][1] = sc.nextInt();
		}
		
		Arrays.sort(A, new Comparator<int[]>() {
			@Override
			public int compare(int[] S, int[] E) {
				if(S[1] == E[1]) {
					return S[0] - E[0];
				}
				return S[1] - E[1];
			}
		});
		
		int count = 0;
		
		int end = -1;
		
		for(int i = 0;i < N;i++) {
			if(A[i][0] >= end) {
				end = A[i][1];
				count++;
			}
		}
		System.out.println(count);
	}

}
