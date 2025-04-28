import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		int A[] = new int[100];
		
		A[0] = 0;
		A[1] = 1;
		A[2] = 1;
		
		for(int i = 3;i <= 20;i++) {
			A[i] = A[i-1] + A[i-2];
		}
		
		System.out.println(A[N]);
		
	}

}