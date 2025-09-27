#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
    string data ;
    Node *next, *prev ;

    Node(string data){
        this->data = data ;
        this->prev = NULL ;
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

    void add_front(string s){
        Node *node = new Node(s) ;
        if(front == NULL){
            tail = node ;
            front = node ;
        }
        else{
            front->prev = node ;
            node->next = front ;
            front = node ;
        }
    }

    void add_back(string s){
        Node *node = new Node(s) ;
        if(tail == NULL){
            tail = node ;
            front = node ;
        }
        else{
            node->prev = tail ;
            tail->next = node ;
            tail = node ;
        }
    }

    void erase_front(){
        if(front != NULL){
            front = front->next ;
            if(front != NULL){
                front->prev = NULL ;
            }
            else{
                tail = NULL ;
            }
        }
    }

    void erase_back(){
        if(tail != NULL){
            tail = tail->prev ;
            if(tail != NULL){
                tail->next = NULL ;
            }
            else{
                front = NULL ;
            }
        }
    }

    void front(){
        Node *node = front ;
        cout << front->data << endl ;
    }

    void back(){
        Node *node = tail ;
        cout << tail->data ;
    }

    void clear(){
        while(front != NULL){
            erase_front() ;
        }
    }

} ;

int main(){
    LinkedList list ;

    string s ;
    while(cin >> s){
        if (s == "add_front") {
            string t;
            cin >> t;
            list.add_front(t);
            cout << "ok" << endl;
        }
        if (s == "add_back") {
            string t;
            cin >> t;
            list.add_back(t);
            cout << "ok" << endl;
        }
        if (s == "erase_front") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << list.front() << endl;
                list.erase_front();
            }
        }
        if (s == "erase_back") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << list.back() << endl;
                list.erase_back();
            }
        }
        if (s == "front") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << list.front() << endl;
            }
        }
        if (s == "back") {
            if (empty()) {
                cout << "error" << endl;
            } else {
                cout << list.back() << endl;
            }
        }
        if (s == "clear") {
            list.clear();
            cout << "ok" << endl;
        }
        if (s == "exit") {
            cout << "goodbye" << endl;
            break;
        }
    }
    return 0;
}


