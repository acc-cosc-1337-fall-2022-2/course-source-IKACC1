

//write include statements
#include "dna.h"
#include <iostream>
#include <limits.h>
//write using statements


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
int continue_flag=0;
do
{
	
	int menu_option =0;
	std::cout<<"Please select from options below:\n";
	std::cout<<"1-Factorial \n";
	std::cout<<"2-Greatest Common Divisor\n";
	std::cout<<"3-Exit\n";
	std::cin.putback('\n');
	std::cin>>menu_option;
	std::cin.clear();
	std::cin.ignore (INT_MAX,'\n');// clear input buffer. avoid problems with cin.
	std::cin.sync();
	
switch (menu_option) //using switch to control menu.
	{case 1:
		{
		std::cout<<"Please enter a number";
		int factorial_param;
		std::cin>> factorial_param;
		std::cin.clear();
		std::cin.ignore (INT_MAX,'\n');
		int result =factorial(factorial_param);
		std::cout<<std::endl<<"Factorial of "<<factorial_param<<" is: "<<result<<std::endl;
		continue_flag =0;
		
		break;
		}
	case 2:
	{
		
		int gcd_param1;
		int gcd_param2;

		std::cout<<"Please input one number, press enter, then input second number \n";

		std::cin>>gcd_param1;
		std::cin.clear();
		std::cin.ignore (INT_MAX,'\n');
		std::cin>>gcd_param2;
		std::cin.clear();
		std::cin.ignore (INT_MAX,'\n');
		int result1 = gcd(gcd_param1,gcd_param2);
		std::cout<<std::endl<<"GCD of "<<gcd_param1<<" and "<<gcd_param2<<" is: " <<result1<<std::endl;		
		continue_flag =0;
		break;
	}		
	case 3:
		{
			char exit_confirmation_var;
			std::cout<<"Are you sure you want to exit? Press y for yes and n for no";
			std::cin>>exit_confirmation_var;
			std::cin.clear();
			std::cin.ignore (INT_MAX,'\n');
			if (exit_confirmation_var == 'y')
				continue_flag =1;
		
			else 
				continue_flag = 0;
			break;


		}

	
	}

}	
while (continue_flag ==0);
	
	
	return 0;
}
