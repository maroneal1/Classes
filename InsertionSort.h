#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <vector>
#include <iostream>
/*
Insertion sort builds a final sorted array. Much less efficient on large lists. 
*/
// insertion sort here
template<typename T >
void swap1(T& x, T& y) 
{
	T temp = x;
	x = y; //standard swap
	y = temp;
}
//x.begin is iterator
template <typename T>
long long insertionSort(T start, T end)
{
	long long compares =0; //counter for comapres

	if (start>=end)
		return 0;
	for (auto i = start+1; i != end ; ++i)
    {
        if (*i < *(i-1))
        {
            auto p = i;
            for (; p>start && *p < *(p-1); --p)
            {
            	++compares;
                swap1(*p, *(p - 1));
            }
        }
    }
	std::cout<<"Running insertion sort\n"<<std::endl;

	return compares;

}


template <typename T>
long long insertionSort(std::vector<T>& x) //overload
{
	return insertionSort(x.begin(),x.end());
}


#endif


/*


#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <vector>
#include <iostream>

// insertion sort here
template<typename T >
void swap(T& x, T& y) 
{
	T temp = x;
	x = y;
	y = temp;
}
//x.begin is iterator
template <typename T>
long long insertionSort(T start, T end)
{
	if (start>=end)
		return 0;

	for (auto i = start+1; i != end ; ++i)
	{
		if (*i < *(i-1))
		{
			std::cout<<"hit"<<std::endl;
			auto temp=  *i;
			auto p=i;
			for (; p>=start && temp< *(p-1); --p)
			{
				*(p) = *(p-1);
				std::cout<<"Stuck";

			}
			*(p)=temp;
		}
	}
	std::cout<<"Running insertion sort\n"<<std::endl;

	return 4;

}


template <typename T>
long long insertionSort(std::vector<T>& x)
{
	return insertionSort(x.begin(),x.end());
}


#endif

*/


/*


#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_
#include <vector>
#include <iostream>
/
// insertion sort here
 
namespace ally{
template<typename T >
void swap(T& x, T& y)
{
    T temp = x;
    x = y;
    y = temp;
}
}
//x.begin is iterator
template <typename T>
long long insertionSort(T start, T end)
{
    for (auto i = start+1; i != end ; ++i)
    {
        if (*i < *(i-1))
        {
            auto p = i;
            for (; p>start && *p < *(p-1); --p)
                ally::swap(*p, *(p - 1));
        }
    }
    std::cout<<"Running insertion sort\n"<<std::endl;
 
    return 4;
 
}
 
 
template <typename T>
long long insertionSort(std::vector<T>& x)
{
    return insertionSort(x.begin(),x.end());
}
 
 
#endif
 
int main() {
    std::vector<int> v{4,7,-1};
    insertionSort(v);
    for (auto i : v)
        std::cout << i << std::endl;
    return 0;
}


*/
