import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		
		int x[] = new int[N];
		int y[] = new int[N];
		
		for(int i = 0;i < N;i++) {
			x[i] = sc.nextInt();
			y[i] = sc.nextInt();
		}
		
		int A = 0;
		int B = 0;
		long minRSS = Long.MAX_VALUE;
		
		for(int a = 1; a <= 100;a++) {
			for(int b = 1;b <= 100;b++) {
				long rss = 0;
				for(int i = 0; i < N;i++) {
					long pred = (long) a * x[i] + b;
					long diff = y[i] - pred;
					rss += diff * diff;
				}if (rss < minRSS) {
					minRSS = rss;
					A = a;
					B = b;
				}
				
			}
		}
		System.out.println(A + " " + B);
	}

}