// class Solution {
// private:
//     void solve(vector<string>& ans,string digits,string output,int index,string mapping[]){

//         if(index>=digits.length()){
//             ans.push_back(output);
//             return;
//         }

//         int number = digits[index] -'0';
//         string val = mapping[number];
//         for(int i=0;i<val.length();i++){
//             output.push_back(val[i]);
//              solve(ans,digits,output,index+1,mapping);
//             output.pop_back();
//         }


//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length()==0){
//             return ans;
//         }
//         string output;
//         int index = 0;
//         string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//         solve(ans,digits,output,index,mapping);
//         return ans;

//     }
// };