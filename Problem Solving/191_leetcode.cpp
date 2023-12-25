class Solution {
public:
    int hammingWeight(int n) {
        //code start
        int count=0;
        while(n!=0){

            //check last bit
            if(n&1){
                count++;
            }
            //shift next bit to right 
           n= n>>1;
        }
        return count;
        //code end
    }
};