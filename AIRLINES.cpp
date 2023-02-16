#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if((a*10)>=b)
	    {
	        cout<<(b*c)<<endl;
	    }
	    else
	    {
	        cout<<((10*a)*c)<<endl;
	    }
	}
	return 0;
}
