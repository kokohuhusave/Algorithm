
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException{ 
		//throws IOException 
		//	buffer클래스 사용시 사용자 입력은 다양한 타입이 들어 올수있다 잘못된 값이 들어왔을때 에러가 나지 않게 예외처리를 해둔다
		BufferedReader bufferreader = new BufferedReader(new InputStreamReader(System.in));
		//기존 scanner과 다르게 buffer를 사용 하여 입력한것들을 한번에 저장했다가 전송하여 속도가 더 빠르다
		StringTokenizer stringTokenizer = new StringTokenizer(bufferreader.readLine());
		
		int N = Integer.parseInt(stringTokenizer.nextToken()); //N개의 수의 갯수
		int M = Integer.parseInt(stringTokenizer.nextToken()); //M합을 구해야 하는 횟수
		
		long[] S = new long[N+1]; //합 배열 선언
		
		stringTokenizer = new StringTokenizer(bufferreader.readLine()); // N개의 수 입력 
	
		for(int i = 1;i <= N;i++) {
			S[i] = S[i-1] + Integer.parseInt(stringTokenizer.nextToken());  // N개의 수를 합배열에 넣는다
		}
		
		for(int k = 0;k < M;k++) {
			stringTokenizer = new StringTokenizer(bufferreader.readLine());
			int i = Integer.parseInt(stringTokenizer.nextToken());	// i번쨰수 입력  
			int j = Integer.parseInt(stringTokenizer.nextToken());	// j번째수 입력
			System.out.println(S[j] - S[i-1]); // i부터 j까지의 합을 출력
			
		}		
	}
}