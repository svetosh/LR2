#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "hello!" << endl;
	unsigned char ascii;
	for (ascii = 0; ascii < 127; ascii++)
	{

		cout << ascii << " " << static_cast<int>(ascii) << endl;
	}
	
	char ch = 0;
	cout << "Введите символ" << endl;
	cin >> ch;

	if ((ch >= 48) && (ch <= 57))
	{
		cout << "Введённый символ - цифра" << endl;
	}
	else
	{
		if (((ch >= 97) && (ch <= 122)) || ((ch >= 65) && (ch <= 90)))
		{
			std::cout << "Введённый символ - буква" << endl;
		}
		else
		{
			std::cout << "Неизвесный символ" << endl;
		}
	}
	/// 
	int x_3 = 0;
	cout << "Введите Х " << endl;
	cin >> x_3;
	double y = 0;
	switch (x_3 % 4)
	{
		case 0:
			y = 0;
			break;
		case 1:
			y = 5 - x_3;
			break;
		case 2:
			y = 1 / (static_cast<double>(x_3));
			break;
		case 3:
			y = x_3;
			break;
		default: { std::cout << "Error 404"; return 1; }
	}
	cout << "Ответ: " << y << endl; 
	/// 
	double x_4 = 0;
	cout << "Введите -1≤ x ≤1" << endl;
	cin >> x_4;

	double k = 0;
	cout << "введите точность от 2 до 6" << endl;
	cin >> k;

	double logarifm = log(1 + x_4),
		   accuracy = pow(10, -k),
		   result = x_4;
	int n = 2,
		one = 1;
	while ((result - logarifm > accuracy) || (logarifm - result > accuracy)) {
		one *= -1;
		result += one * (pow(x_4, n) / n);
		n++;
	}
	cout << "Ответ:" << result << endl;
	cout << "logarifm:" << logarifm << endl;
	cout << "Точность:" << accuracy << endl;
	cout << "Число итераций:" << n << endl;
	return 0;
}
