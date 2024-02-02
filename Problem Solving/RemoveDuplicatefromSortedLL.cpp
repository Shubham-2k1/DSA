// Node * removeDuplicates(Node *head)
// {
//     //empty
//     if(head==NULL){
//         return NULL;
//     }

//     Node* curr = head;

//     while(curr!=NULL){

//         if((curr->next!=NULL)&&curr->data == curr->next->data){
//             Node* Nodetodel = curr->next;
//             curr->next=curr->next->next;
//             delete(Nodetodel);
//         }else{
//             curr=curr->next;
//         }

//     }
//     return head;
// }