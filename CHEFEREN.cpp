#include <iostream>

using namespace std;

int main() {
    int test_cases;
    cin >> test_cases; 
    while (test_cases--) 
    {
        int n, a, b;
        cin >> n >> a >> b; 
        int total_duration = 0;

        for (int i = 1; i <= n; i++) 
        {
            if (i % 2 == 0) 
            {
                total_duration += a;
            } else 
            {
                total_duration += b;
            }
        }

        cout << total_duration << endl; 
    }

    return 0;
}
