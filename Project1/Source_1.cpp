#include<iostream>

int main() {
	/*
	for (int j=1; j < 10; j++) {
		for (int i = 2; i < 10; i++) {
			std::cout << i; std::cout << "*"; std::cout << j; std::cout << " = ";
			std::cout << i * j;  std::cout << " ";



		}
		std::cout<< std::endl;
	}
	
	int i = 0, sum = 0;
	while ( i <= 10) {	
		sum += i;
		i++;

	}
	std::cout << sum;
	*/
	int input,num = 7;

	while (1) {

		std::cout << " �� �Է�: ";
		std::cin >> input;

		if (num == input) {
			std::cout << "������ϴ�. " << std::endl;
			break;

		}
		else {
			std::cout << "Ʋ�Ƚ��ϴ� . " << std::endl;
		}

	}
	
	return 0;


}