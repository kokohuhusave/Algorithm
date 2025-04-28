import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int count1 = 0;
		int N = Integer.parseInt(br.readLine());
		
		String[] input = br.readLine().split(" ");
		
		for(int i = 0;i < N;i++) {
			int K = Integer.parseInt(input[i]);
			
			int count = 0;
			
			for(int j = 1;j <= K;j++) {
				if(K % j == 0) {
					count++;
				}
			}
			if(count == 2) {
				count1++;
			}
		}
		System.out.println(count1);
	}

}
