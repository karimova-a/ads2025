#include <iostream>
#include <vector>
using namespace std;

bool canDeliver(const vector<long long>& children, long long f, long long cap) {
    long long totalFlights = 0;
    for (long long c : children) {
        totalFlights += (c + cap - 1) / cap;
        if (totalFlights > f) return false; 
    }
    return totalFlights <= f;
}

int main() {
    int n;
    long long f;
    cin >> n >> f;
    vector<long long> children(n);
    long long maxChild = 0;

    for (int i = 0; i < n; i++) {
        cin >> children[i];
        if (children[i] > maxChild) maxChild = children[i];
    }

    long long l = 1, r = maxChild, ans = maxChild;

    while (l <= r) {
        long long mid = l + (r - l) / 2;
        if (canDeliver(children, f, mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1; 
        }
    }

    cout << ans << endl;
   
}