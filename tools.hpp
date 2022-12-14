#pragma once

#include <iostream>
#include <string>
#include <type_traits>
#include <limits>

// My containers implementation includes

#include "utils/iterator_traits.hpp"
#include "utils/reverse_iterator.hpp"

// STL containers includes
#include <vector>
#include <map>

#define RESET   "\033[0m"
#define BLACK   "\033[1m\033[30m"      /* Bold Black */
#define RED     "\033[1m\033[31m"      /* Bold Red */
#define GREEN   "\033[1m\033[32m"      /* Bold Green */
#define YELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BLUE    "\033[1m\033[34m"      /* Bold Blue */
#define MAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define CYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLD    "\033[1m\033[37m"      /* Bold White */

#define PRINT(x) std::cout << BOLD << x << std::endl << RESET; 
#define NL() std::cout << std::endl;

namespace ft
{

	typedef std::ptrdiff_t difference_type;
	typedef std::size_t size_type;

	template<class It>
	difference_type distance(It first, It last)
	{
		// Check here if the iterator is a random access iterator and return last - first.
		difference_type i = 0;
		for (i = 0; first != last; i++)
			first++;
		return i;
	}

	template<class T>
	struct is_integral
	{
		static const bool value = std::is_convertible<T, bool>::value ||
								std::is_convertible<T, char>::value ||
								std::is_convertible<T, signed char>::value ||
								std::is_convertible<T, unsigned char>::value ||
								std::is_convertible<T, short>::value ||
								std::is_convertible<T, unsigned short>::value ||
								std::is_convertible<T, int>::value ||
								std::is_convertible<T, unsigned int>::value ||
								std::is_convertible<T, long>::value ||
								std::is_convertible<T, unsigned long>::value ||
								std::is_convertible<T, long long>::value ||
								std::is_convertible<T, unsigned long long>::value;
	};

}
