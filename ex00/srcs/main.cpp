//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "easyfind.hpp"

int	main(void)
{
	int intArray[] = {1, 2, 3, 4, 5, 6, 7};
	int	i = 2;
	try
	{
		easyfind(intArray, i);
	}
	catch (const char* msg){
		std::cout << i << msg;
	}
	return (0);
}
