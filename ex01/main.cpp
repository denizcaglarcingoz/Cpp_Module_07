#include <iostream>
#include "iter.hpp"

void increment(int& x)
{
	x += 1;
}

void printInt(int const& x)
{
	std::cout << x << std::endl;
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	iter(arr, 5, printInt);
	std::cout << "------------------" << std::endl;
	std::cout << "------------------" << std::endl;
	iter(arr, 5, increment);
	std::cout << "------------------" << std::endl;
	std::cout << "------------------" << std::endl;
	iter(arr, 5, printInt);
	
	return 0;
}