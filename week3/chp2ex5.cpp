// Chp2ex5.cpp
#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; 
int main() {
	// ���簢�� ���
	int s_size; // ������ ����
	cout << "���簢���� �� ���� ũ�� :";
	cin >> s_size; 
	for (int i = 0; i != s_size; i++) {
			for (int j = 0; j != s_size; j++)
				cout << "*";
		cout << endl;
	}//for����
	cout << endl;

	//���簢�� ��� 
	int rows,cols; // ����,������ ���� �Է�
	cout << "���簢���� ���α��̿� ���� ���� �Է� :";
 	cin >> rows;
	cin >> cols;
	for (int i = 0; i != rows; i++) {
			for (int j = 0; j != cols; j++)
				cout << "*";
		cout << endl;
	}//for����
	cout << endl;

	//�ﰢ�� ���
	int t_size;
	cout << "�ﰢ���� �ظ��� ũ�� : ";
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
} // main ��
