class MyLinkedList {
    struct Node{
        int val;
        Node* next;
        Node(int v){
            this->val=v;
            this->next=nullptr;
        }
    };
    Node* head;    
    int size;
public:
    MyLinkedList(){
        head=new Node(0);
        size=0;
    }
    int get(int index) {
        if(index<0||index>=size) return -1;
        Node* temp=head->next;
        int i=0;
        while(i<index){
            temp=temp->next;
            i++;
        }
        return temp->val;
    }
    void addAtHead(int val){
        addAtIndex(0,val);
    }
    void addAtTail(int val){
        addAtIndex(size,val);
    }
    void addAtIndex(int index, int val){
        if(index>size) return;              
        if(index<0) index=0;
        Node* temp2=head;
        int i=0;
        while(i<index) {
            temp2=temp2->next;
            i++;
        }
        Node* node=new Node(val);
        node->next=temp2->next;              
        temp2->next=node;
        size++;
    }
    void deleteAtIndex(int index) {
        if(index<0||index>=size) return;
        Node* temp2=head;
        int i=0;
        while(i<index){
            temp2=temp2->next;
            i++;
        } 
        Node* del=temp2->next;
        temp2->next=del->next;                
        delete del;
        size--;
    }
    ~MyLinkedList(){                         
        Node* temp2=head;
        while(temp2!=nullptr){
            Node* nxt=temp2->next;
            delete temp2;
            temp2=nxt;
        }
    }
};