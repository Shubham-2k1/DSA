// /*
// Following is the class structure of the Node class:

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node()
//     {
//         this->data = 0;
//         next = NULL;
//     }
//     Node(int data)
//     {
//         this->data = data; 
//         this->next = NULL;
//     }
//     Node(int data, Node* next)
//     {
//         this->data = data;
//         this->next = next;
//     }
// };
// */

// Node *findMiddle(Node *head) {
// //    Node* current = head;
// //    int length=0;

// //    while(current!=NULL){
// //        current=current->next;
// //        length++;
// //    }

// //    int count =0;

// //    Node* temp = head;
// //    while(count<length/2){
// //        temp=temp->next;
// //        count++;
// //    }
// //    return temp;

//     if(head==NULL||head->next==NULL){
//         return head;
//     }
//     if(head->next->next==NULL){
//         return head->next;
//     }

//     Node* fast = head->next;
//     Node* slow = head;

//     while(fast!=NULL){
//         fast = fast -> next;
//         if(fast!=NULL){
//         fast = fast -> next;
//         }
//         slow = slow -> next;
//     }
//     return slow;

// }

