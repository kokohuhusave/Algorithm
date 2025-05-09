

import java.io.IOException;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int[] dist = new int[N - 1];  // 거리
		int[] cost = new int[N];      // 주유소 비용

		// 거리 입력
		for (int i = 0; i < N - 1; i++) {
			dist[i] = sc.nextInt();
		}

		// 주유소 가격 입력
		for (int i = 0; i < N; i++) {
			cost[i] = sc.nextInt();
		}

		long result = 0;
		int minCost = cost[0];

		for (int i = 0; i < N - 1; i++) {
			if (cost[i] < minCost) {
				minCost = cost[i];
			}
			result += (long) minCost * dist[i];
		}

		System.out.println(result);
	}
}
