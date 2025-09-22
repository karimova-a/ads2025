#include <iostream>
#include <deque>

using namespace std;

int main(){
    deque <int> num ;
    char n ;
    int d ;
    
    while (cin >> n){
        if (n == '+'){
            cin >> d ;
            num.push_front(d) ;
        }
        else if ( n == '-'){
            cin >> d ;
            num.push_back(d) ;
        }
        else if ( n == '*' ){
            if (num.empty()){
                cout << "error" << endl ;
            }
            else if (num.size() == 1){
                cout << num.front() + num.back() << endl ;
                num.pop_front() ;
            }
            else {
                cout << num.front() + num.back() << endl ;
                num.pop_front() ;
                num.pop_back() ;
            }
            
        }
        else if(n == '!'){
            break ;
        }

    
    }
}   