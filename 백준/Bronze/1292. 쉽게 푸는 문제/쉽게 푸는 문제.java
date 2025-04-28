
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Main {

	public static void main(String[] args) throws Exception{
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		
		String[] input = bf.readLine().split(" ");
		
		int count = 1;
		
		int A = Integer.parseInt(input[0]);
		int B = Integer.parseInt(input[1]);
		
		ArrayList<Integer> S = new ArrayList<>();
		ArrayList<Integer> K = new ArrayList<>();
		
		for(int i = 1;i <= B;i++) {
			for(int j = 1; j <= i;j++) {
				S.add(i);
		        
		        if (K.size() == 0) {
		            K.add(i);
		        } else {
		            K.add(K.get(K.size() - 1) + i);
		        }
			}
		}
		
		int result;
        if (A == 1) {
            result = K.get(B - 1); 
        } else {
            result = K.get(B - 1) - K.get(A - 2);
        }
        
        System.out.println(result);
	
	}

}
