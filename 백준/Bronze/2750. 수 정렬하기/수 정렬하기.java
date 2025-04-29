
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		ArrayList<Integer> A = new ArrayList<>();
		
		for(int i = 0;i < N;i++) {
			int temp = Integer.parseInt(br.readLine());
			A.add(temp);
		}
		Collections.sort(A);
		
		for(int i = 0;i < N;i++) {
			System.out.println(A.get(i));
		}
		
	}

}
