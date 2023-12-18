// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
//        //Create New Vector with existing two vectors
//         vector<int> v;
//         for(auto i:nums1){
//             v.push_back(i);
//         }
//         for(auto i:nums2){
//             v.push_back(i);
//         }
       
//     //    Sort
//         sort(v.begin(),v.end());

//         // Calculate Size
//         int n=v.size();

//         // Check and Return
//         if(n%2==0){
//             return double (v[n/2] + v[n/2 - 1]) / 2;        
//         }
//         else{
//             return double(v[n/2]);
//         }

        

//     }
// };