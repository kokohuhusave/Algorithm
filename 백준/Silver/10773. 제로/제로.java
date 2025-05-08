
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {

	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		Stack<Integer> stack = new Stack<>();
			
		int N = Integer.parseInt(br.readLine());
	
		
		for(int i = 0;i < N;i++) {
			int temp = Integer.parseInt(br.readLine());
			
			stack.push(temp);
			
			if(temp == 0) {
				stack.pop();
				stack.pop();
			}
		}
		
		long sum = 0;
		
		int size = stack.size();
		
		for(int i = 0;i < size;i++) {
			sum += stack.peek();
			stack.pop();
		}
		
		System.out.println(sum);
		
	}

}