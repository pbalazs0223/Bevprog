#include "std_lib_facilities.h"
int main()
{
//1.
cout << "Enter the name of the person you want to write to:\n"; 		
string first_name;
cin >> first_name;
cout << "Dear " << first_name << ", \n";

//2.
cout << "\tHow are you? \nI am fine. \nI miss you. \n"; 			

//3.
cout << "Enter the name of another friend:\n"; 					
string friend_name;
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately? \n";

//4.
char friend_sex; 								
friend_sex=0;
cout << "Enter the sex of friend (m-male; f-female):\n";
cin >> friend_sex;
if (friend_sex=='m')	   
	cout << "If you see " <<friend_name<< " please ask him to call me.\n";
if (friend_sex=='f')
	cout << "If you see " <<friend_name<< " please ask her to call me.\n";

//5.
cout << "Enter " <<friend_name<< "'s age:\n";
int age;
cin >> age;
cout << "I hear you just had a birthday and you are " <<age<< " years old.\n";
if (age<=0 or age>=110)
simple_error( " you're kidding! " );

//6.
if (age<12)
cout << "Next year you will be " <<age+1<< ".\n";
if (age==17)
cout << "Next year you will be able to vote.\n";
if (age>70)
cout << "I hope you are enjoying retirement.\n";
cout << "Yours sincerely\n\n\nPete Balázs";
}
