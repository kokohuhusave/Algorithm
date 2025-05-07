

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc = new Scanner(System.in);
	
		int N = sc.nextInt();
		
		String[][] member = new String[N][2];
		
		for(int i = 0;i < N;i++) {
			member[i][0] = sc.next();
			member[i][1] = sc.next();
		}
		
		Arrays.sort(member, new Comparator<String[]>() {

			@Override
			public int compare(String[] o1, String[] o2) {
				return Integer.parseInt(o1[0]) - Integer.parseInt(o2[0]);
			}
			
			
		});
		
		for(int i = 0;i < N;i++) {
			System.out.println(member[i][0] + " " + member[i][1]);
		}
	}
	
	
}
