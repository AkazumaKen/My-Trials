#include "linkedlist.h"
#include <iostream>
using namespace std;

int main(int argcs , char** argvs){
    List* list = new LinkedList();
    
    int num;
    int pos;
    char op;
    
    do{

        cout << "Enter op: ";
        cin >> op;

        switch(op){
            case 'a':
            cout << "Enter num to add at head: ";
            cin >> num;
            list->addHead(num);
            break;

            case 't':
            cout << "Enter num to add tail: ";
            cin >> num;
            list->addTail(num);
            break;

            case 'g':
            cout << "get elem at pos: ";
            cin >> pos;
            cout << "Element at "<< pos << ": "  << list->getPos(pos) << endl;
            break;
            
            case 'i':
            cout << "Insert num at: ";
            cin >> num;
            cin >> pos;
            list->addAt(num,pos);
            break;
           
            case 'r':
             list->RemHead();
            break;

            case 'd':
            cout << "remove pos: ";
            cin >> pos;
            list->DeletePos(pos);
            break;

            case 'l':
            list->RemoveTail();
            break;

            case 'f':
            list->flip();
            break;

            case 'c':
            list->clear();
            break;

            case 'p':
            list->print();
            break;

            case 'x':
            cout << "Exiting....";
            break;
        }

    }while(op != 'x');
    
   

}
