// chp3ex0-2.cpp
// �߰�����, �⸻����, �׸��� ���� ���� ��� �ް�
// ������ ��� ��� ������ ����ϱ�.
#include <ios>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using std::cin;	using std::setprecision; // �Ǽ� ���� ���� ����(�ڸ���,��Ȯ��)
using std::cout; using std::string;
using std::endl; using std::streamsize;
using std::sort; using std::vector;

int main() {
	// �л��� �̸��� ���� �Է¹ޱ�
	cout << "Your name: ";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;

	// �߰������ �⸻���� ������ ���� �Է¹ޱ�
	cout << "Midterm & Final scores: ";
	double midterm, final; // double = �ּ� 10�ڸ�����, ���� 15�ڸ�����
	cin >> midterm >> final;

	// ���� ������ ����
	cout << "Enter all homework grades "
		"followed by EOF: "; // End-Of-File
	vector<double> homework;
	double x; // cin���� ����ϱ� 

	//�Һ��� :  homework�� ���ݱ��� �Է¹��� ���� ������ ����.
	while (cin >> x) {
		homework.push_back(x);
	}

	//���� �Է� ���� Ȯ��
	typedef vector<double>::size_type vec_sz;
	vec_sz size = homework.size();
	if (size == 0) {
		cout << endl << "You must enter your grades. "
			"Please try again." << endl;
		return 1;
	}
	//���� ����
	sort(homework.begin(), homework.end());

	// �߾Ӱ� ����
	vec_sz mid = size / 2;
	double median;
	median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];


	// ����� ���
	streamsize prec = cout.precision(); // ���� cout precision
	cout << "Final grade: " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;

	return 0;
} // main ��