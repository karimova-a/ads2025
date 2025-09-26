#include <iostream>
#include <deque>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    
    while(n--){
        int t ;
        cin >> t ;
        
        deque <int> q ;

        for (int i = t; i >= 1; i--){
            
            q.push_front(i) ;
            
            for(int j = 0; j < i; j++){
                int x = q.back() ;
                q.pop_back() ;
                q.push_front(x) ;
            }
        }

        while (!q.empty()){
            cout << q.front() << " " ;
            q.pop_front() ;
        }

        cout << endl ;
    }

}



