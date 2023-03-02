#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
	        int m;
	        cin>>m;
	        for(int i=1 ; i<=m/2 ; i++)
	        {
	            cout<<i<<" ";
	        }
	        for(int i=m ; i > m/2 ; i--)
	        {
	            cout<<i<<" ";
	        }
	         cout<<endl;
	}
	
	return 0;
}
