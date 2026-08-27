#include<iostream>
using namespace std;
#include<iostream>

int main(){
    string e,ss;
    string buff=" ";
    int t=0;
    while(getline(cin,buff)&&buff !="."){
        
        //cin.ignore();
        t++;
        if(t==2){
            e=buff;
        }else if(t==14){
            ss=buff;
        }
    }
    if(t<2){
        cout<<"Momo... No one is for you ..."<<endl;
    }else if(t>=2&&t<14){
        cout<<e<<" is the only one for you..."<<endl;
    }else if(t>14){
        cout<<e<<" and "<<ss<<" are inviting you to dinner..."<<endl;
    }
    return 0;
}

