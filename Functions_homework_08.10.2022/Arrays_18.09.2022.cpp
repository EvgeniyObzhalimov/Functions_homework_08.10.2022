#include<iostream>
int func(int num1, int num2, int num3) {
	return (num1 + num2 + num3) / 3;


}


void funcl(int num4, short num5, double num6) {
	if (num4 > num5 && num4 > num6)
		std::cout<< num4;
	else if (num5 > num4 && num5 > num6)
		std::cout << num5;
	else
		std::cout<< num6;
	std::cout << "\n��������� �������\n" << "��� int - " << num4 << "\n��� short - " << num5 << "\n��� double -" << num6;

}


template <typename T> 
T array (T ar[], const T size) {
	T min, max;
	min=ar[0];
	max=ar[0];
	for (T i = 0; i < size; i++) {
		if (min > ar[i])
			ar[i] = min;

		else
			ar[i] = max;

		return min;
	}
	


}

void rev(int number) {
	int reverse, rem;
	while (number > 0) {
		reverse = 0;
		rem = number % 10;
		reverse *= 10 + rem;
		number /= 10;
		std::cout << rem;
	}

	

			
	
}

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "�������� ������_�������" << "\n\n";
	std::cout << "������ 1" << "\n\n";
	int a, b, c;
	std::cout << "������� 3 �����" << "\n";
	std::cin >> a >> b >> c;
	std::cout << "\n\n������� �������������� ��������� �����: "<<func(a, b, c)<<"\n\n";

	std::cout << "������ 2_������������� �������" << "\n\n";
	short d;
	double e;
	std::cin >> a >> d >> e;
	std::cout << "������������ �� ��������� �������� - ";
	funcl(a,d,e);

	std::cout << "\n\n������ 3_��������� �������\n\n";
	
	const int L = 5;
	int mass[L];
	std::cout << "������� ������ � ������ 5\n";
	for (int i = 0; i < L; i++)
		std::cin >> mass[i];
		std::cout<<"\n\n";

	std::cout<<"����������� �������� ������� = "<<array(mass, L)<<"\n\n";

	std::cout << "������ 4_" << "\n\n";
	
	std::cout << "������� ����� a = ";
	std::cin >> a;
	std::cout << "\n�����, ��������  a = ";
		rev(a);












	return 0;


}


