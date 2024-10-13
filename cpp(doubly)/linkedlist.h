#include "list.h"
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList : public List{

    node* head;
    node* tail;
    int size = 0;

    public:
    LinkedList(){
        head = new node;
        tail = new node;
        head->next = tail;
        tail->prev = head;
    }

    //adding nodes//

    node* add_between(int num, node* pred, node* succ){
        node* n = new node;
        n->data = num;
        n->prev = pred;
        n->next = succ;
        pred->next = n; 
        succ->prev = n;
        size++;
    } 

    // adding head
    void addHead(int num){
        add_between(num,head,head->next);
    }

    void addTail(int num){
        add_between(num,tail->prev,tail);
    }
    
    void addAt(int num,int pos){
        if(pos< 0 || pos > size){
            cout << "invalid!" << endl;
        }

        node* newNode = new node;
        newNode->data = num;
        node* curr = head;

        for(int i=1 ; i < pos; i++){
            curr= curr->next;
        }

        newNode->next = curr->next;
        newNode->prev = curr;
        curr->next->prev = newNode;
        curr->next = newNode;
        size++;


    }

    //remove // deletes all///

    void remove_node(node* n){
        node* next = n->next;
        node* prev = n->prev;
        prev->next = next;
        next->prev = prev;
        delete(n);
        size--;
    }

    void RemHead(){
        if(size==0){
            cout << "No head!" << endl;
        }else{
            int tmp = head->next->data;
            remove_node(head->next);
            cout << tmp << " has been removed! from head" << endl;
        }
    }

    void RemoveTail(){
        if(size==0){
            cout<< "No tail!" << endl;
        }else{
            int tmp = tail->prev->data;
            remove_node(tail->prev);
            cout << tmp << " has been removed! from tail" << endl;
        }
    }

   void DeletePos(int pos){
        if(pos < 0 || pos > size){
            cout << "Invalid position!" << endl;
        }else{
            int tmp;
            node* curr = head->next;
            for(int i = 1 ;i < pos ;i++){
                curr = curr->next;
               tmp = curr->data;
            }
            remove_node(curr);
            cout << tmp << " has been removed from position: " << pos << endl;
        }
   }

    
    void clear(){
        cout << "clearing!!" << endl;
        node* curr = head->next;
        while(curr != tail){
                node* n = curr->next;
                remove_node(curr);
                curr = n;        
            }
            cout << "Done! " << endl;
        }

    int getPos(int pos){
        if(pos <= 0 || pos > size){
            cout << "Invalid pos!" << endl;
            return 0;
        }

            node* curr = head;
            for(int i=1;i<pos;i++){
                curr = curr->next;
            }
            return curr->data;
        
    }

    //flip 

    void flip(){
        node* curr = head;
        node* tmp = nullptr;

        while(curr != nullptr){
            tmp = curr->prev;
            curr->prev = curr->next;
            curr->next = tmp;
            curr = curr->prev;
        }

        tmp = head;
        head = tail;
        tail = tmp;

        head->prev = nullptr;
        tail->next = nullptr;

    }

    //print list...
   void print() {
    	node* curr = head->next;
    	if (size == 0) {
    		cout << "Empty" << endl;
		} else{
            cout << "From head->tail : ";
            while(curr != tail){
                cout << curr->data << "->";
                curr = curr->next;
                if(curr == tail){
                    cout << "NULL!" ;
                }
            }
            cout << endl;
        }
        
    } 
    
    
};