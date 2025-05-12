

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	
	static ArrayList<Integer>[] A;
	static boolean visited[];
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		int N = Integer.parseInt(st.nextToken());
		
		int M = Integer.parseInt(st.nextToken());
		
		int V = Integer.parseInt(st.nextToken());
		
		A = new ArrayList[N + 1];
		
		visited = new boolean[N  + 1];
		
		for(int i = 1;i < N + 1;i++) {
			A[i] = new ArrayList<Integer>();
		}
		
		for(int i = 0;i < M;i++) {
			st = new StringTokenizer(br.readLine());
			int s = Integer.parseInt(st.nextToken());
			int e = Integer.parseInt(st.nextToken());
			A[s].add(e);
			A[e].add(s);
		}
		
		for(int i = 1;i < N + 1;i++) {
			Collections.sort(A[i]);
		}
		
		visited = new boolean[N + 1];
		DFS(V);
		System.out.println();
		visited = new boolean[N + 1];
		BFS(V);
		System.out.println();
		
	}
	
	public static void DFS(int node) {
		System.out.print(node + " ");	
		visited[node] = true;
		for(int i : A[node]) {
			if(visited[i] == false) {
				DFS(i);
			}
		}
	}
	
	public static void BFS(int node) {
		Queue<Integer> queue = new LinkedList<Integer>();
		queue.add(node);
		visited[node] = true;
		
		while(queue.isEmpty() == false) {
			int Now_node = queue.poll();
			System.out.print(Now_node + " ");
			for(int i : A[Now_node]) {
				if(visited[i] == false) {
					visited[i] = true;
					queue.add(i);
				}
				
			}
		}
	}

}
