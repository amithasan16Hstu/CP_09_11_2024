#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, res = 1;
        cin >> n;
        int arr[n + 1];

        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        
        for (int i = 0; i <= 20; i++) {
            int last_position = 0;

            
            for (int j = 1; j <= n; j++) {
                bool is_bit_set = (arr[j] >> i) & 1;

                if (is_bit_set) {
                    int gap = j - last_position;
                    res = max(res, gap);
                    last_position = j;
                }
            }

            
            if (last_position != 0) {
                int final_gap = n + 1 - last_position;
                res = max(res, final_gap);
            }
        }

        cout << res << endl;
    }
    return 0;
}
