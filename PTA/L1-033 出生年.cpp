#include<iostream>
using namespace std;
#include<string>
#include<set>
#include<iomanip>

int main(){
    int y,n;
    cin>>y>>n;
    int x=0;

    
    for(int i=y;i<4000;i++){
        set<int> s;
        int num=i;
        for(int j=0;j<4;j++){
            s.insert(num%10);
            num/=10;
        }
        if(s.size()==n){
            cout<<i-y<<" "<<setfill('0')<<setw(4)<<i<<endl;
            break;
        }
    }
    return 0;


}





