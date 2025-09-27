/*#include <iostream>
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
*/

#include <iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node *next ;

    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }
} ;

class LinkedList{
    public:
    Node *tail, *front ;

    LinkedList(){
        tail = NULL ;
        front = NULL ;
    }

    void append(int data){
        Node *node = new Node(data) ;
        if(front == NULL){
            front = node ;
            tail = node ;
        }
        else{
            tail->next = node ;
            tail = node ;
        }
    }

    int findnum(int fi){
        if(front == NULL){
            return -1 ;
        }

        int id = 0, ans = 0 ;
        int distance = abs(front->data - fi) ;

        Node *curr = front->next ;
        id = 1 ;

        while(curr != NULL){
            int dist = abs(curr->data - fi) ;
            if (dist < distance){
                distance = dist ;
                ans = id ;
            }

            curr = curr->next ;
            id++ ;
        }
        return ans ;
    }
} ;

int main(){
    int n ;
    cin >> n ;

    LinkedList list ;
    for(int i = 0; i < n; i++){
        int a ;
        cin >> a ;
        list.append(a) ;
    }

    int d ;
    cin >> d ;

    cout << list.findnum(d) ;

}