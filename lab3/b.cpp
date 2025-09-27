#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    int n, k, a[100005], sum = 0, mx = INT_MIN;
    
    cin >> n >> k;
    
    for(int i = 1; i <= n; i++) {
        cin >> a[i], sum += a[i], mx = max(mx, a[i]);
    }
    
    int l = mx, r = sum;
    
    while(l < r){
        
        int mid = (l + r) / 2;
        int cur_sum = 0, total_block = 0;
        
        for(int i = 1; i <= n; i++){
            if(cur_sum + a[i] <= mid){
                cur_sum += a[i];
            } else {
                total_block++;
                cur_sum = a[i];
            }
        }
        total_block++;
        if(total_block > k) l = mid + 1;
        else r = mid;
        
    }
    cout << r;
}