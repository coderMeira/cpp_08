//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T &t, int i)
{
	typename T::iterator	begin = t.begin();
	typename T::iterator	end = t.end();
	typename T::iterator	found = std::find(begin, end, i);

	if (found == end)
		throw (" wasn't found\n");
	std::cout << i << " found\n";
	return (found);
}
#endif

