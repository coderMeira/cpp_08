//***************************//
//*Template by pulgamecanica*//
//***************************//

#include "Span.hpp"

int	main(void)
{
	try
	{
		std::cout << "SUBJECT TESTS:\n\n";

		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

		std::cout << "MY TESTS:\n\n";
		Span test(10);
		std::vector<int> vec;

		vec.push_back(33);
		vec.push_back(22);
		// vec.push_back(11);
		// vec.push_back(44);
		test.addNumber(vec.begin(), vec.end());

		test.addNumber(1);
		test.addNumber(2);
		test.addNumber(3);
		test.addNumber(6);
		test.addNumber(7);
		test.addNumber(8);
		test.addNumber(9);
		// test.addNumber(10);
		// test.addNumber(11);
		// test.addNumber(12);

		std::cout << "Shortest span is: " << test.shortestSpan() << "\n";
		std::cout << "Longest span is: " << test.longestSpan() << "\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
