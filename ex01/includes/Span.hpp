//***************************//
//*Template by pulgamecanica*//
//***************************//

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

#include <iostream>
#include <list>
#include <vector>

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

		template <typename Iter>
		void	addNumber(Iter begin, Iter end)
		{
			int	sizeLeft = N_ - list_.size();
			if (std::distance(begin, end) > sizeLeft)
				throw std::length_error("You're trying to add too many numbers to the list");
			else
				list_.insert(list_.end(), begin, end);
		}

	private:
		unsigned int		N_;
		std::list<int>		list_;
};

std::ostream&	operator<<(std::ostream&, const Span&);

#endif

