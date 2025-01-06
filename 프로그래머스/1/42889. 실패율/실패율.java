import java.util.HashMap;

class Solution {
    public int[] solution(int N, int[] stages) {
        int[] callenge = new int[N + 2];
        for(int i = 0;i < stages.length;i++){
	        callenge[stages[i]] += 1;
        }
        
        HashMap<Integer, Double> fails = new HashMap<>();
        double total = stages.length;
        
        // 각 스테이지의 실패율 계산
        for(int i = 1; i <= N;i++){
	        if(callenge[i] == 0){ // 도전한 사람이 없는 경우 실패율은 0으로 설정
		        fails.put(i, 0.);
	        }else{
		        fails.put(i, callenge[i] / total); // 실패율 계산
		        total -= callenge[i]; // 다음 스테이지 실패율을 구하기 위해 현제 스테이지의 인원을 뺀다
	        }
        }
        return fails.entrySet()
                    .stream()
                    .sorted((t1, t2) -> Double.compare(t2.getValue(), t1.getValue()))
                    .mapToInt(HashMap.Entry::getKey) // 키를 가져오려면 getKey를 사용
                    .toArray();

        
    }
}