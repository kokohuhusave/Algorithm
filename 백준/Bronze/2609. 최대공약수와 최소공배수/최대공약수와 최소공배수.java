

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String[] input = br.readLine().split(" ");
		int num1 = Integer.parseInt(input[0]);
		int num2 = Integer.parseInt(input[1]);
		
		int GCD = (int) getGCD(num1, num2);
		
		System.out.println(GCD);
		System.out.println((num1 * num2) / GCD);
		
	}
	
	public static Object getGCD(int num1, int num2) {
		if (num1 % num2 == 0) {
            return num2;
        }
        return getGCD(num2, num1%num2);

	}
}
