#include<iostream>
using namespace std;
int main()
{
//	int password;
//	do{
//		cin>>password;
//	} while (password<999999);
//	int count=0;
//	while(1){
//		cout<<"Chocolate"<<endl;
//		count++;
//		if(count>100)break;
//	}
	
	
	int i;
	for(i=0;;i++){
		cout<<i<<" ";
		if(i>100) break; // this statement gets executed when i is 101
	}
	
	
//	cout<<"Enter the password: "<<endl;
//	cin>>password;
//	while(password<999999){
//		cout<<"The password does not meet the required conditions, Please enter the password again"<<endl;
//		cin>>password;
//		
//	}
//	cout<<"The user has entered  a correct password"<<endl;
	return 0;
}
