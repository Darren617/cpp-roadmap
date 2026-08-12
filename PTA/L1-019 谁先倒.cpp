#include<iostream>
using namespace std;

int main(){
    int A,B,jh,jhua,yh,yhua;
    int h1=0,h2=0;
    cin>>A>>B;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>jh>>jhua>>yh>>yhua;
        if(jh+yh==jhua&&jhua==yhua){
            
            continue;
        }
        if(jh+yh==jhua){
            h1++;
        }
        if(jh+yh==yhua){
            h2++;
        }
        

        if(h1>A) {
            cout<<"A"<<endl<<h2<<endl;
            break;
        }
        else if(h2>B){
            cout<<"B"<<endl<<h1<<endl;
            break;
        }
    }

    
}

