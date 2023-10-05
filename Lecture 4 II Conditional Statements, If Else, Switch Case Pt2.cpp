#include<iostream>
using namespace std;
int main(){
//	float a,b;
//	cout<<"Give 2 floating point numbers as input"<<endl;
//	cin>>a;
//	cin>>b;
//	if(a>0.01 || b>a){
//		cout<<"The condition in if statement is correct"<<endl; // will only be printed if condition is satisfied
//	}
//	else{
//		cout<<"The condition is false"<<endl;
//	}


//	int marks;
//	cout<<"Student, please enter the marks to calculate the grade: "<<endl;
//	cin>>marks;
//	if(marks>90){
//		cout<<"A";
//	}
//	else if(marks>80){
//		cout<<"B";
//	}
//	else if(marks>70){
//		cout<<"C";
//	}
//	else {
//		cout<<"Passs";
//	}


//	int a,b,c,d;
//	cout<<"Give 4 integer inputs: a,b,c:"<<endl;
//	cin>>a>>b>>c>>d;
//	if(a>b&&c>d){
//		cout<<"haha";
//	}else if(a>b&&c<d){
//		cout<<"hehe";
//	}else{
//		cout<<"huhu";
//	}
	
	int a;
	cout<<"Enter integer a: "<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"The value of a is 1"<<endl;
			break;
		case 2:
			cout<<"The value of a is 2"<<endl;
			break;
		case 3:
			cout<<"The value of a is 3"<<endl;
			break;
		default:
			cout<<"default will be always printed";
	}
	return 0;
}
