// class Solution {
//     private:

   
// char toLower(char ch){
//     if(ch>='a'&&ch<='z'){
//         return ch;
//     }
//     else{
//         char temp = ch-'A'+'a';
//         return temp;
//     }
// }

// bool valid(char ch){
//     if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
//     return 1;
//     else
//     return 0;
// }

// public:
//     bool isPalindrome(string s) {

//      int st=0;
//         int e=s.length()-1;
       
//         while(st<=e){
//             if(valid(s[st])){
//                 if(valid(s[e])){
//                     if(toLower(s[st])!=toLower(s[e])){
//                         return false;
//                     }
//                     else{
//                         st++;
//                         e--;
//                     }
//                 }else{
//                     e--;
//                 }
//             }else{
//                 st++;
//             }
           
//         }
//         return true;

//     }
// };