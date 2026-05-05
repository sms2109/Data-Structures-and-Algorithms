#include<iostream>
using namespace std;

class Node{
public:
    string key;
    int val;
    Node* next;

    Node(string key,int val){
        this->key = key;
        this->val = val;
        next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

class HashTable{
    int totalSz;
    int currSz; //for rehasing
    Node**table;

    int hashFunction(string key){
        int idx = 0;
        for(int i=0;i<key.size();i++){
            idx += (key[i]*key[i])%totalSz;
        }
        return idx%totalSz;
    }

    void rehash(){
        Node** oldTable = table;
        int oldSz = totalSz;
        totalSz = 2*totalSz;
        currSz= 0;
        table = new Node*[totalSz];
        for(int i=0;i<totalSz;i++){
            table[i] = NULL;
        }
        //copy old values
        for(int i=0;i<oldSz;i++){
            Node* temp = oldTable[i];
            while(temp != NULL){
                insert(temp->key,temp->val);
                temp = temp->next;
            }
            if(oldTable[i] != NULL){
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

public:
    HashTable(int size = 5){
        totalSz = size;
        currSz = 0;
        table = new Node*[totalSz];
        for(int i=0;i<totalSz;i++){
            table[i] = NULL;
        }
    }

    //insert
    void insert(string key,int val){
        int idx = hashFunction(key);
        Node* newNode = new Node(key,val);
        //Node*& head = table[idx];
        newNode->next = table[idx];
        table[idx] = newNode;

        currSz++;

        double lambda = currSz/(double)totalSz;
        if(lambda > 1){
            rehash();
        }
    }

    //exists function
    bool exists(string key){
        int idx = hashFunction(key);
        Node* curr = table[idx];
        while(curr != NULL){
            if(curr->key == key){
                return true;
            }
            curr = curr->next;
        }
        return false;
    }

    //search operation
    int search(string key){
        int idx = hashFunction(key);
        Node* curr = table[idx];
        while(curr != NULL){
            if(curr->key == key){
                return curr->val;
            }
            curr = curr->next;
        }
        return -1;
    }

    //print hastTable
    void print(){
        for(int i=0;i<totalSz;i++){
            cout<<"idx"<<i<<"->";
            Node* temp = table[i];
            while(temp != NULL){
                cout<<"("<<temp->key<<","<<temp->val<<")->";
                temp = temp->next;
            }
            cout<<endl;
        }
    }

    //remove operation
    void remove(string key){
        int idx = hashFunction(key);

        Node* temp = table[idx];
        Node* prev = temp;
        while(temp!=NULL){
            if(temp->key == key){//erase
                if(prev == temp){//head
                   table[idx] = temp->next;
                }else{
                    prev->next = temp->next;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
        }
    }
};

int main(){
    HashTable ht;
    ht.insert("India",150);
    ht.insert("China",150);
    ht.insert("US",50);
    ht.insert("Nepal",10);
    
    // if(ht.exists("India")){
    //     cout<<"India population : "<<ht.search("India")<<"crores"<<endl;
    // }

    ht.print();
    ht.insert("Newzland",40);
    ht.insert("Australia",70);
    cout<<"--------------"<<endl;
    ht.print();
    ht.remove("China");
    cout<<"--------------"<<endl;
    ht.print();
    ht.remove("Newzland");
    cout<<"--------------"<<endl;
    ht.print();
    return 0;
}