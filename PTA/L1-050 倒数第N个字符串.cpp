#include<iostream>
using namespace std;
#include<cmath>
int main(){
    int l,n;
    cin>>l>>n;
    char s[10];
    int sum=pow(26,l)-n;//正数
    //拼接
    int count=0;
    for(int i=0;i<l;i++){
        s[i]=sum%26+'a';
        sum/=26;
        count++;
    }
    //反向输出
    
    for(int i=count-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;

}

