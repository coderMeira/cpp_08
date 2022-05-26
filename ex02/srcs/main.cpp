//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <cstdlib>
#include <ctime>
#include <string>

int 	main() {
	MutantStack<int>	mstack;
	std::list<int>		aList;
	srand(time(0)); // New random seed every second

	std::cout << YELLOW << "--- pushing 5 and 17 to the mstack/list and checking their size() and top() ---" << ENDC << std::endl;
		mstack.push(5);
		mstack.push(17);
		aList.push_back(5);
		aList.push_back(17);

		std::cout << WHITE <<"mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << WHITE <<"mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "--- using pop() and checking again ---" << ENDC << std::endl;
		mstack.pop();
		aList.pop_back();

		std::cout << WHITE <<"mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << WHITE <<"mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "--- We Push multiple values ---" << ENDC << std::endl;
		int tmp;
		for (int i = 0; i < 10; i++) {
			tmp = rand() % 1000;
			mstack.push(tmp);
			aList.push_back(tmp);
		}

		std::cout << WHITE <<"mstack Size is: " << mstack.size() << " | aList Size is: " << aList.size() << std::endl;
		std::cout << WHITE <<"mstack Top is: " << mstack.top() << " | aList Top is: " << aList.back() << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "--- We create iterators and display the values of the list and mstack ---" << ENDC << std::endl;
		MutantStack<int>::iterator 	mIter = mstack.begin();
		MutantStack<int>::iterator 	mEnd = mstack.end();
		std::list<int>::iterator	lIter = aList.begin();
		std::list<int>::iterator	lEnd = aList.end();

		++lIter;
		--lIter;
		std::cout << RED << "List:" << ENDC << std::endl;
		while (lIter != lEnd) {
			std::cout << *lIter << std::endl;
			lIter++;
		}

		std::cout << std::endl;

		++mIter;
		--mIter;
		std::cout << RED << "MutantStack:" << ENDC << std::endl;
		while (mIter != mEnd) {
			std::cout << *mIter << std::endl;
			mIter++;
		}

	std::cout << std::endl;

	std::cout << YELLOW << "--- Testing the empty() member function ---" << ENDC << std::endl;
		MutantStack<int>	mEmpty;
		std::list<int>		lEmpty;

		std::cout << WHITE <<"mstack empty() return is: " << mstack.empty() << ENDC << std::endl;
		std::cout << WHITE << "aList empty() return is: " << aList.empty() << ENDC << std::endl;
		std::cout << WHITE << "empty mstack empty() return is: " << mEmpty.empty() << ENDC << std::endl;
		std::cout << WHITE << "empty aList empty() return is: " << lEmpty.empty() << ENDC << std::endl;
	std::cout << std::endl;

	std::cout << YELLOW << "--- We create a Stack<int> copy of mstack and compare them ---" << ENDC << std::endl;
		std::stack<int>				copy(mstack);

		std::cout << WHITE <<"mstack Size is: " << mstack.size() << " | Stack copy Size is: " << copy.size() << ENDC << std::endl;
		std::cout << WHITE <<"mstack Top is: " << mstack.top() << " | Stack copy Top is: " << copy.top() << ENDC << std::endl;

	std::cout << std::endl;

	return (0);
}
