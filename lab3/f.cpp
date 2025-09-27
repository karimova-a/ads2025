#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> powers(n);
    for (int i = 0; i < n; i++) cin >> powers[i];

    sort(powers.begin(), powers.end()); 

 
    vector<long long> pref(n+1, 0);
    for (int i = 0; i < n; i++) pref[i+1] = pref[i] + powers[i];

    int q;
    cin >> q; 

    while (q--) {
        long long mark;
        cin >> mark;

       
        auto it = upper_bound(powers.begin(), powers.end(), mark);
        int count = it - powers.begin();
        long long sum = pref[count];

        cout << count << " " << sum << "\n";
    }


   
}