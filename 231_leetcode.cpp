class Solution {
public:
    bool isPowerOfTwo(int n) {
    
 // edge case
  if (n == 0) {
    return false;
  }
  if(n==1){
      return true;
  }
    if(n<0){
        return false;
    }

//original checking without for loop
  while (n > 1) {
    int digit = n % 2;

    if (digit == 0)
     {
         n = n / 2;
     } 
    else {
         return false;
         break;
        }
  }

       return true;
    }
};