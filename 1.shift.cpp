#include "std_lib_facilities.h"
int main()
{
int a=1;
int b=0;
while (a!=0){
	a<<=1;
	++b;
	cout<<a<<'\n';
	}
cout<<"result of left shifting: "<<b<<'\n';
}

