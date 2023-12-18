/*
#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int temp;
	int N, K;
	cin >> N;
	vector<int> A;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		A.push_back(temp);
	}

	sort(A.begin(), A.end());

	for (int i = 0; i < N; i++) {
		cout <<  A[i] << "\n";
	}
}
*/
#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& A, int S, int E, int K);
int partition(vector<int>& A, int S, int E);
void swap(vector<int>& A, int i, int j);

void quickSort(vector<int>& A, int S, int E, int K) {
	int pivot = partition(A, S, E);
	if (pivot == K) {	//K번째 수가 pivot이면 더는 구할 필요가 없다
		return;
	}
	else if (K < pivot) {
		quickSort(A, S, pivot - 1, K); // K가 pivot보다 작으면 왼쪽 그룹만 정렬 수행
	}
	else {
		quickSort(A, pivot + 1, E, K); // K가 pivot보다 크면 오른쪽 그룹만 정렬 수행
	}
}

int partition(vector<int>& A, int S, int E) {
	if (S + 1 == E) {
		if (A[S] > A[E]) {
			swap(A, S, E);
		}
		return E;
	}

	int M = (S + E) / 2;
	swap(A, S, M); // 중앙값을 1번째 요소로 이동
	int pivot = A[S];
	int i = S + 1, j = E;

	while (i <= j) {
		while (pivot < A[j] && j > 0) { // 피벗보다 작은 수가 나올때까지 j--
			j--;
		}
		while (pivot > A[i] && i < A.size() - 1) { // 피벗보다 큰 수가 나올 때까지 i++
			i++;
		}
		if (i <= j) {
			swap(A, i++, j--);
		}
	}
	// i == j 피벗의 값을 양쪽으로 분리한 가운데 오도록 설정
	A[S] = A[j];
	A[j] = pivot;
	return j;
}

void swap(vector<int>& A, int i, int j) {
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	vector<int> A(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	quickSort(A, 0, N - 1, K - 1);
	cout << A[K - 1];
}