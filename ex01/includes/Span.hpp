//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <list>

class Span {
	public:
		Span();
		Span(int);
		Span(const Span&);
		~Span();
		Span&	operator= (const Span&); // const for safety... not super nesessary

		void	addNumber(int i);
		int		shortestSpan(void);
		int		longestSpan(void);

	private:
		unsigned int		N_;
		std::list<int>		list_;
};

std::ostream&	operator<<(std::ostream&, const Span&);

#endif

