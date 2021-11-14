#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include "aritmetic.h"

bool AddTest();
int main()
{
	std::cout << Aritmetic::Add("99", "1");

	/*if(AddTest())
		std::cout << "Tests successful!";
	else
		std::cout << "Tests failed!";
*/
	return 0;
}

bool AddTest()
{
	for(int i = 1; i < 100; i++)
		for(int j = 1; j < 100; j++)
		{
			std::cout << i << " + " << j << std::endl;
			std::string aIn = std::to_string(i);
			std::string bIn = std::to_string(j);
			std::string result = Aritmetic::Add(aIn, bIn);
			//short resultNum = stoi(result);
			//if (resultNum != i+j)
			//	return false;
		}
	return true;
}
