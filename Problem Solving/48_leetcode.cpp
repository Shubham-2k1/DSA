#include<iostream>
using namespace std;

int main(){
    int matrix[4][4] = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    int row = 4;
    int col = 4;

    //Transpose
        for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<=j){
               int temp= matrix[i][j];
               matrix[i][j]=matrix[j][i];
               matrix[j][i]=temp;
            }
        }
    }
    
    //Swap
         int start =0;
         int end = col-1;
        while(start<end){
        for(int i=0;i<row;i++){ 
            int temp= matrix[i][start];
               matrix[i][start]=matrix[i][end];
               matrix[i][end]=temp;
         }
         start++;
         end--;
    }
}  