//chp2ex9.cpp
#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;
	if (a > b) std::cout << a << " 이(가) " << b << "보다 더 큽니다." << std::endl;
	else std::cout << b << " 이(가) " << a << "보다 더 큽니다." << std::endl;


	return 0;
}