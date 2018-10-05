//First include library
#include <iostream>
using namespace std;
char toUpper(char b)
{	
char s;int a;
a=b;
a=a-32;
s=a;
return s;
}
char toLower(char b)
{	
char s;int a;
a=b;
a=a+32;
s=a;
return s;
}	
int main()
{
char b,t;
cout<<"Enter any alphabet (upper case or lower case) :"<<endl;
cin>>b;
if(b>='A' && b<='Z')
{
t=toLower(b);
cout<<"The lower case of the entered alphabet is "<<t;
}
else if(b>='a' &&b<='z')
{	
t=toUpper(b);
cout<<"The upper case of the entered alphabet is "<<t;
}
else 
cout<<" Sorry, The character entered is not an alphabet "<<endl;
        
return 0;
}


