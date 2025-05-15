

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int[][] map;
	static boolean[][] visited;
	static int ZeroCount;
	static int OneCount;
	static int minusCount;
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		map = new int[N][N];
		
		for(int i = 0;i < N;i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			for(int j = 0;j < N;j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		
		divide(0, 0, N);
		
		System.out.println(minusCount);
		System.out.println(ZeroCount);
		System.out.println(OneCount);
		
		
	}
	
	static void divide(int x,int y, int size) {
		if(isSameNumber(x, y, size)) {
			if(map[x][y] == 0) {
				ZeroCount++;
			}else if(map[x][y] == 1) {
				OneCount++;
			}else {
				minusCount++;
			}
			return;
		}
		
		int newSize = size / 3;
		
		for (int i = 0; i < 3; i++) {
	        for (int j = 0; j < 3; j++) {
	            divide(x + i * newSize, y + j * newSize, newSize);
	        }
	    }
	}
	
	static boolean isSameNumber(int x, int y, int size) {
		int number = map[x][y];
		for(int i = x;i < x + size;i++) {
			for(int j = y;j < y + size;j++) {
				if(map[i][j] != number)
					return false;
			}
		}
		return true;
	}

}
