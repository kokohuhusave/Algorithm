

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String input = br.readLine();
		
		String[] minus = input.split("-");
		
		int result = 0;
		
		for(int i = 0;i < minus.length;i++) {
			String[] plus = minus[i].split("\\+");
			
			int sum = 0;
			for(String num : plus) {
				sum += Integer.parseInt(num);
			}
			
			if(i == 0) {
				result += sum;
			}else {
				result -= sum;
			}
		}
		System.out.println(result);
	}

}

