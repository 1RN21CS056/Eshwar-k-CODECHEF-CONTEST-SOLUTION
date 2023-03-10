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
	      int x[m],y[m];
	      int ans=0;
	      
	      for(int i=0; i<m; i++)
	      {
	          cin>>x[i];
	      }
	      
	      for(int i=0; i<m; i++)
	      {
	          cin>>y[i];
	      }
	      
	      for(int i=0; i<m; i++)
	      {
	          if(x[i]> y[i])
	          {
	                if(x[i] <= 2*y[i])
	                {
	                    ans++;
	                }
	          }
	          else if(x[i] < y[i])
	          {
	              if(2*x[i] >= y[i])
	              {
	                  ans++;
	              }
	          }
	          else
	           {
	               ans++;
	           }
	      }
	      cout<<ans<<endl;
	}
	return 0;
}
