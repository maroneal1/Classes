//
// Name :        main.cpp
// Description :  skeleton program that needs to be completed by InsertionSort.h, QuickSort.h and VerifySort.h
//

#include <cstdlib>
#include <iostream>
#include <vector>
#include <ctime>
#include "InsertionSort.h"	 // Edit your insertion sort code in that file
#include "QuickSort.h"		 // Edit your quick sort code in that file
#include "VerifySort.h"		 // Edit your code for verifying sort result in that file
#include <fstream>
#include <time.h>
using namespace std;
//NOTE YOU ADDED THE INPUT FILE TO DIRECT DIRECTORY







template <typename T>
void print(T start, T end)
{

    for (auto i = start; i <= end; ++i)
    {
        cout<< *i<<" " ; 

    }
    cout<< endl;
}

template <typename T>
void print(vector<T> vec)
{
    print(vec.begin(), vec.end() - 1);
}

int main(int argc, char * argv[]) {
	if ( argc != 2 ) {
        cout<<"usage: "<< argv[0] <<" <filename>\n";
    	return 0;
	}
	ifstream infile(argv[1]);
    // check to see if file opening succeeded
    if ( !infile.is_open() ) {
        cout<<"Could not open file\n";
        return 0;
	}
	time_t t1 = 0;
    vector<int> x,y;
    //read input
    int input_t;
    while( infile >> input_t) {
    	x.push_back(input_t);
    	y.push_back(input_t);
    }

//  quick sort
	t1 = time(0);
    //#if 0

    long long compCount = quickSort(x); 
    
    t1 = time(0)-t1;
    cout << x.size() << endl;
    cout << "quick sort \ncomparisons: " << compCount <<endl;
    cout << "time: " << t1 << endl; 
	cout << (verifySort(x)? "Success \n":"Fail\n");

//  insertion sort
	t1 = time(0);
    compCount = insertionSort(y); 
    //vector<int> allyt = {4,7,5,-1};
    //print(allyt);
    //compCount = insertionSort(allyt); 
    //print (allyt);
    t1 = time(0)-t1;
    cout << "insertion sort \ncomparisons: " << compCount <<endl;
    cout << "time: " << t1 << endl; 
    cout << (verifySort(y)? "Success \n":"Fail\n");
    //#endif
	infile.close();
    return 0;
}





//The below works pretty well too. 

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
    //T=j; use to take out the auto declaration

    for (auto i = start+1; i != end ; ++i)
    {
        auto temp= std::move(*i);
        auto j= i;
        for (j; j!=start && temp < *(j-1); --j)
        {
            *j=std::move(*(j-1));
        }
        *j=std::move(temp);
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
