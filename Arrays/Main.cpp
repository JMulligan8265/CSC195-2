#include "Array.h"
#include <iostream>


void DisplayArray(const ary::array& a)
{
	for (size_t i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << " ";
	}
	std::cout << std::endl;
}
int main()
{
	std::cout << "array\n";
	ary::array numbers{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	numbers[0] = 25;
	DisplayArray(numbers);
	std::cout << "copy\n";
	ary::array copy{ numbers };
	copy[0] = 50;
	copy[4] = 8;
	DisplayArray(copy);
	std::cout << "swap\n";
	numbers.swap(copy);
	DisplayArray(numbers);
	DisplayArray(copy);
	std::cout << "fill\n";
	copy.fill(21);
	DisplayArray(copy);
	std::cout << "front: " << numbers.front() << std::endl;
	std::cout << "back: " << numbers.back() << std::endl;
	std::cout << "size: " << numbers.size() << std::endl;
	std::cout << "data: " << numbers.data() << std::endl;
}