#include <iostream>

int main ()
{
	std::cout << "Здравствуйте!\n";
	
	unsigned char ch;
	
	for (ch=0;ch<127;ch++){
		
		std::cout << ch << " " << static_cast<int>(ch) << '\n';
	}
	return 0;
}




