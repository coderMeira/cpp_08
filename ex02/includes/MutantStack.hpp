//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>

# define YELLOW	"\033[0;33m"
# define ENDC	"\033[0m"
# define WHITE	"\033[0;37m"
# define RED	"\033[0;31m"

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack& copy) : std::stack<T>() {*this = copy;};
		virtual ~MutantStack() {};
		MutantStack&	operator= (const MutantStack& assign) { std::stack<T>::operator=(assign); return (*this);};

		iterator	begin(void) {return (this->c.begin());};
		iterator	end(void) {return (this->c.end());};
};

#endif

