#include <iostream>
#include "aritmetic.h"

int main()
{
	
	std::string result = "3628800";

	for (size_t i = 3628800; i > 0; i--)
	{
		result = Aritmetic::Add(result, "3628800");
	}

	return 0;
}
