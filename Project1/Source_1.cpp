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

		std::cout << " ¼ö ÀÔ·Â: ";
		std::cin >> input;

		if (num == input) {
			std::cout << "¬Ãè½À´Ï´Ù. " << std::endl;
			break;

		}
		else {
			std::cout << "Æ²·È½À´Ï´Ù . " << std::endl;
		}

	}
	
	
	
	using std::cout;
	using std::cin;
	using std::endl;
	int input_data,total=0,a,b;

	cout << "»çÄ¢¿¬»êmode¸¦ ¼±ÅÃÇÏ¼¼¿ä" << endl;
	cout << "1.+ 2.- 3.* 4./ " << endl;
	cin >> input_data;
	cout << "°è»êÇÒ µÎ ¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À.";
	cin >> a;cin>> b;

	switch (input_data) {
		
	case 1:
		cout << "µ¡¼À ¸ğµå";
		cout << a + b;
	case 2:
		cout << "»¬¼À ¸ğµå";
		cout << a - b;
	case 3:
		cout << "°ö¼À ¸ğµå";
		cout << a * b;
	case 4:
		cout << "³ª´°¼À ¸ğµå";
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