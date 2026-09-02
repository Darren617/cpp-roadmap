#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cin>>n;
    int pre=-1;//上一个座位人的学校
    int school[101]={0};//每个学校的队伍数
    int maxNum=0;//最大队伍数
    for(int i=0;i<n;i++){
        cin>>school[i];
        maxNum=maxNum>school[i]?maxNum:school[i];
    }
    int stu[101][11][11]={0};//学校、队伍、个人
    int id=0;
    for(int i=0;i<maxNum;i++){
        for(int j=0;j<10;j++){
            for(int k=0;k<n;k++){
                if(i<school[k]){
                    if(pre==k){
                        id+=2;
                    }else{
                        id+=1;
                    }
                    pre=k;
                    stu[k][i][j]=id;
                }
            }
        }
    }
    //cout<<stu[0][0][0]<<endl;
    //输出
    for(int i=0;i<n;i++){
        cout<<"#"<<i+1<<endl;
        for(int j=0;j<school[i];j++){
            for(int k=0;k<10;k++){
                cout<<stu[i][j][k];
                if(k<9){
                    cout<<" ";
                }else{
                    cout<<endl;
                }
            }
        }
    }
    return 0;


}