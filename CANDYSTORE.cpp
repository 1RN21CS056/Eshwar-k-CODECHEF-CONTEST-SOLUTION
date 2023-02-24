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
	    if(x>=y)
	    {
	        cout<<y<<endl;
	    }
	    else
	    {
	        cout<<x+(y-x)*2<<endl;
	    }
	}
	return 0;
}
