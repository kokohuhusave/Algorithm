

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
	
	public static int[] queue;
	static int front = 0;
	static int rear = 0;
	
	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		
		int N = Integer.parseInt(br.readLine());
		queue = new int[N];
		
		for(int i = 0;i < N;i++) {
			String str = br.readLine();
			String[] parts = str.split(" ");
			
			switch (parts[0]) {
			case "push":
				push(Integer.parseInt(parts[1]));
				break;
				
			case "pop":
				sb.append(pop()).append('\n');
				break;
			
			
			case "size":
				sb.append(size()).append('\n');
				break;
				
			case "empty":
				sb.append(empty()).append('\n');
				break;
			
			case "front":
				sb.append(front()).append('\n');
                break;
            
			case "back":
				sb.append(back()).append('\n');
                break;
			}
			
		}
		System.out.print(sb);
	}

	private static void push(int item) {
		queue[rear++] = item;
	}

	private static int pop() {
		if (front == rear) return -1;
		return queue[front++];
	}

	private static int size() {
		return rear - front;
	}

	private static int empty() {
		return (rear == front) ? 1 : 0;
	}

	private static int front() {
		if (front == rear) return -1;
		return queue[front];
	}

	private static int back() {
		if (front == rear) return -1;
		return queue[rear - 1];
	}
}
