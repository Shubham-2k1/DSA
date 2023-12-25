// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first = findFirst(nums, target);
//         int last = findLast(nums, target);
//         return {first, last};
//     }

// private:
//     int findFirst(vector<int>& nums, int target) {
//         int start = 0, end = nums.size() - 1;
//         int first = -1;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (nums[mid] == target) {
//                 if (mid == 0 || nums[mid - 1] != target) {
//                     first = mid;
//                     break;
//                 }
//                 else {
//                     end = mid - 1;
//                 }
//             }
//             else if (nums[mid] < target) {
//                 start = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }
//         return first;
//     }

//     int findLast(vector<int>& nums, int target) {
//         int start = 0, end = nums.size() - 1;
//         int last = -1;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (nums[mid] == target) {
//                 if (mid == nums.size() - 1 || nums[mid + 1] != target) {
//                     last= mid;
//                     break;
//                 }
//                 else {
//                     start = mid + 1;
//                 }
//             }
//             else if (nums[mid] < target) {
//                 start = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }
//         return last;
//     }

// };