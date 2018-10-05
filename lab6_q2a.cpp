// First include library
#include<iostream>
using namespace std;
// declaration and definition of function
void sum(int a,int b)
{
//find sum
int s=a+b;
//print them
cout<<a<<"+"<<b<<"="<<s;
cout<<endl;
}
int main()
{
		
//Declaration of varibles to which the numbers are stored.
cout<<"Program to find sum of two functions using functions(call by value method)";        
int a,b;
cout<<"Enter any two numbers;" << endl;
cin>>a>>b;
	
//calling the function by value
sum(a,b);
return 0;
}
