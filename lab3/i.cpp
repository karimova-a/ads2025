#include <iostream>
#include <vector>
using namespace std;

bool search(vector<int> &v, int x) {
    int l = 0, r = v.size() - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;  
        if (v[mid] == x) return true;
        else if (v[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    int x;
    cin >> x;

    if (search(v, x)) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
