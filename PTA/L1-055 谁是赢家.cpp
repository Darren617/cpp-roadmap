#include<iostream>
using namespace std;

int main(){
    int ag,bg;//a,b分别得到的观众票数
    int ra=0,rb=0;//a,b总票数
    int pw[2]={0};//0:a,1:b
    cin>>ag>>bg;
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        pw[t]++;
    }

    if(ag>bg){
        if(pw[0]>=1){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]==3){
            cout<<"The winner is b: "<<bg<<" + "<<pw[1]<<endl;
        }
        
    }else if(ag<bg){
        if(pw[0]==3){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]>=1){
                cout<<"The winner is b: "<<bg<<" + "<<pw[1]<<endl;
        }
            
        }
    
    return 0;

}

#include<iostream>
using namespace std;

int main(){
    int ag,bg;//a,b分别得到的观众票数
    int pw[2]={0};//0:a,1:b
    cin>>ag>>bg;
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        pw[t]++;
    }

    if(ag>bg){
        if(pw[0]>=1){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]==3){
            cout<<"The winner is a: "<<bg<<" + "<<pw[1]<<endl;
        }
        
    }else if(ag<bg){
        if(pw[0]==3){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]>=1){
                cout<<"The winner is b: "<<bg<<" + "<<pw[1]<<endl;
        }
            
        }
    
    return 0;

}



#include<iostream>
using namespace std;

int main(){
    int ag,bg;//a,b分别得到的观众票数
    int pw[2]={0};//0:a,1:b
    cin>>ag>>bg;
    for(int i=0;i<3;i++){
        int t;
        cin>>t;
        pw[t]++;
    }

    if(ag>bg){
        if(pw[0]>=1){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]==3){
            cout<<"The winner is a: "<<bg<<" + "<<pw[1]<<endl;
        }
        
    }else if(ag<bg){
        if(pw[0]==3){
            cout<<"The winner is a: "<<ag<<" + "<<pw[0]<<endl;
        }else if(pw[1]>=1){
                cout<<"The winner is b: "<<bg<<" + "<<pw[1]<<endl;
        }
            
        }
    
    return 0;

}


