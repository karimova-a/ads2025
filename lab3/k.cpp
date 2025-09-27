#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> a(n + 1), pref(n + 1);
    pref[0] = 0;

    // Read input and compute prefix sums
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    }

    long long l = 1, r = n;
    long long ans = n;

    
    while (l <= r) {
        long long mid = (l + r) / 2;
        bool ok = false;

       
        for (int i = 1; i <= n - mid + 1; i++) {
            long long sum = pref[i + mid - 1] - pref[i - 1];
            if (sum >= k) {
                ok = true;
                break;
            }
        }

        if (ok) {
            ans = mid;      
            r = mid - 1;    
        } else {
            l = mid + 1;    
        }
    }

    cout << ans << endl;
}