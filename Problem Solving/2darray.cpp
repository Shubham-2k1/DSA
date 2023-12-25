#include<iostream>
 using namespace std;
 int main(){
    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
        int col = 3;
       
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            i++;
        }

    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<endl;

        int startingcol=0;
        int endingcol=col-1;

        for(int i=0;i<row;i++){
            int temp = matrix[row][startingcol];
                matrix[row][startingcol]=matrix[row][endingcol];
                matrix[row][endingcol]=temp;
        }
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }

 }