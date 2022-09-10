//write include statements
#include<iostream>
#include "data_types.h"


//write namespace using statement for cout
using std::cout;
using std::cin;


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/


int main()
{
	int num; 
	std::cin>>num;
	int result= multiply_numbers(num);
	std::cout<<result<<std::endl;
	int num1 = 4;
	result = multiply_numbers(num1);
	std::cout<<result;

	return 0;	
}
