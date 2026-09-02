#include<iostream>
using namespace std;

const int N =1001;
struct Book{
    int start=-1;
    char c;
    int min=0;//时间差
};

int main(){
    int n;
    cin>>n;
    int i=0,j=0;
    char s=':';
    int dm=0;//当天总借阅时间
    while(i<n){
        int j=0;
        dm=0;
        Book *book=new Book[N];
        int t=1;//id
        
        while(true){
            cin>>t;
            int h,m;
            cin>>book[t].c>>h>>s>>m;
            if(t==0){
                break;
            }
            if(book[t].c=='S'){
                book[t].start=h*60+m;
            }else if(book[t].c=='E'&&book[t].start!=-1){
                book[t].min=h*60+m-book[t].start;
                dm+=book[t].min;
                j++;
            }
            
        }
        int avg;
        if(j!=0){
            avg=(int)(1.0*dm/j+0.5);
        }else{
            avg=0;
        }
        
        cout<<j<<" "<<avg<<endl;
        i++;
        delete []book;
        
    }
    return 0;
}
