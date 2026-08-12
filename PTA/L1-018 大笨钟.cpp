#include<iostream>
using namespace std;
#include<iomanip>

int main(){
    int hh,mm;
    char c=':';
    cin>>hh>>c>>mm;
    if((hh>=0&&hh<=12)||mm>=60||mm<0){
        cout<<"Only "<<setfill('0')<<setw(2)<<hh<<":"<<setw(2)<<mm<<".  Too early to Dang."<<endl;
    }else{
        int l=0;
        l=hh-12;
        if(mm>0){
            l+=1;
        }
        for(int i=0;i<l;i++){
            cout<<"Dang";
        }
        cout<<endl;

    }
    return 0;
}