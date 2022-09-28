//write include statement for decisions header
#include <string>
#include <iostream>
#include "decisions.h"
using std::cout;
//Write code for function(s) code here

std::string get_letter_grade_using_switch(int grade)
{
std::string the_letter_grade;
switch (grade)
{
	case 60 ... 69 : the_letter_grade = 'D';
		break;
	case 70 ... 79 : the_letter_grade = 'C';
		break;
	case 80 ... 89 : the_letter_grade = 'B';
		break;
	case 90 ... 100 : the_letter_grade = 'A';
		break;
	case 00 ... 59 : the_letter_grade = 'F';
		break;
	
}

return the_letter_grade;
}





std::string get_letter_grade_using_if(int grade)
{
std::string the_letter_grade;

if (grade>=0&& grade<=59)
	the_letter_grade = 'F';
else if (grade>59&& grade<=69)
	the_letter_grade = 'D';
else if (grade>69&& grade<=79)
	the_letter_grade = 'C';
else if (grade>79 && grade<=89)
	the_letter_grade = 'B';
else if (grade>89&& grade<=100)
	the_letter_grade = 'A';

return the_letter_grade; 
}
