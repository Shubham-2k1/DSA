//Approach 1

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     if(head==NULL||head->next==NULL){
//         return head;
//     }

//    LinkedListNode<int>* prev = NULL;
//    LinkedListNode<int>* curr = head;
//    LinkedListNode<int>* forward = NULL;

//    while(curr!=NULL){
//        forward = curr->next;
//        curr -> next = prev;
//        prev=curr;
//        curr=forward;
//    }
//    return prev;
// }


//Approach 2

// void reverseLL(LinkedListNode<int>* &head,LinkedListNode<int> *curr,LinkedListNode<int> *prev){
//     if(curr==NULL){
//         head = prev;
//         return;
//     }

//     LinkedListNode<int>* forward = curr->next;
//     reverseLL(head,forward,curr);
//     curr->next=prev;
// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//       LinkedListNode<int>* curr = head;
//       LinkedListNode<int>* prev = NULL;
//       reverseLL(head,curr,prev);
//       return head;

// }