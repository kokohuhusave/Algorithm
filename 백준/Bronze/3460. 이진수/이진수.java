import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		
		int T = Integer.parseInt(bf.readLine());
		
		for(int i = 0;i < T;i++) {
			int n = Integer.parseInt(bf.readLine());
			
			int index = 0;
			
			while(n > 0) {
				if(n%2 == 1) {
					System.out.print(index + " ");
				}
				n /= 2;
				index++;
			}
			System.out.println();
		}
	}

}
