// Chp2ex5.cpp
#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; 
int main() {
	// 정사각형 출력
	int s_size; // 가로의 길이
	cout << "정사각형의 한 변의 크기 :";
	cin >> s_size; 
	for (int i = 0; i != s_size; i++) {
			for (int j = 0; j != s_size; j++)
				cout << "*";
		cout << endl;
	}//for문끝
	cout << endl;

	//직사각형 출력 
	int rows,cols; // 가로,세로의 길이 입력
	cout << "직사각형의 가로길이와 세로 길이 입력 :";
 	cin >> rows;
	cin >> cols;
	for (int i = 0; i != rows; i++) {
			for (int j = 0; j != cols; j++)
				cout << "*";
		cout << endl;
	}//for문끝
	cout << endl;

	//삼각형 출력
	int t_size;
	cout << "삼각형의 밑면의 크기 : ";
	cin >> t_size;
	for (int i = 0; i != t_size; i++) {
		
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (t_size * 2) - (i * 2) - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
} // main 끝
