#include<iostream>
using namespace std;
#define MAX_ROW 10  // 定义矩阵的最大行数
#define MAX_COL 10  // 定义矩阵的最大列数


void matrixAddition(int matrix1[][MAX_COL], int matrix2[][MAX_COL], int result[][MAX_COL] , int rows , int cols ){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                result[i][j]=matrix1[i][j]+matrix2[j][i];
            }
        }
}
void matrixInput(int matrix[][MAX_COL] , int rows , int cols ) {
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cin>>matrix[i][j];
        }
    }
}
void matrixOutput(int matrix[][MAX_COL] , int rows , int cols ){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            cout<<matrix[i][j];
            if(j<rows-1){
                cout<<" ";
            }else{
                cout<<endl;
            }
        }
    }
}

int main() {
    int        rows , cols ;
    int        matrix1[MAX_ROW][MAX_COL] , matrix2[MAX_ROW][MAX_COL] , result[MAX_ROW][MAX_COL];  
    
    scanf("%d%d" , &rows , &cols) ;
    matrixInput(matrix1 , rows , cols ) ;
    matrixInput(matrix2 , rows , cols ) ;
    matrixAddition(matrix1 , matrix2 , result ,  rows , cols);
    matrixOutput(result , rows , cols ) ;

    return 0;
}
