#include<iostream>
using namespace std;
#include<vector>
#include<string>


struct Node{
    int id;
    string name;
    Node* next;
    Node* before;
    Node(int iad,string aname):id(iad),name(aname),next(nullptr),before(nullptr){}
};
Node* head;
Node* tail;



//尾插
void push_back(int i,string n){
    Node* newNode = new Node(i,n);

    if(head==nullptr){
        head=tail=newNode;
        return;
    }
    newNode->before=tail;
    newNode->next=nullptr;
    tail->next=newNode;
    tail=newNode;
}

//头插
void push_front(int i,string n){
    Node * newNode=new Node(i,n);

    if(head==nullptr){
        head=newNode;
        tail=newNode;
        return;

    }
    newNode->next=head;
    newNode->before=nullptr;
    head=newNode;

}
void remove(string name){
    Node* cur=head;
    while(cur!=nullptr){

        if(cur->name==name){
            //删除头节点

            if(cur==head){
                head=cur->next;
                if(head!=nullptr){
                    head->before=nullptr;
                }else{
                    tail=nullptr;
                }
            }
        
            else if(cur==tail){
                tail = cur->before;
                tail->next=nullptr;
            }else{
                cur->before->next=cur->next;
                cur->next->before=cur->before;
            }
            delete cur;
            return;


        }
        cur=cur->next;
    }
    
}
void clear(){
    Node * cur=head;
    while(cur!=nullptr){
        Node *temp=cur->next;
        delete cur;
        cur=temp;
    }
    head=nullptr;
    tail=nullptr;
}

int main(){
    int n;
    cin>>n;

    int id;
    string name;
    
    cin>>id>>name;
    head=tail=new Node(id,name);
    for(int i=1;i<n;i++){
        cin>>id>>name;
        push_back(id,name);
    }

    
    
    for(int i=0;i<n/2;i++){
        Node * h=head;
        Node * b=tail;
        if(h->id!=b->id){
            cout<<h->name<<" "<<b->name<<endl;
            remove(h->name);
            remove(b->name);
        }else{
            while(h->id==b->id){
                b=b->before;
                if(h->id!=b->id){
                    cout<<h->name<<" "<<b->name<<endl;
                    remove(h->name);
                    remove(b->name);
                    break;
                }

            }
        }
        
    }
    clear();
    return 0;

}