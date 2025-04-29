
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num = Integer.parseInt(br.readLine());
		boolean found = false;
		
		for(int i = 1;i < num;i++) {
			int temp = i;
			int sum = i;
			
			while(temp != 0) {
				sum += temp % 10;
				temp /= 10;
			}
			
			if(sum == num) {
				System.out.println(i);
				found = true;
				break;
			}
		}
		
		if (!found) {
            System.out.println(0);
        }
		
	}

}
