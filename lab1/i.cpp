#include <iostream>
#include <queue>

using namespace std ;

int main(){
    int n ;
    string s ;

    cin >> n >> s ;

    queue <int> K, S ;

    for (int i = 0; i < s.size() ; i++){
        if (s[i] == 'K'){
            K.push(i) ;
        }
        else{
            S.push(i) ;
        }
    }

    while (!K.empty() && !S.empty()){
        int id_k = K.front() ;
        int id_s = S.front() ;
        K.pop() ;
        S.pop() ;

        if(id_k < id_s){
            K.push(id_k + n) ;
        }
        else{
            S.push(id_s + n) ;
        }
    }

    if (K.empty()){
        cout << "SAKAYANAGI" << endl ;
    }
    else{
        cout << "KATSURAGI" << endl ;
    }
}