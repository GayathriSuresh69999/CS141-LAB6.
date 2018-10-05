
//First include the library 
#include<iostream>
using namespace std;
//Declaration and definition of the function
void sum(int x,int y,int &z)
{
//sum values 	
	 z=x+y;
}
//start main 
int main(){
//Declaration of variables and asking the user for its function
int a,b,c;
cout<<"Enter any two values "<< endl;
cin>>a>>b;
//call summing function
sum(a,b,c);
cout<<"Sum ="<<c;
return 0;

}
