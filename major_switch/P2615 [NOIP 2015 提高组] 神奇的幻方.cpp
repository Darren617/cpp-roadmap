#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int hf[n+1][n+1];
    int bh=-1;//k-1行数
    int bl=-1;//k-1列数
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            hf[i][j]=0;
        }
    }
    //cout<<hf[0][0]<<endl;

    for(int i=1;i<=n*n;i++){
        if(bh==-1&&bl==-1){
            hf[0][n/2]=i;
            bh=0;
            bl=n/2;
            //cout<<hf[0][1]<<endl;
        }else if(bh==0&&bl!=n-1){
            hf[n-1][bl+1]=i;
            bh=n-1;
            bl+=1;
        }else if(bl==n-1&&bh!=0){
            hf[bh-1][0]=i;
            bh-=1;
            bl=0;

        }else if(bh==0&&bl==n-1){
            hf[bh+1][bl]=i;
            bh=bh+1;
            bl=bl;
        }else if(bh!=0&&bl!=n-1){
            if(hf[bh-1][bl+1]==0){
                hf[bh-1][bl+1]=i;
                bh-=1;
                bl+=1;
            }else {
                hf[bh+1][bl]=i;
                bh+=1;
                bl=bl;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<hf[i][j];
            if(j<n-1){
                cout<<" ";
            }else{
                cout<<endl;
            }
        }
    }

    return 0;
    
}