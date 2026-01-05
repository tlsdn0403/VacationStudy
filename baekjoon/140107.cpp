#include<iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

long long solution(int k, int d) {
    long long answer{};
    long long a{};

    double limit = d / sqrt(2);
    a = ((int)(limit / k)) * k;  // k의 배수로 내림

	answer = ((a / k)+1) * ((a / k)+1);
	cout << "answer1: " << answer << endl;
	long long answer2{};
    for(long long y = a+k; y<=d; y+=k){
        double max_x = sqrt((double)d * d - (double)y * y);
        long long count = (long long)(max_x / k) + 1;  
        answer2 += count;
	}
	cout << "answer2: " << answer2 << endl; 
    answer += answer2 * 2;
	return answer;
}

int main() {
    int k, d;
    cin >> k >> d;
    cout << solution(k, d);
    return 0;
}