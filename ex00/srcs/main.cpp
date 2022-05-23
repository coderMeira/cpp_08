//***************************//
//*Template by pulgamecanica*//
//***************************//

#include <list>
#include <vector>
#include <iostream>
#include "easyfind.hpp"

int 	main() {
	std::vector<int>	vector;
	int					i;

	i = 22;
	vector.push_back(21);
	vector.push_back(42);
	vector.push_back(80);
	vector.push_back(42);
	try{
		std::cout << "Return value of search 42 in vector: " << *easyfind(vector, i) << std::endl;
	}
	catch (const char* msg){
		std::cout << i << msg;
	}

	return (0);
}
