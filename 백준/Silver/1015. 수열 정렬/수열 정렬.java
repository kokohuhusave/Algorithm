
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		int P[] = new int[N];
		
		int A[] = new int[N];
	
		
		int B[] = new int [N];
		
		String[] input = br.readLine().split(" ");
		
		for(int i = 0;i < N;i++) {
			P[i] = Integer.parseInt(input[i]);
			B[i] = P[i];
		}
		
		Arrays.sort(B);
		
		for(int i = 0;i < N;i++) {
			for(int j = 0;j < N;j++) {
				if(P[i] == B[j]) {
					A[i] = j;
					B[j] = -1;
					break;
				}
			}
		}
		
		for (int i = 0; i < N; i++) {
		    System.out.print(A[i] + " ");
		}

	}

}
