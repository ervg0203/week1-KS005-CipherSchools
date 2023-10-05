#include<iostream>
using namespace std;
int main(){
//	int a[4];
//	int i;
//	cout<<"Give 5 integers as input"<<endl;
//	for(i=0;i<5;i++){
//		cin>>a[i];
//	}
//	cout<<"The 5 integers are: "<<endl;
//	for(i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}

	int a[9];
	int i;
	cout<<"Give 5 integers as input"<<endl;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"The 5 integers are: "<<endl;
	for(i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}
	
	
	return 0;
}
