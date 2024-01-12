//Find 2nd largest and 2nd Smallest in the array

// vector<int> getSecondOrderElements(int n, vector<int> arr) {
//     int large=INT_MIN;
//     int secondlarge=INT_MIN;
//     int small=INT_MAX;
//     int secondsmall=INT_MAX;

//     for(int i=0;i<n;i++){
//         if(arr[i]<small){
//             secondsmall=small;
//             small=arr[i];
//         }
//         else if(arr[i]<secondsmall && arr[i]!=small){
//             secondsmall=arr[i];
//         }
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]>large){
//             secondlarge=large;
//             large=arr[i];
//         }
//         else if(arr[i]>secondlarge && arr[i]!=large){
//             secondlarge=arr[i];
//         }
//     }
//     return {secondlarge,secondsmall};
// }
