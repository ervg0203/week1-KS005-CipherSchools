#include<iostream>
using namespace std;
int main(){
//	int i;
//	i=1;
//	while(i<101){
//		cout<<i<<" ";
//		i++;
//	}
	int i;
	i=100;
	int input;
	// guess the number 65
	// the user has 100 chances
	for(i=1;i<101;i++){
		cin>>input;
		if(input==65){ // only takes place if the input is exactly 65
			cout<<"congrats you have guessed correct"'
			break;
		}
	}
	return 0;
}
