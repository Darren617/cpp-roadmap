#include<iostream>
using namespace std;
int cal(int n){
    if(n==1){
        return 2;
    }
    return 2*cal(n-1);
}

int main(){
    int n;
    cin>>n;
    int ca=cal(n);
    cout<<2<<"^"<<n<<" = "<<ca<<endl;
    return 0;

}


