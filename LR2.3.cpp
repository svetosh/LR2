#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
		std::cout << "Здравствуйте!\n";
	
	uint64_t x = 0;
	
	std::cout << "Введите Х\n";
	std::cin >> x;
	
	double y = 0;
	
	switch (x % 4)
	{
		case 0 : {y = 0; break;}
		case 1 : {y = 5 - x; break;}
		case 2 : {y = 1/(static_cast<double>(x)); break;}
		case 3 : {y = x; break;}
		
		default : { std::cout << "Error 404"; return 1; }
	}
	std::cout << "Ответ: ";
	std::cout << y;
	return 0;
}
