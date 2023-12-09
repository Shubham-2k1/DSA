class Solution {
public:
    int reverse(int x) {
        //Code start
        int num2=0;
        int i=0;
        while(x!=0){
            int temp=x%10;
            // if((num2<INT_MIN/10)||(num2>INT_MAX/10)){
            //     return 0;
            // }
            num2=num2*10+temp;
            x=x/10;
            i++;
        }
        return num2;
        //Code End
    }
};