#include <iostream>

int main()
{
	int width;
	width = 5; 

	std::cout << width << "\n"; 

	std::cout << "Introduce valor de width \n";

	std::cin >> width;

	std::cout << "El valor de la variable es: " << width;

	return 0;
}