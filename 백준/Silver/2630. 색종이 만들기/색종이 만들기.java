

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int[][] map;
	static boolean[][] visited;
	static int whiteCount;
	static int blueCount;
	
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
		
		System.out.println(whiteCount);
		
		System.out.println(blueCount);
		
		

	}
	static void divide(int x,int y, int size) {
		if(isSameColor(x, y, size)) {
			if(map[x][y] == 0) 
				whiteCount++;
			else
				blueCount++;
			return;
		}
		
		int newSize = size / 2;
		
		divide(x, y, newSize);
		divide(x, y + newSize, newSize);
		divide(x + newSize, y, newSize);
		divide(x + newSize, y + newSize, newSize);
	}
	
	
	static boolean isSameColor(int x,int y, int size) {
		int color = map[x][y];
		for(int i = x;i < x + size;i++) {
			for(int j = y; j < y + size;j++) {
				if(map[i][j] != color)
					return false;
			}
		}
		return true;
	}

}
