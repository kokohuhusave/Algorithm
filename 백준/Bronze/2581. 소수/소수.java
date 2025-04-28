import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) throws Exception, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int A = Integer.parseInt(br.readLine());
		int B = Integer.parseInt(br.readLine());
		
		int sum = 0;
		int min = Integer.MAX_VALUE;
		
		for(int i = A;i <= B;i++) {
			if(isPrime(i)) {
				sum += i;
				if(i < min) {
					min = i;
				}
			}
		}
		
		if(sum == 0) {
			System.out.println(-1);
		}else {
			System.out.println(sum);
			System.out.println(min);
		}
	}
		
		
		public static boolean isPrime(int num) {
			if(num < 2)
				return false;
			
			for(int i = 2;i * i <= num;i++) {
				if(num % i == 0)
					return false;
			}
			return true;
	}

}
