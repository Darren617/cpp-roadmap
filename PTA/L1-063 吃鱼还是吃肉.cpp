#include<iostream>
using namespace std;

int main(){
    int id,high,weight,n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>id>>high>>weight;
        if(id==1){
            if(high>130){
                cout<<"ni li hai!"<<" ";
                if(weight>27){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<27){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==27){
                    cout<<"wan mei!"<<endl;
                }
            }else if(high<130){
                cout<<"duo chi yu!"<<" ";
                if(weight>27){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<27){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==27){
                    cout<<"wan mei!"<<endl;
                }
            }else if(high==130){
                cout<<"wan mei!"<<" ";
                if(weight>27){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<27){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==27){
                    cout<<"wan mei!"<<endl;
                }
            }
        }else{
            if(high>129){
                cout<<"ni li hai!"<<" ";
                if(weight>25){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<25){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==25){
                    cout<<"wan mei!"<<endl;
                }
            }else if(high<129){
                cout<<"duo chi yu!"<<" ";
                if(weight>25){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<25){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==25){
                    cout<<"wan mei!"<<endl;
                }
            }else if(high==129){
                cout<<"wan mei!"<<" ";
                if(weight>25){
                    cout<<"shao chi rou!"<<endl;
                }else if(weight<25){
                    cout<<"duo chi rou!"<<endl;
                }else if(weight==25){
                    cout<<"wan mei!"<<endl;
                }
            }
        }
    }
    return 0;
}