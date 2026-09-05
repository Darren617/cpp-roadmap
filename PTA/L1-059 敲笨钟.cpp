#include<iostream>
using namespace std;
#include<algorithm>
#include<string>
//字符串截断
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);

        int dh=find(s.begin(),s.end(),',')-s.begin();//或size_t dh = s.find(',');
        int jh=find(s.begin(),s.end(),'.')-s.begin();
        if(dh==s.size()||jh==s.size()){
             cout<<"Skipped\n";
             continue;
        }
        if(dh>=3&&jh>=3&&s.substr(dh-3,3)=="ong"&&s.substr(jh-3,3)=="ong"){
            int size=3;
            int s_size=s.size();
            int i=s_size;
            while(size>0&&i>=0){
                if(s[i]==' '){
                    size--;
                }
                i--;
            }
            s.replace(i+2,s_size-i+2,"qiao ben zhong.");
            cout<<s<<endl;
        }else{
            cout<<"Skipped\n";
        }
    }
}