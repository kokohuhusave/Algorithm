import java.util.ArrayList;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N, K;
		
		N = sc.nextInt();
		K = sc.nextInt();
		
		ArrayList<Integer> A = new ArrayList<>();
		
		for(int i = 1;i <= N;i++) {
			if(N % i == 0) {
				A.add(i);
			}
		}
		if(K-1 < A.size()) {
			System.out.println(A.get(K - 1));
		}else {
			System.out.println(0);
		}
		
	}

}
