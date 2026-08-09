#include<iostream>
#include<numeric>
using namespace std;

long long gcd(long long a,long long b){
    if(b==0){
        return abs(a);
    }
    return gcd(b,a%b);
}

class Fen{
private:
    long long fm;
    long long fz;
    void simplify(){

        long long g= gcd(fm,fz);
        fz/=g;
        fm/=g;
        if(fm<0){
            fz=-fz;
            fm=-fm;
        }
    }

public:
    Fen(long long n,long long m):fz(n),fm(m){simplify();}
    Fen operator+(const Fen &other){
        Fen xin(0,1);
        long long g=gcd(this->fm,other.fm);
        xin.fm=this->fm/g*other.fm;
        xin.fz=this->fz*(other.fm/g)+(this->fm/g)*other.fz;
        return xin;
    }
    void print(){
        simplify();
        long long z=fz/fm;
        long long xfz=fz-z*fm;
        if(xfz!=0){
            if(z!=0){cout<<z<<" "<<xfz<<"/"<<fm<<endl;}else{
                cout<<xfz<<"/"<<fm<<endl;
            }
            
        }else{
            cout<<z<<endl;
        }
        
    }

};

int main(){
    int N;
    cin>>N;
    long long fz,fm;
    Fen sum(0,1);
    
    char tp='/';
    for(int i=0;i<N;i++){
        cin>>fz>>tp>>fm;
        Fen cur(fz,fm);
        sum=sum+cur;
    }

    sum.print();
    return 0;
}