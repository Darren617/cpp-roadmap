#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int mid=n/2;
        int loop=0;//圈数
        int count=1;
        loop=n/2;
        int startx=0,starty=0;
        int i=0,j=0;
        int offset=1;
        vector<vector<int>> result(n,vector<int>(n));
        while(loop--){
            i=startx;
            j=starty;
            for(j;j<n-offset;j++){
                result[startx][j]=count++;
            }
            for(i;i<n-offset;i++){
                result[i][j]=count++;
            }
            for(j;j>starty;j--){
                result[i][j]=count++;
            }
            for(i;i>startx;i--){
                result[i][j]=count++;
            }

            startx++;
            starty++;
            offset++;
        }
        if(n%2!=0){
            result[n/2][n/2]=count;
        }
        return result;

    }
};


int main(){

}







