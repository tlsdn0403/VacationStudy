#include <string>
#include <vector>
#include<iostream>
using namespace std;


int solution(int n, int w, int num) {
	int ans = 0;
	vector<int> v(w);
	for(int i = 0; i < n; i++) {
		if ((n / w) % 2 != 0) {       //È¦¼ö
			if (n % w > i) {
				v[i] += (n / w) + 1;
			} else {
				v[i] += (n / w);
			}
		}
		else {
			if(n % w > i) {
				v[i] += (n / w);
			} else {
				v[i] += (n / w) - 1;
			}
		}
	}
	int numHeight = w -num / w;
	int numWidth;
	if( num % 2 == 0) { 	//Â¦¼ö
		numWidth = w - (num % w);
	}
	else {
		numWidth = (num % w)- 1;
	}
	return v[numWidth] - numHeight;
}

int main() {
	int n, w, num;
	cin >> n >> w >> num;
	cout<< solution(n, w, num);
}