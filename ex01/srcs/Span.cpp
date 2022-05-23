//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Span.hpp"

Span::Span(int i) : N_(i) {
}

Span::Span(const Span& param) {
	*this = param;
}

Span::~Span() {
	std::cout << "Span" << " destroyed" << std::endl;
}

Span& Span::operator= (const Span& param) {
	N_ = param.N_;
	list_ = param.list_;
	return (*this);
}

void	Span::addNumber(int	i)
{
	if (list_.size() == N_)
		throw (std::length_error("Vector is already full"));
	else
		list_.push_back(i);
}

int		Span::shortestSpan(void)
{
	if (list_.size() <= 1)
		throw (std::logic_error("Need at least two numbers stored to find span"));

	std::list<int>::iterator curr = list_.begin();
	std::list<int>::iterator next = curr++;
	std::list<int>::iterator end = list_.end();

	int min = std::abs(static_cast<int>(*(curr++)) - static_cast<int>(*(next++)));
	int tmp;
	while (curr != end)
	{
		tmp = std::abs(static_cast<int>(*(curr++)) - static_cast<int>(*(next++)));
		if (tmp < min)
			min = tmp;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	if (list_.size() <= 1)
		throw (std::logic_error("Need at least two numbers stored to find span"));

	std::list<int>::iterator curr = list_.begin();
	std::list<int>::iterator next = curr++;
	std::list<int>::iterator end = list_.end();

	int min = std::abs(static_cast<int>(*(curr++)) - static_cast<int>(*(next++)));
	int tmp;
	while (curr != end)
	{
		tmp = std::abs(static_cast<int>(*(curr++)) - static_cast<int>(*(next++)));
		if (tmp > min)
			min = tmp;
	}
	return (min);
}

std::ostream& operator<<(std::ostream& s, const Span& param) {
	// s << param.CONST_METHOD()
	(void)param;
	return (s);
}

