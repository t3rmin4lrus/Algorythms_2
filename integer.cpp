#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	bool b = true;

	cout << "Введите любое число (число 1 не является ни простым ни составным числом): " << endl;
	cin >> a;

	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0) 
			b = false;
	}

	if (b == true)
	{
		cout << "Число является простым " << endl;
	}
	else
	{
		cout << "Число не является простым: " << endl;
	}
	return 0;
}

