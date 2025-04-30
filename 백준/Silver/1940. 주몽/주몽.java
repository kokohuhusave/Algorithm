
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	
	static int A[] = new int[150001];
	
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		
		int N = Integer.parseInt(br.readLine());
		
		int M = Integer.parseInt(br.readLine());
		
		String[] input = br.readLine().split(" ");
		
		int count = 0;
		
		for(int k = 0;k < N;k++) {
			A[k] = Integer.parseInt(input[k]);
		}
		
		for(int i = 0;i < N;i++) {
			for(int j = i + 1; j < N;j++) {
				if(A[i] + A[j] == M) {
					count++;
				}
			}
		}
		
		System.out.println(count);
	}

}
