// class Solution {
// public:

//     //To search in O(log(N)) complexity
//     // int binarysearch(vector<int>& nums,int start,int end, int key){
       
//         int mid = start + (end - start)/2;
//         while(start<=end){
//             if(nums[mid]==key){
//             return mid;
//         }
//             if(key>nums[mid]){
//                 start=mid+1;
//             }
//             else{
//                 mid=end-1;
//             }
//             mid = start + (end - start)/2;
//         }
//         return -1;
        
//     }

//     //To Get Pivot
//     // int getPivot(vector<int>& nums, int n){
//         int start=0;
//         int end=n-1;
//         int mid = start + (end - start)/2;

//         while(start<end){
//             if(nums[mid]>=nums[0]){
//                 start = mid +1;
//             }
//             else{
//                 end=mid;
//             }
//             mid = start + (end - start)/2;
//         }
//         return start;
//     }



//     // int search(vector<int>& nums, int target) {
//         int Size = nums.size();
//         int ans=0;

//            if(target==nums[0]){
//             ans = 0;
//             return ans;
//         }
//         if(target==nums[Size-1]){
//             ans=Size-1;
//             return ans;
//         }
        
//         //Getting Pivot of the Vector
//         int pivot=getPivot(nums,Size);
      
//         if(target==nums[pivot]){
//             ans=pivot;
//             return ans;
//             }

     
     

//         //Checking for Element
//         if(nums[pivot]>target&&nums[Size-1]<target){
//             ans = binarysearch(nums,pivot,Size-1,target);
//             return ans;
//         }else{
//             ans = binarysearch(nums,0,pivot-1,target);
//             return ans;
//         }
        
//         return -1;
//      }
// };