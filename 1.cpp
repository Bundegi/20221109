#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"

using namespace std;
//11403backjun 플로이드 워셜 알고리즘 경로탐색문제 갔다가 다시 돌아오는경우도 
int main() {
	int graph[101][101];
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> graph[i][j];
		}
	}
	for (int k = 1; k <= N; k++) {
		for (int i = 1; i <= N; i++){
			for (int j = 1; j <= N; j++) {
				if (graph[i][k] == 1 && graph[k][j] == 1)
					graph[i][j] = 1;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
}
