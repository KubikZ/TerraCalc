#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "aritmetic.h"
bool AddTest();

int main()
{
	AddTest();
	
	return 0;
}

bool AddTest()
{
	for(int i = 120; i < 130; i++)
		for(int j = 120; j < 130; j++)
		{
			//if (atoi(Aritmetic::Add(std::to_string(i), std::to_string(j)).c_str()) != i+j)
			std::cout<< i << "+" << j << "= " << Aritmetic::Add(std::to_string(i), std::to_string(j)) << " [" << i + j << ']'<< std::endl;
			//std::cout << Aritmetic::Add("123", "78");
		}
	return true;
}
