//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout; 
using std::cin; 

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
double meal_amount, 
	    tip_rate,
	    tip_amount,
	    tax_amount,
	    total;
		//said in video to make sure users knew what to enter, so I added a prompt
		std::cout<<"Enter meal amount &  tip rate. Please enter all percentages as a decimal in percent form: e.g. 6.75% == .0675\n";
		std::cin>>meal_amount;
		tax_amount = get_sales_tax_amount(meal_amount);
		std::cin>>tip_rate;
		tip_amount = get_tip_amount(meal_amount, tip_rate);
		total = tip_amount+tax_amount+meal_amount;
		std::cout<<"Meal Amount:\t"<<meal_amount<<std::endl
		<<"Sales Tax:\t"<<tax_amount<<std::endl
		<<"Tip Amount:\t"<<tip_amount<<std::endl
		<<"Total:\t\t"<<total<<std::endl;

return 0;
}
