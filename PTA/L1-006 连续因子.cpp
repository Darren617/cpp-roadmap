#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,len,mlen=0,pos=0;
    cin>>n;
    int k=sqrt(n);
    int s[k+1];
    int t=0;
   
    for(int i=2;i<=k+1;i++){
        if(n%i==0){
            s[t++]=i;
        }
    }
    if(t==0){cout<<"1"<<endl<<n<<endl;}
    else if(t==1){
        cout<<1<<endl;
        cout<<s[0];
    }else{
        for(int i=0;i<k+1;i++){
            int sum=s[i];
            len=1;
    
            for(int j=i;j<t-1;j++){
                if(s[j+1]-s[j]==1 && n%(sum*s[j+1])==0){
                    len++;
                    sum=sum*s[j+1];
                }else{
                    break;//不符合直接跳出，判断以下一个因子开始的序列是否符合
                }
            }
            if(len>mlen){
                mlen=len;
                pos=i;
            }
        }
        cout<<mlen<<endl;
        cout<<s[pos];
        for(int i=pos+1;i<pos+mlen;i++){
            cout<<"*"<<s[i];
            
        }
        cout<<endl;
    }

}