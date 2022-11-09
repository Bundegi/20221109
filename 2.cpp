#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define fast ios::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr)
#define endl "\n"
//21314backjun 민겸 수 문자열 그리디 
using namespace std;

int main() {
	string Dan;
	cin >> Dan;
	string a, b;
	int M = 0, Su=0;
	for (int i = 0; i < Dan.size(); i++) {
		if (Dan[i] != 'K') M++;
		else {
			a += "5";
			if(M!=0) {
				for (int j = 0; j < M; j++) {
					a += "0";
				}
				M = 0;
			}
		}
	}
	if (M != 0) {
		for (int i = 0; i < M; i++) {
			a += "1";
		}
		M = 0;
	}
	for (int i = 0; i < Dan.size(); i++) {
		if (Dan[i] != 'K') M++;
		else {
			if (M == 0) b += "5";
			else if (M == 1) b += "15";
			else {
				b += "1";
				for (int j = 0; j < M - 1; j++) b += "0";
				b += "5";
			}
			M = 0;
		}
	}
	if (M != 0) {
		b += "1";
		for (int j = 0; j < M - 1; j++) b += "0";
	}
	cout << a << endl;
	cout << b;
}
