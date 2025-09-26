#include <iostream>
#include <vector>
#include <stack>
using namespace std ;

int main(){
    int n ;
    cin >> n ;
    vector <int> num(n), res(n) ;
    

    
    for(int i = 0; i < n; i++){
        cin >> num[i] ; 
    }

    stack <int> s ;

    for(int i = 0; i < n; i++){
        while(!s.empty() && num[s.top()] > num[i]){
            s.pop() ;
        }

        if(s.empty()){
            res[i] = -1 ;
        }
        else{
            res[i] = num[s.top()] ;
        }

        s.push(i) ;
    }

    for(int i = 0; i < n; i++){
        cout << res[i] << " " ;
    }
}