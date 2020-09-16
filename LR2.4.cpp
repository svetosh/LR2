#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	std::cout << "Здравствуйте!\n";
	
	double x =0.0;
	std::cout << "введите Х \n";
	std::cin >> x;
	
	double k =0.0;
	std::cout << "введите точность \n";
	std::cin >> k;
	
	double j =0.0;
	std::cout << "введите число повторений \n";
	std::cin >> j;
	
	
	double reference = log(1+x), precision = pow(-10, -k), result = x;
	long int counter = 1, fact = 1;
	
	
	
	// while (abs(reference - result)<=precision) 
	for(counter=1;counter<j;)
		{
		result += (pow(-1,counter+1))*((pow(x,counter))/(counter));
		std::cout << (reference - result) << " " << result << " " << counter << " " << fact << "\n";
		
		counter++;
		}
		std::cout << "\nОтвет:" << result;
		std::cout << "\nТочность:" << precision;
		std::cout << "\nЧисло повторений:" << counter;
		
		return 0;
}

