#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main(){
    int num[1001]={0};
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        for(int j=0;j<m;j++){
            int k;
            cin>>k;
            num[k]++;
        }
    }

    int t=0,max=0;
    for(int i=0;i<1001;i++){
        
        if(num[i]>=t){
            t=num[i];
            max=i;
        }
        
    }
    cout<<max<<" "<<t<<endl;


}
