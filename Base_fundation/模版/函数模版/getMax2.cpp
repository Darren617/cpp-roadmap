#include<iostream>
using namespace std;

template<class T>
T getMax(T a,T b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

class Student{
    long id;
    int score1,score2,score3;
public:
    Student(long i,int sc1,int sc2,int sc3){
        id=i;
        score1=sc1;
        score2=sc2;
        score3=sc3;
    }
    bool operator>(const Student &s){
        if((this->score1+this->score2+this->score3)>(s.score1+s.score2+s.score3)){
            return true;
        }
        else{
            return false;
        }
    }
    friend ostream & operator<<(ostream& output,const Student &st);
};

ostream & operator<<(ostream& output,const Student &st){
    output<<"学号："<<st.id<<endl;
    output<<"三门课的分数："<<st.score1<<"\t"<<st.score2<<"\t"<<st.score3<<"\t"<<endl;
    return output;

   


}

int main(){
    cout<<getMax(6,7)<<endl;
    cout<<getMax('u','p')<<endl;
    cout<<getMax(7.8,9.9)<<endl;
    cout<<getMax("grdgdgrdgrgw","feetgrr")<<endl;

    Student s1(111,24,53,66),s2(222,32,87,98);
    cout<<getMax(s1,s2);
    return 0;
}
