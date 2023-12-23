// #include <bits/stdc++.h>
// vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {
//   int number=0;
//   for (int i = 0; i < n; i++){
// 	  number = number * 10 + a[i];
//   }
//   int number2=0;
//   for (int i = 0; i < m; i++){
// 	  number2 = number2 * 10 + b[i];
//   }
//   number = number+number2;
//   vector<int> c;

//   while(number>0){
// 	  c.push_back(number%10);
// 	  number=number/10;
//   }
//   reverse(c.begin(),c.end());
//   return c;
// }