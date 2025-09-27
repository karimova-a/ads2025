#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int n, k;
    cin >> n >> k;

    vector<int> needed_side(n);

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        needed_side[i] = max(x2, y2); 
    }

    sort(needed_side.begin(), needed_side.end());

   
    cout << needed_side[k-1] << endl;

    return 0;
}