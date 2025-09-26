#include <iostream>
#include <vector>

using namespace std ;

int main(){
    int n ;
    cin >> n ;

    vector <int> v(n) ;
    for (int i = 0; i < n; i++){
        cin >> v[i] ;
    }

    int d ;
    cin >> d ;

    int id = 0 ;
    int dis = abs(v[0] - d) ;

    for (int i = 1; i < n; i++){
        int j = abs(v[i] - d) ;
        if(j < dis){
            dis = j ;
            id = i ;
        }
    }

    cout << id ;
}