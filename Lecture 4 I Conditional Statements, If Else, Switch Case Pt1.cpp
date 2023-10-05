#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Input 4 integers a,b,c and d"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	// Statement : a>b
	cout<<(a>b && c>d);
	cout<<(a>b || c>d);
	// C++ interprets true as 1
	// C++ interprets false as 0
	
	
	return 0;
}
