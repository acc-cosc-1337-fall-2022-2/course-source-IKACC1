//write include statements
#include "decisions.h"
#include <string>
#include <iostream>
using std::cout;
using std::cin;


int main()
{
int grade;
int menu_option; 
std::string the_letter_grade;
std::cout<<"MAIN MENU \n"<<"1-Letter grade using if\n"<<"2-Letter grade using switch\n"<<"3-Exit\n";
std::cin>>menu_option;
switch(menu_option)
{
case 1:
	std::cout<<"Please enter the grade:	";
	std::cin>>grade;
	if (grade >=00&& grade<=100)
		{
		the_letter_grade = get_letter_grade_using_if(grade);
		std::cout<<"Letter Grade is:	"<<the_letter_grade<<"\n";
		}
		else
		std::cout<<"You entered a number that is out of range!"<<std::endl;
		
	break;
case 2: 
	std::cout<<"Please enter the grade:	";
	std::cin>>grade;
	if (grade >=00&& grade<=100)
	{
		the_letter_grade = get_letter_grade_using_switch(grade);
		std::cout<<"Letter Grade is:	"<<the_letter_grade<<"\n";
	}
	else 
	std::cout<<"You entered a number that is out of range!"<<std::endl;
	break;
case 3: 
	return 0;
}

return 0;
}
