#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) 
    {
        int m;
        cin >> m;
        int B[m];
        for (int i = 0; i < m; i++) 
        {
            cin >> B[i];
        }

        int min = B[0];
        for (int i = 1; i < m; i++) 
        {
            if (B[i] < min) 
            {
                min = B[i];
            }
        }

        int res = 0;
        for (int i = 0; i < m; i++)
        {
            if (B[i] > min)
            {
                res++;
                
            }
        }
        cout << res << endl;
    }
    return 0;
}
