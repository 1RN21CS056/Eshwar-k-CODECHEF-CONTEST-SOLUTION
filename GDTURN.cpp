#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
	    int x,y;
	    cin>>x>>y;
	    int sum=(x+y);
	    if(sum>6)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
