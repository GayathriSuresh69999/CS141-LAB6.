//First include library
#include <iostream>
using namespace std;
//declaration and definition of the function
void findmax(int a,int b,int &c)
{
//Assign suitable value for c	
if(a>b)
c=a;
else if(b>a)
c=b;
}

//main function
int main()
{	
int a,b,c;
//Ask the user for values for the varibles
cout<<"Enter any two values"<< endl;
cin>>a>>b;
//Call function
findmax(a,b,c);
//Check equality and then print the max.
if(c==0)
cout<<"Both are equal"<<endl;
else
cout<<"Maximum is "<<c;
return 0;
}
