#include<iostream>
using namespace std;


struct Stu{
    int id;
    string name;
    bool flag;
};

int main(){
    int n;
    cin>>n;
    string name;
    int id;
    struct Stu stu[n];
    //录入
    for(int i=0;i<n;i++){
        bool flag=false;
        cin>>stu[i].id;
        cin>>stu[i].name;
        stu[i].flag=false;

    }
    for(int i=0;i<n/2;i++){

        for(int k=n-1;k>i;k--){
            if(stu[i].id!=stu[k].id && stu[k].flag==false){
                cout<<stu[i].name<<" "<<stu[k].name<<endl;
                stu[k].flag=true;
                stu[i].flag=true;
                break;
            }
            
        }
        

    }
    return 0;
}






