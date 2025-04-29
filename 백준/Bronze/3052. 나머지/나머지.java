import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws NumberFormatException, IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
        int count = 0; 
        int value[] = new int[10];
        
        for(int i = 0;i < 10;i++) {
        	int N = Integer.parseInt(br.readLine());
        	value[i] = N % 42;
        }
        
        value = Arrays.stream(value).distinct().toArray();
        System.out.println(value.length);
	}

}

