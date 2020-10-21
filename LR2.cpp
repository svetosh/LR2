#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << "hello!\n";

	unsigned char ch;

	for (ch = 0;ch < 127;ch++) {

		std::cout << ch << " " << static_cast<int>(ch) << '\n';
	}
	/// 
	char ch = 0;
	std::cout << "Введите символ\n";
	std::cin >> ch;

	if ((ch >= 48) && (ch <= 57))
	{
		std::cout << "Введённый символ - цифра";
	}
	else
	{
		if (((ch >= 97) && (ch <= 122)) || ((ch >= 65) && (ch <= 90)))
		{
			std::cout << "Введённый символ - буква";
		}
		else
		{
			std::cout << "Неизвесный символ";
		}
	}
	/// 
	uint64_t x = 0;

	std::cout << "Введите Х\n";
	std::cin >> x;

	double y = 0;

	switch (x % 4)
	{
	case 0: {y = 0; break;}
	case 1: {y = 5 - x; break;}
	case 2: {y = 1 / (static_cast<double>(x)); break;}
	case 3: {y = x; break;}

	default: { std::cout << "Error 404"; return 1; }
	}
	std::cout << "Ответ: ";
	std::cout << y;
	/// 
	double x = 0.0;
	cout << "Vvedite -1≤x≤1 \n";
	cin >> x;
	double k = 0.0;
	cout << "Vvedite to4nost' ot 2 do 6 \n";
	cin >> k;
	double reference = log(1 + x),
		precision = pow(10, -k),
		result = x;
	int n = 2,
		one = 1;
	while ((result - reference > precision) || (reference - result > precision)) {
		one *= -1;
		result += one *(pow(x, n) / n);
		n++;
	}
	cout << "Otvet:" << result << endl;
	cout << "Otvet:" << reference << endl;
	cout << "To4nost':" << precision << endl;
	cout << "4islo iteraciy:" << n << endl;
	return 0;
}
