

import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws Exception{
		Scanner sc = new Scanner(System.in);
		
		int sum = 0;
		int A[] = new int[10];
		
		for(int i = 0;i < 10;i++) {
			int out = sc.nextInt();
			int input = sc.nextInt();
			
			sum += input - out;
			A[i] = sum;
			
		}
		
		int max = A[0];
		
		for(int j = 0;j < 10;j++) {
			if(max < A[j]) {
				max = A[j];
			}
		}
		
		System.out.println(max);
	}

}