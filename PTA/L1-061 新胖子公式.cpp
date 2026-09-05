#include<iostream>
#include<cmath>
using namespace std;
#include<iomanip>

int main(){
    double high,weight;
    cin>>high>>weight;
    double result=high/pow(weight,2);
    cout<<fixed<<setprecision(1)<<result<<endl;;
    if(result>25){
        cout<<"PANG"<<endl;
    }else{
        cout<<"Hai Xing"<<endl;
    }
    return 0;
}