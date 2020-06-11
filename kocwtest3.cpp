#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void menu() {
	cout << "1)아메리카노 2)카페라떼 3)결제 4)종료" << endl;
}

int main() {

	int num, ans=0;
	const int SIZE = 5; //const int는 상수기 때문에 arr의 크기에 들어갈 수 있다(변수가 X)
	int arr[SIZE] = { 10, 20, 30, 40, 50 };

	do {
		menu();
		cin >> num;

		if (num == 1) {
			ans += 100;
		}
		else if (num == 2) {
			ans += 200;
		}
		else if (num == 3) {
			cout << "결제 완료. 총 결제 금액은 " << ans << "원 입니다" << endl;
			ans = 0;
		}

	} while (num != 4);

	//arr의 각 값을 차례대로 출력하기
	for (int x : arr)
		cout << x << endl;

	//평균 출력
	int sum = 0;
	for (int i = 0; i < SIZE; i++) {
		sum += arr[i];
	}
	cout << "평균은" << sum / SIZE << "입니다." << endl;

	//난수 생성하기
	//0~9까지 몇번 발생했는지 확인
	int cnt[10] = { 0 };
	srand((unsigned)time(NULL));
	for(int i=0; i<1000; i++)
		cnt[rand() % 10]++;

	for (int i = 0; i < 10; i++)
		cout << i << '\t' << cnt[i] << endl;

	return 0;
}