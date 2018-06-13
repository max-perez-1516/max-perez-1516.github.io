

#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    Node(int _data)
    : prev{this}, data{_data}, next{this}
    {   }
    
    Node* getNext() const {
        return next;
    }
    
    Node* getPrev() const {
        return prev;
    }
    
    void setNext(Node* ptr) {
        next = ptr;
    }
    
    void setPrev(Node* ptr) {
        prev = ptr;
    }
    
    int getData() const {
        return data;
    }
    
 private:
    Node* prev;
    int data;
    Node* next;
};

class DLinkedCircList {
public:
    DLinkedCircList()
    : head{nullptr}, size{0} {                 //  initialize head to null since there are 0 objects in the list
    }
    
    ~DLinkedCircList(){
        cout << "destructor" << endl;
        clear();
        
        }
    
    string toString() const {
        string out{"["};
        
        if (head != nullptr) {                 //  testing if we have a linked list
            int data{};
            Node* ptr{head};               //   pointing at very first element in list
            
            do {
                data = ptr -> getData();
                out += to_string(data);
                
                if (ptr -> getNext() != head) {
                    out += ", ";
                }
                
                ptr = ptr -> getNext();
                
            } while(ptr != head);
        }
        out += "]";
        return out;
    }
    
    void push_back(int val) {
        Node* newNode{new Node{val}};          //  new node pointer called ptr, with push back val.
        //  did the memory get allocated?
        
        if (head == nullptr) {
            head = newNode;
        }
        else {                                 //  if head is not a nullprt, put at end of list (add to end).
            Node* last{head -> getPrev()};
            last -> setNext(newNode);
            newNode -> setPrev(last);
            newNode -> setNext(head);
            head -> setPrev(newNode);
        }
        
        size += 1;
    }
    void positionLoc (int value, int loc) {     // function to add a new node at a designated position
        Node* newNode{new Node{value}};         // declared by the user.
        Node* nextPtr{head};
        
        if (loc == 0) {                             // if the location is equal to zero..
            Node* prevPtr{head -> getPrev()};       // get the head pointer, then point behind it.
            head = newNode;                         // set head to the new node.
            prevPtr -> setNext(newNode);            // here we set the previous node ptr to the next(newnode)
            newNode -> setPrev(prevPtr);            // newNode then set to the prevPtr
            newNode -> setNext(nextPtr);            // new node then is set the end of the node to next
            nextPtr -> setPrev(newNode);            // new node set prev to the new node
        }
        else {
            for (int counter = 0; counter < loc; counter += 1) {    // if not at head, then counter runs through
                nextPtr = nextPtr -> getNext();                     // nodes until it gets to the location
            }
            Node* prevPtr{nextPtr -> getPrev()};
            prevPtr -> setNext(newNode);            // here we set the previous node ptr to the next(newnode)
            newNode -> setPrev(prevPtr);            // newNode then set to the prevPtr
            newNode -> setNext(nextPtr);            // new node then is set the end of the node to next
            nextPtr -> setPrev(newNode);            // new node set prev to the new node
        }
        size += 1;
    }
    Node* location(int index) const {
        Node* temp{nullptr};
        if(index < size && index >= 0) {
            temp = head;
        }
        for (int i = 0; i < index; i ++) {
            temp = temp -> getNext();
        }
        return temp;
    }
    void delNode (int index) {
        if  (index < size && index >= 0) {
            Node* toDelete(location(index));
            cout << toDelete->getData() <<  endl;
            toDelete->getNext() -> setPrev(toDelete -> getPrev());
            toDelete->getPrev() -> setNext(toDelete -> getNext());
            
            if (index == 0) {
                head = toDelete -> getNext();
            }
            
            delete toDelete;
            size -= 1;
        }
    }
    void clear() {
        if (head != nullptr) {
            Node* temp{head};
            for (int i = 0; i < size; i ++) {
                head = head -> getNext();
                delete temp;
                temp = head;
            }
            head = nullptr;
            size = 0;
        }
    }
    int getSize() const {
        return size;
    }
private:
    Node* head;
    int size;
};

int main() {
    
    {
    DLinkedCircList dlc{};
    dlc.push_back(99);
    dlc.push_back(40);
    dlc.push_back(20);
    dlc.push_back(10);
    cout << dlc.toString() << endl;

    dlc.pLoc(11, 1);
    cout << dlc.toString() << endl;
    cout << dlc.getSize() << endl;
        
    dlc.delNode(1);
    cout << dlc.getSize() << endl;

        //dlc.~DLinkedCircList();
    cout << dlc.toString() << endl;
    return 0;
    }
}
