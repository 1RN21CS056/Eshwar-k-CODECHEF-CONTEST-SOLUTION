#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int A,Y;
        cin>>A>>Y;
        int b[A];
        for(int i=0; i<A; i++)
        {
          cin>>b[i];
        } 
            sort(b,b+A);
            if(Y==A) cout<<b[0]-1<<endl;
        else
        {
            cout<<b[A-Y]-1<<endl;
        }    
    }
	return 0;
}