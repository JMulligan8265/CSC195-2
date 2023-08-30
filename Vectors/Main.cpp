#include "Vector.h"
#include <iostream>
using namespace std;

template <typename T>
void Display(const vec::vector<T>& v)
{
	cout << '{';
	cout << "_size: " << v.size() << ", ";
	cout << "_capacity: " << v.capacity() << ", ";
	cout << "_elements: [";
	for (size_t i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << ", ";
	}
	cout << "]}";
	std::cout << std::endl;
}
int main()
{
	std::cout << "vector\n";
	//vec::vector<int> a;
	//Display(a);
	//a.push_back(4);
	//Display(a);
	//a.push_back(7);
	//Display(a);
	//a.push_back(15);
	//Display(a);
	//a.reserve(8);
	//Display(a);
	
	vec::vector<int> numbers{ 43, 23, 56, 7, 16 };
	numbers[0] = 84;
	numbers.push_back(99);
	Display(numbers);
	std::cout << "copy\n";
	vec::vector<int> copy;
	copy = numbers;
	copy.pop_back();
	copy.pop_back();
	Display(copy);
	std::cout << "swap\n";
	numbers.swap(copy);
	Display(numbers);
	Display(copy);
	std::cout << "clear\n";
	copy.clear();
	Display(copy);
	std::cout << "assignment\n";
	copy = numbers;
	Display(numbers);
	std::cout << "resize\n";
	numbers.reserve(20);
	numbers.resize(10, 5);
	Display(numbers);
	std::cout << "front: " << numbers.front() << std::endl;
	std::cout << "back: " << numbers.back() << std::endl;
	std::cout << "size: " << numbers.size() << std::endl;
	std::cout << "max size: " << numbers.max_size() << std::endl;
	std::cout << "capacity: " << numbers.capacity() << std::endl;
	std::cout << "empty: " << numbers.empty() << std::endl;
	std::cout << "data: " << numbers.data() << std::endl;
	
}