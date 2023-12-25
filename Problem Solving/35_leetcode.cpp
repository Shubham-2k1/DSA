// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int start =0;
//         int end = nums.size()-1;
//         int mid = start + (end-start)/2;
//         int pivot =1;
//         if(nums[end]<target){
//             return end+1;
//         }
        
//         while(start<=end){
//             if(nums[mid]==target){
//                 return mid;
//             }

//             if(nums[mid]<target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         mid = start + (end-start)/2;  
//         }

//         return start;
//     }
// };