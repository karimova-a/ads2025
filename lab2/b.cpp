/*#include <iostream>

using namespace std;

struct Node {
    string data;
    Node* next;
    Node(string x) : data(x), next(NULL){}
};
    
int main() {
    
    int n, k, cnt = 0;
    string s;
    
    cin >> n >> k;
    
    Node *head = NULL, *tail = NULL;
    
    for(int i = 1; i <= n; i++){
        cin >> s;
        Node* node = new Node(s);
        if(head == NULL) head = tail = node;
        else {
            tail->next = node;
            tail = node;
        }
    }
    Node* cur = head;
    while(cur != NULL){
        if(cnt >= k) cout << cur->data << ' ';
        cur = cur->next;
        cnt++;
    }
    cnt = 0; cur = head;
    while(cnt < k) {
        cout << cur->data << ' ';
        cur = cur->next;
        cnt++;
    }
    
    return 0;
}*/

#include <iostream>
#include <string>
using namespace std ;

class Node{
    public:
    string data ;
    Node *next ;

    Node(string data){
        this->data = data ;
        this->next = NULL ;
    }
};

class LinkedList{
    public:
    Node *front, *tail ;
    int size ;

    LinkedList(){
        front = NULL ;
        tail = NULL ;
        size = 0 ;
    }

    void append(string data){
        Node *node = new Node(data) ;
        if(front == NULL){
            front = node ;
            tail = node ;
        }
        else{
            tail->next = node ;
            tail = node ;

        }
        size++ ;
    }

    void shift(int k){
        if(!front || !front->next){
            return ;
        }

        k %= size ;
        if(k == 0){
            return ;
        }

        tail->next = front ;
        Node *newTail = front ;
        for(int i = 0; i < k-1; i++){
            newTail = newTail->next ;

        }

        front = newTail->next ;
        newTail->next = NULL ;
        tail = newTail ;

    }

    void print() {
        Node *curr = front;
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};

int main() {
    int n, k;
    cin >> n >> k;

    LinkedList poem;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        poem.append(word);
    }

    poem.shift(k);  // perform cyclic shift
    poem.print(); 


}