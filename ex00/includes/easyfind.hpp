//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>

template <typename T>
void	easyfind(T t, int i)
{
	int* found = std::find(&t, sizeof(t), i);

	if (found)
		std::cout << i << " found\n";
	else
		throw (" wasn't found\n");
}
#endif

