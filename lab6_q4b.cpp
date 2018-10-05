//First include library
#include <iostream>
using namespace std;
//declaration and definition of function
void findmin(int a,int b,int &c)
{
//Assign suitable value for c	
if(a<b)
c=a;
else if(b<a)
c=b;
}
//main function
int main()
{	
int a,b,c;
//Ask the user for values for the varibles.
cout<<"Enter any two values"<< endl;
cin>>a>>b;
//call function
findmin(a,b,c);
//check equality and then print the min
if(c==0)
cout<<"Both are equal"<< endl;
else
cout<<"Minimum is "<<c<<endl;
return 0;
}


