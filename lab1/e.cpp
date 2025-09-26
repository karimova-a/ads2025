#include <iostream>
#include <queue>
using namespace std;

int main(){
    
    int a1, a2, a3, a4, a5, b1, b2, b3, b4, b5;
    
    cin >> a1 >> a2 >> a3 >> a4 >> a5
    >> b1 >> b2 >> b3 >> b4 >> b5;
    
    queue<int> q1, q2;
    
    q1.push(a1);
    q1.push(a2);
    q1.push(a3);
    q1.push(a4);    
    q1.push(a5);
    q2.push(b1);
    q2.push(b2);
    q2.push(b3);
    q2.push(b4);
    q2.push(b5);
    
    int cnt = 0;
    
    while(cnt <= 1000000 && !q1.empty() && !q2.empty()){
        cnt++;
        
        int a = q1.front(), b = q2.front();
        q1.pop(); q2.pop();
        
        if((a == 0 && b == 9) || (a > b && (a != 9 || b != 0))){
            q1.push(a);
            q1.push(b);
        } 
        else {
            q2.push(a);
            q2.push(b);
        }
        
    }
    if(cnt >= 1000000) cout << "blin nichiya";
    else if(q1.empty()) cout << "Nursik" << ' ' << cnt;
    else cout << "Boris" << ' ' << cnt;
    return 0;
}