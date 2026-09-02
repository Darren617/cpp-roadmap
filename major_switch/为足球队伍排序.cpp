#include<iostream>
using namespace std;
struct ZQ{
    string name;
    int score;
};

int check(string a,string b){
    int minsize=a.size()>b.size()?b.size():a.size();
    int flag;
    for(int i=0;i<minsize;i++){
        if(a[i]<b[i]){
            return 1;
        }else if(a[i]>b[i]){
            return 2;
        }
    }
}


int main(){
    int n;
    cin>>n;
    struct ZQ zq[n+1];
    for(int i=0;i<n;i++){
        cin>>zq[i].name>>zq[i].score;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(zq[j].score<zq[j+1].score){
                struct ZQ temp;
                temp.score=zq[j].score;
                temp.name=zq[j].name;
                zq[j].score=zq[j+1].score;
                zq[j].name=zq[j+1].name;

                zq[j+1].score=temp.score;
                zq[j+1].name=temp.name;
            }else if(zq[j].score==zq[j+1].score){
                if(check(zq[j].name,zq[j+1].name)==2){
                    struct ZQ temp;
                    temp.score=zq[j].score;
                    temp.name=zq[j].name;
                    zq[j].score=zq[j+1].score;
                    zq[j].name=zq[j+1].name;

                    zq[j+1].score=temp.score;
                    zq[j+1].name=temp.name;
                }
            }
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<zq[i].name<<" "<<zq[i].score<<endl;
    }

    //字典序比较：
    cout<<endl;
    cout<<"测试：："<<endl;
    string a = "Bayern";
    string b = "ParisSG";

    cout << (a < b);
}

