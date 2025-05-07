
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		int A[] = new int[N];
		
		String[] input = br.readLine().split(" ");
		
		for(int i = 0;i < N;i++) {
			A[i] = Integer.parseInt(input[i]);
		}
		
		int sum = 0;
		
		Arrays.sort(A);
		
		int time = 0, temp = 0;
		
		for(int i = 0;i < N;i++) {
			temp += A[i];
			time += temp;
		}
		
		System.out.println(time);
	}

}
