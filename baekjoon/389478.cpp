#include <string>
#include <vector>
#include<iostream>
using namespace std;

int solution(int n, int w, int num) {
    int numHeight = (num - 1) / w + 1;
    int posInRow = (num - 1) % w;

    // numWidth:  0-indexed 위치
    int numWidth;
    if (numHeight % 2 == 1) {
        numWidth = posInRow;
    }
    else {
        numWidth = w - 1 - posInRow;
    }

    int totalHeight = (n - 1) / w + 1;  // 최대 높이
    int count = 0;

    for (int h = numHeight; h <= totalHeight; h++) {
        int boxNum; // 해당 높이에서 num이 위치할 수 있는 박스 번호 -> num위에 있는 박스

        // 지금 높이가 홀수 일 때
        if (h % 2 == 1) {
            boxNum = (h - 1) * w + numWidth + 1;  //해당층 밑에 깔려있는 박스 수 + 그 층에서 몇 번째 박스인지 
        }
        else {
            boxNum = (h - 1) * w + (w - 1 - numWidth) + 1;
        }

        if (boxNum <= n) count++;
    }

    return count;
}

int main() {
	int n, w, num;
	cin >> n >> w >> num;
	cout<< solution(n, w, num);
}