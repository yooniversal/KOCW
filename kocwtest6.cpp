#include <iostream>
#include <fstream> //ifstream 호출

using namespace std;

//문자열이니까 const char* 로 받음
//r, c에 row, col값을 반환받기 위해 레퍼런스 사용(int& r, int& c)
int** readMap(const char* fileName, int& r, int& c) {
	ifstream fin(fileName); //ifstream 객체를 통해서 fin 객체를 만들자
	int** map = NULL;

	//is_open() : 파일이 열렸는지 확인하는 함수
	if (fin.is_open()) {
		int row, col;
		fin >> row >> col;
		r = row;
		c = col;

		//2차원 배열로 동적 할당
		map = new int* [row];
		for (int i = 0; i < row; i++) {
			map[i] = new int[col];
			for (int j = 0; j < col; j++)
				//Map1.txt에 있는 각 값을 동적 할당한 map[i][j]에 입력
				fin >> map[i][j];
		}
	}
	//정상적으로 열리지 않았다면
	else {
		cout << "파일 확인 요함" << endl;
	}

	return map;
}

//row, col은 변하지 않기때문에 조작을 방지하기 위해 const를 붙여줘도 된다
//레퍼런스를 붙여준건 추가 비용이 들지 않기 때문이라고 함. 메모리를 추가로 할당하지 않는 방법이라는 말인듯.
void showMap(int** (&map), const int& row, const int& col) {
	//2중 for문을 통해 출력
	//숫자에 따라 기호 출력
}

int main() {
	int col, row;

	cin >> col >> row;

	//2차원 배열 동적 할당
	//층부터 동적할당해주고, 층마다 방들을 동적할당 해준다.
	int** parr = new int* [row];
	for (int i = 0; i < row; i++) {
		parr[i] = new int[col];
		for (int j = 0; j < col; j++)
			parr[i][j] = j;
	}

	for (int i = 0; i < row; i++)
		delete[] parr[i]; //층 동적할당 해제
	delete[] parr; //최종적으로 array 동적할당 해제


	int row, col;
	//Map1.txt에 있는 값을 readMap 함수 내부에서 공간을 만들어 저장한 후
	//최종적으로 return map을 통해 main의 map에 반환한다
	//추가로 row, col에도 입력된 값을 반환한다
	int** map = readMap("Map1.txt", row, col);

	//이거 왜있는지 모르겠음. 있어도 되나?
	ifstream ifile("Map1.txt");

	//map이 정상적으로 열렸다면
	if (map != NULL) {
		//Map 출력하기
		showMap(map, row, col);
	}
	
	
	return 0;
}