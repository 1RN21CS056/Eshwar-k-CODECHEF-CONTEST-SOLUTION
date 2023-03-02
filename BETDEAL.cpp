#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int  test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
	        int a,b;
	        cin>>a>>b;
	        int p=1;
	        int q=2;
	        int final_totalA=100 - (a*p);
	        int final_totalB=200 - (b*q);
	        if (final_totalA == final_totalB)
	        { 
	             cout<<"Both"<<endl;
	        }
	        else if( final_totalA > final_totalB)
	        {
	            cout<<"Second"<<endl;
	        }
	        else
	        {
	            cout<<"First"<<endl;
	        }
	}
	return 0;
}
