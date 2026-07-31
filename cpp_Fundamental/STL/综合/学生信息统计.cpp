#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

enum Major{
    COMPUTER,
    PHYSICS,
};
enum Sex{
    man,
    woman
};

class Student{
private:
    int no;
    string name;
    Sex sex;
    string birth_place;
    Major major;
public:
    Student(int n,string na,Sex s,string bp,Major ma):no(n),name(na),sex(s),birth_place(bp),major(ma){}
    int get_no(){
        return no;
    }
    string get_name(){
        return name;
    }
    int get_sex(){
        return sex;
    }
    Major get_major(){
        return major;
    }
    void display(){                      // ← 无参，输出自己
        cout << "My name is " << name << endl;
    }
    void display(Student& st){
        st.display();
        cout<<endl;
    }
};

Sex StringToSex(const string& s){
    if (s == "man")   return man;
    if (s == "woman") return woman;
    return man; // 默认值
}

Major stringToMajor(const string& s){
    if (s == "COMPUTER")   return COMPUTER;
    if (s == "PHYSICS") return PHYSICS;
    return PHYSICS; // 默认值
}

//按学号排序
bool compare_no(Student &st1,Student &st2){
    return st1.get_no()<st2.get_no();
}

//统计计算机专业人数
bool match_major(Student &st){
    return st.get_major()==COMPUTER;
}

//统计物理专业
bool match_major2(Student &st){
    return st.get_major()==PHYSICS;
}

//通用统计
class MatchMajor{
    Major major;
public:
    MatchMajor(Major m){major=m;}
    bool operator()(Student& st){return st.get_major()==major;}
};




int main(){
    vector<Student> students;
    //把学生信息放入容器
    vector<Student> :: iterator current;
    while(true){
        int no;
        string name,birth_place,sex,major;

        cout<<"请输入学号（输入-1结束）：";
        cin>>no;
        if(no==-1) break; //终止条件

        //输入校验
        if(cin.fail()){
            cout<<"输入无效，请输入数字！"<<endl;
            cin.clear();// 清除失败状态
            cin.ignore(10000,'\n');// 丢弃缓冲区中的错误输入
            continue; // 重新开始本次循环
        }

        cout << "姓名: ";
        cin >> name;
        cout << "性别（man-男, woman-女）: ";
        cin >> sex;
        cout << "籍贯: ";
        cin >> birth_place;
        cout << "专业（COMPUTER-计算机, PHYSICS-物理）: ";
        cin >> major;

        students.push_back(Student(no, name,
            StringToSex(sex),birth_place,stringToMajor(major)));
    }

    sort(students.begin(),students.end(),compare_no);
    cout<<"统计计算机专业人数为："<<endl;
    cout<<count_if(students.begin(),students.end(),match_major)<<endl;
    cout<<count_if(students.begin(),students.end(),MatchMajor(COMPUTER))<<endl;
    cout<<"统计物理专业人数为："<<endl;
    cout<<count_if(students.begin(),students.end(),match_major2);
    cout<<count_if(students.begin(),students.end(),MatchMajor(PHYSICS))<<endl;


}








