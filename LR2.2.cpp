#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << "Здравствуйте!\n";
	
	char ch = 0;
	std::cout << "Введите символ\n";
	std::cin >> ch;
	
	if ((ch >= 48)&&(ch <= 57))
		{
		std::cout << "Введённый символ - цифра";
		}
		else
			{
			if (((ch >= 97)&&(ch <= 122))||((ch >= 65)&&(ch <= 90)))
				{
				std::cout << "Введённый символ - буква";
				}
				else
				 {
					 std::cout << "Неизвесный символ";
				 }
			}
}
