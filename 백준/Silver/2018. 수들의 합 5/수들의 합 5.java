
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader bufferReader = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer stringTokenizer = new StringTokenizer(bufferReader.readLine());

		int N = Integer.parseInt(stringTokenizer.nextToken());
		int count = 1;
		int first_idx = 1;
		int end_idx = 1;
		int sum = 1;
		
		while(end_idx != N) {
			if(sum == N) {
				count++;
				end_idx++;
				sum = sum + end_idx;
			}
			else if(sum > N) {
				sum = sum - first_idx;
				first_idx++;
			}
			else {
				end_idx++;
				sum = sum + end_idx;
			}
		}
		System.out.println(count);
	}

}
