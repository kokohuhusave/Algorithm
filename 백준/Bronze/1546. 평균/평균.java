import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
		
		int N = sc.nextInt();
		int Arr[] = new int[N];
		
		for(int i = 0;i < N; i++) {
			Arr[i] = sc.nextInt();
		}
		
		int max = 0;
		int sum = 0;
		
		for(int i = 0;i < N;i++) {
			sum += Arr[i];
			if(Arr[i] > max)
				max = Arr[i];
		}
		
		System.out.println(sum * 100.0 / max / N);
	}
}