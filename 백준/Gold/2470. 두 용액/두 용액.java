
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		Long A[] = new Long[N];
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for(int i = 0; i < N;i++) {
			A[i] = Long.parseLong(st.nextToken());
		}
		
		Arrays.sort(A);
		
		int i = 0;
		int j = N - 1;
		Long min = Long.MAX_VALUE;
		long ans1 = 0, ans2 = 0; 
		
		
		while(i < j) {
			
			Long sum = A[i] + A[j];
			
			if(Math.abs(sum) < min) {
				min = Math.abs(sum);
				ans1 = A[i];
				ans2 = A[j];
			}
			
			if(sum < 0){
				i++;
			}else {
				j--;
			}
		}
		System.out.println(ans1 + " " + ans2);
	}
}
