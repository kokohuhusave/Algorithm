
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
			int N = Integer.parseInt(br.readLine());
		
			String[] A = new String[N];
		
			for(int i = 0;i < N;i++) {
				A[i] = br.readLine();
			}
			
			Arrays.sort(A, new Comparator<String>() {

				@Override
				public int compare(String o1, String o2) {
					if(o1.length() == o2.length()) {
						return o1.compareTo(o2);
					}else {
						return o1.length() - o2.length();
					}
				}
				
			});
			
		System.out.println(A[0]);
		for(int j = 1;j < N;j++) {
			if(!A[j].equals(A[j - 1])) {
				System.out.println(A[j]);
			}
		}

		
	}

}
