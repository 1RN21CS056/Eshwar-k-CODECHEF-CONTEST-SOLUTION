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
	    int res= (x*5);
	    if (res>=y)
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
