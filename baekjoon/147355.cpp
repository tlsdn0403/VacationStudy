#include<string>
#include<iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
	int p_length = p.length();
    long long pi = stoll(p);  // stoi ¡æ stoll


    for(int i = 0; i <= t.length() - p_length; i++) {
        long long sub =stoll(t.substr(i, p_length));
        if(sub <= pi) {
            answer++;
		}
	}

    return answer;
}
int main() {
    string t,p;
	cin >> t >> p;
    cout << solution(t, p) << endl;
    return 0;
}