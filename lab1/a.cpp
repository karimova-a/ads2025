#include <iostream>
#include <queue>
using namespace std ;

int main(){
    int n, t ;
    cin >> n ;
    
    queue <int> q ;
    
    while(n--){
        cin >> t ;

    }

    
    
   
    
}


/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, x, a[1005];
    
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;

        int a[1005];
        memset(a, -1, sizeof(a));

        int pos = 0;
        for (int cur = 1; cur <= x; cur++) {
            int cnt = cur + 1; 
            while (true) {
                if (a[pos] == -1){
                    cnt--;
                    if (cnt == 0){
                        a[pos] = cur;
                        break;
                    }
                }
                pos++;
                if (pos == x) pos = 0;
            }
        }
        for(int i = 0; i < x; i++) cout << a[i] << ' ';
        cout << endl;
    }
    //6 -> *1**** -> *1**2* -> *1*32* -> 41*32* -> 41*325 -> 416325
    return 0;
}*/