#include <iostream>
#include <string>

using namespace std;

int main() {

	int title;	// 영화제목 (666부터 시작)
	string stitle;	// 영화제목 문자열로 변환(666 체크위함)
	int check = 0;
	int N;	// N번째 영화

	// 몇번째 영화인지 입력
	cin >> N;

	for (title = 666; ; title++) {	// 가장 작은 종말의 숫자인 666부터 탐색
		stitle = to_string(title);	// string 형으로 바꿔줌

		if (stitle.find("666") != -1) {	// 666을 찾은 경우
			check++;	// check 값을 증감
			if (check == N) {	// check값과 N값이 같아지면, 출력
				cout << title;
				break;
			}
		}
	}
	return 0;
}