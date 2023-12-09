//Subtract the product and sum of digit of a number and return it 
class Solution {
public:
    int subtractProductAndSum(int n) {
        //code start
        int sum=0;
        int product=1;
        while(n!=0){
            int digit=n%10;
            product=product*digit;
            sum=sum+digit;
            n=n/10;
        }
        return product-sum;
        //code end
    }
};