import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static int count;
	static ArrayList<Integer>[] A;
	static boolean visited[];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int N = Integer.parseInt(br.readLine());
		
		int M = Integer.parseInt(br.readLine());
		
		A = new ArrayList[N + 1];
		
		visited = new boolean[N + 1];
		
		count = 0;
		
		for(int i = 1;i < N + 1;i++) {
			A[i] = new ArrayList<Integer>();
		}
		
		for(int i = 0;i < M;i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			A[s].add(e);
			A[e].add(s);
		}
		
		DFS(1);
		
		System.out.println(count - 1);
		
	}
	
	static void DFS(int start) {
	    if (!visited[start]) {
	        visited[start] = true;
	        count++;
	        for (int i = 0; i < A[start].size(); i++) {
	            DFS(A[start].get(i));
	        }
	    }
	}

	

}
