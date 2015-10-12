s#ifndef _QUICKSORT_H_
#define _QUICKSORT_H_
#include <vector>
#include "InsertionSort.h"





template <typename T>
using vit = typename std::vector<T>::iterator; // ex


namespace ally {

template<typename T >
void swap(T& x, T& y) 
{
	T temp = x;  //standard swap
	x = y;
	y = temp;
}
template<typename T >
std::pair<T, long long> partition(T start, T end) 
{
	
	//auto pivot= *start;
	auto pivot=*start;
	long long compares = 0;
	while (start < end)
	{
		while (*start<pivot )
		{
			++start; //add to left
			++compares;
		}
		while (*end>pivot) //check otherside
		{
			--end;
			++compares;
		}
		if (start < end) 
		{
			if (*start == *end)
			{
				++start;   //check if start past past
				--end;
			}
			swap(*start, *end);
		}	
	}


	return {end, compares};
}

}

template <typename T>
long long quickSort(T start, T end) {
	if (start >= end)
		return 0; //zero compares
	auto p = ally::partition(start , end);
	return p.second + quickSort(start, p.first) + quickSort(p.first+1,end);
}


template <typename T>
long long quickSort(std::vector<T>& x)
{
	return quickSort(x.begin(), x.end() - 1);	
}

//your quick sort here return number of comparisons 

#endif

