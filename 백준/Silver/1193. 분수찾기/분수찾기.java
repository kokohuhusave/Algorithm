

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int line = 1;
		int N = sc.nextInt();
		
		while(N - line > 0) {
			N -= line;
			line++;		
		}
		if(line % 2 == 1) {
			System.out.println((line + 1 - N) + "/" + N);
		}else {
			System.out.println(N + "/" + (line + 1 - N));
		}
	}

}
