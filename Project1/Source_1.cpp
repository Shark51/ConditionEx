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
	
	
	
	using std::cout;
	using std::cin;
	using std::endl;
	int input_data,total=0,a,b;

	cout << "��Ģ����mode�� �����ϼ���" << endl;
	cout << "1.+ 2.- 3.* 4./ " << endl;
	cin >> input_data;
	cout << "����� �� ���� �Է��Ͻÿ�.";
	cin >> a;cin>> b;

	switch (input_data) {
		
	case 1:
		cout << "���� ���";
		cout << a + b;
	case 2:
		cout << "���� ���";
		cout << a - b;
	case 3:
		cout << "���� ���";
		cout << a * b;
	case 4:
		cout << "������ ���";
		cout << a / b<<"  ";
		cout << a % b;


	}
	*/
	using std::cout;
	using std::cin;
	using std::endl;
	int A, B, C;

	cin >> A; cin >> B; cin >> C;
	cout << (A + B) % C<<endl;
	cout << ((A%C)+(B%C)) % C << endl;
	cout << (A * B) % C << endl;
	cout << ((A%C) * (B%C)) % C << endl;




	return 0;
}