class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;

        Node(int val) {
            this->val = val;
            this->next = nullptr;
        }
    };

    Node* head;
    MyLinkedList() {
       head = nullptr;
    }
    
    int get(int index) {
        Node* curr=head;

        int cnt=0;
        while(curr != nullptr && cnt<index){
            curr=curr->next;
            cnt++;
        }
        
        if (curr == nullptr)
            return -1;

        return curr->val;

    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        
        if(head == nullptr) {
            head = newNode;
            return;
        }
        Node* curr=head;

        while(curr->next!=nullptr)
            curr=curr->next;
        
        curr->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index == 0){
            addAtHead(val);
            return;
        }
        
        Node* newNode=new Node(val);
        Node* curr=head;

        int cnt=0;
        while(curr!=nullptr && cnt<index-1){
            curr=curr->next;
            cnt++;
        }

        if (curr == nullptr)
            return;


        newNode->next=curr->next;
        curr->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == nullptr)
            return;

        if(index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* curr=head;

        int cnt = 0;
        while (curr != nullptr && cnt < index - 1) {
            curr = curr->next;
            cnt++;
        }
        if(curr!=nullptr && curr->next!=nullptr)
            curr->next=curr->next->next;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */

 