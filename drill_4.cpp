#include "std_lib_facilities.h"
int main()
{
 /* //1.
int a,b;
while (cin>>a>>b)
    {
        if (a == '|' || b== '|')
        	exit(1);
        else
        	cout <<"a= "<< a << ", b= " << b;       
    } 

//2.,3.
int a,b;
while (cin>>a>>b)
    {
        if (a==b)
        	cout <<"the numbers are equal";
        else
		if (a<b)
        	cout <<"the smaller value is:"<<a<< " and the larger value is:"<<b;
        else
        	cout <<"the smaller value is:"<<b<< " and the larger value is:"<<a;         
    } 
	
//4.,5.
double a,b;
while (cin>>a>>b)
    {
        if (a<b && (b-a)<0.01)
				cout<<"the numbers are almost equal";
		else if (a>b && (a-b)<0.01)
				cout<<"the numbers are almost equal";
    } 
	
//6.
double a,max,min;
int i=1;
while (cin>>a)
    {
        if (i==1) {max=a; min=a;}
	else {
		if (a<min) min=a;
		if (a>max) max=a;}
	cout<<min<<" the smallest so far and "<<max<<" the largest so far\n";
	++i;
    } 
	*/
//7-11.
double a,m, summ,max,min;
string unit;
int i=1;
summ=0;
vector<double>v;
while (cin>>a>>unit)

    {
        if (unit=="m" || unit==" m") m=a;
	if (unit=="cm" || unit==" cm") m=a*0.01;
	if (unit=="in" || unit==" in") m=a*0.0254;
	if (unit=="ft" || unit==" ft") m=a*0.3048;	
	if (i==1) {max=m; min=m;}
	else {
		if (m<min) min=m;
		if (m>max) max=m;}
	v.push_back(m);
	summ+=m;
	cout<<"the smallest: "<<min<<", the largest: "<<max<<", the number of values: "<<i<<" ,the sum of values: "<<summ;
    ++i;
    } 
    sort(v);
    cout<<"vector: ";
    for (int i = 0; i< v.size(); ++i) cout<<v[i]<<", ";
}
