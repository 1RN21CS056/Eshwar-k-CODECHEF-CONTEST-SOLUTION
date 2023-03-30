#include <iostream>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) 
    {
        int n, count;
        string str, res;
        cin >> n >> str;
        count = 1;
        for (int i = 1; i <= n; i++) 
        {
            if (i == n || str[i] != str[i-1]) 
            {
                if (count % 2 != 0) 
                {
                    res += str[i-1];
                } else 
                {
                    res += str[i-1];
                    res += str[i-1];
                }
                count = 1;
            } else
            {
                count++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
