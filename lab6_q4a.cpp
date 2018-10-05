//First include the library
#include <iostream>
using namespace std;
//Declaration and definition of function for finding minimum
int findmin(int a,int b)
{	
//check for the minimum value and assign it to the return varible
int min;
if(a<b)
min=a;
else if(b<a)
min=b;
// return the value to main
return min;
}

int main()
{	
int a,b,c;
//Ask user for the values of the variables
cout<<"Enter any two values"<< endl;
cin>>a>>b;
//Call the function and assign its return value to a varible
c=findmin(a,b);
	
if(c==0)
cout<<" Both the entered numbers are equal"<< endl;
else 
cout<<"Minimum is "<<c<<endl;
return 0;
}

