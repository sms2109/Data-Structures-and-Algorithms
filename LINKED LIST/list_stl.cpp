#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printList(list<int> ll){
    list<int>::iterator itr;
    for(itr = ll.begin();itr != ll.end();itr++){
        cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}
int main(){
    list<int> ll; //vector<int> vec
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(3);
    ll.push_back(4);

    printList(ll);
    cout<<"size = "<<ll.size()<<endl;
    cout<<"head = "<<ll.front()<<endl;
    cout<<"tail = "<<ll.back()<<endl;
    
    ll.pop_front();
    printList(ll);
    ll.pop_back();
    printList(ll);

    //ll.insert(iterator_position, count, value);
    ll.insert(ll.begin(), 2, 1);
    printList(ll);

    auto it = ll.begin(); //auto automatically detects the data type of a variable at compile time.
    advance(it, 2);   // move iterator to index 2

    ll.insert(it, 2, 3);

    printList(ll);
    
    return 0;
}