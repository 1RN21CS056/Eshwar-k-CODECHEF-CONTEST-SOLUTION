#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	   int X,Y;
	   cin>>X>>Y;
	   if(X<Y){
	       cout<<"PROFIT"<<endl;
	   }
	   else if(X>Y){
	       cout<<"LOSS"<<endl;
	   }
	   else{
	       cout<<"NEUTRAL"<<endl;
	   }
	}
	return 0;
}