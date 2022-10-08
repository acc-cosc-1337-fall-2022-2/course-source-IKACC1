#include <string>
#include <iostream>
#include "func.h"
#include <limits.h>
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
LOOP: int user_choice;// Instructions did not explicitly say when program should be ended.Thus it will continue until user selects option 3. 
std::string dna_string;
std::cout<<"Menu \n"<<"1- Get GC Content"<<
"\n2- Get DNA Complement"<<
"\n3- Exit\n";
std::cin.putback('\n');
std::cin>>user_choice;
std::cin.clear();
std::cin.ignore (INT_MAX,'\n');// clear input buffer. avoid problems with cin.
std::cin.sync();
switch(user_choice)
{
	case 1:
	{
	std::cout<<"\nPlease Enter a DNA String\n";
	std::cin>>dna_string;
	std::cout<<"\nGC Content: "<<get_gc_content(dna_string)<<std::endl; 
	goto LOOP;
	break;}
		case 2:
	{
	std::cout<<"\nPlease Enter a DNA String\n";
	std::cin>>dna_string;
	std::cout<<"\nDNA Complement: "<<get_dna_complement(dna_string)<<std::endl;
	goto LOOP; 
	break;}
		case 3:
	{	break;}
	default:
		{std::cout<<"Invalid Selection."<<std::endl;
		goto LOOP;
		break;}
}
	return 0;
}