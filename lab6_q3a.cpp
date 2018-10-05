//First include the libraries
#include <iostream>
using namespace std;
//Decleration and definition of function for finding the maximum.
int findmax(int a,int b)
{	
//Check for max value and assign it to the return varible.
int max;
if(a>b)
max=a;
else if(b>a)
max=b;
//return the value to main
return max;
}

int main()
{	
int a,b,c;
// Ask user for the values of the variables.
cout<<"Enter any two values"<< endl;
cin>>a>>b;
//Call the function and assign its return value to a varible
c=findmax(a,b);
	
if(c==0)
cout<<" Both the entered numbers are equal" <<endl;
else 
cout<<"Maximum is "<<c;
return 0;
}
