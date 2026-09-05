#include<iostream>
using namespace std;
#include<vector>

int main(){
    int n;
    cin>>n;
    vector<vector<int>> w(n,vector<int> (n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>w[i][j];
        }
    }

    long long ans=0;
    for(int mask=0;mask<(1<<n);mask++){
        long long sum=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int side_i =(mask>>i)&1;//将mask右移i位，再与1比较判断最右边的是1还是0
                int side_j=(mask>>j)&1;
                if(side_i!=side_j){
                    sum+=w[i][j];
                }
            }
        }
        ans=max(ans,sum);//update
    }
    cout<<ans<<endl;
    return 0;
}
