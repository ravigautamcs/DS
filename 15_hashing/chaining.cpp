#include<bits/stdc++.h>
using namespace std;

template<typename T>
class node{
    public:
    string key;
    T value;
    node<T> *next;

    node(string key,T v){
        this->key= key;
        value =v;
    }
};

template<typename T>
class Hashtable{
    int cs; //currentsize
    int ts; //table size
    node<T> ** buckets;

    int hashfn(string key){
        int L = key.length();
        int ans=0;
        int p = 1;

        for(int i=0; i<L; i++){
            ans += key[L-i-1]*p;
            p=p*37;

            p%=ts;
            ans%=ts;
        }
        // int ans = key%10;
        return ans;
    }

    public :
        Hashtable(int ds=7){
            cs=0;
            ts=ds;
            buckets = new node<T> *[ts];
            //make all addresses NULL
            for(int i=0; i<ts; i++){
                buckets[i]=NULL;
            }
        }

        void insert(string key, T value){
            //key i need the hashIndex
            int i = hashfn(key);

            node<T> *n = new node<T>(key, value);
            n->next = buckets[i];
            buckets[i]=n;
        }

        void print(){
            for(int i=0; i<ts; i++){
                node<T>* temp = buckets[i];
                cout<<"Buckets "<<i<<"->";
                while(temp!=NULL){
                    cout<<temp->key<<", ";
                    temp = temp->next;
                }
                cout<<endl;
            }
        }
};




int main(){
    
    Hashtable<int> h(10);
    h.insert("mango", 10);
    h.insert("apple", 17);
    h.insert("guava", 14);
    h.insert("banana", 13);
    h.insert("chicku", 12);
    // h.insert("guava", 500);
    // h.insert("guava", 300);

    h.print();
    return 0;
}