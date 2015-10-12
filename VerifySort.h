#ifndef _VERIFYSORT_H_
#define _VERIFYSORT_H_
#include <vector>

template <typename T>
bool verifySort(T start, T end) {
	while((start + 1) != end) {
		if (*start > (*start + 1))
			return false;
		++start;
	}
	return true;
}

//your verify sort here
template <typename T>
bool verifySort(std::vector<T> x)
{
	return verifySort(x.begin(), x.end());
}
#endif
