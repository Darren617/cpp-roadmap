#include<cstdlib>
#include<string>
using namespace std;

int main(){
    /** 字符串转带符号整数 */
    int stoi(const string& str,size_t* idx=0,int base=10);// 'i' means  int
    long stol(const string& str,size_t* idx=0,int base=10);//idx：记录转换到字符串的哪个位置
    long long stoll(const string & str,size_t idx=0,int base=10);//base：指定字符串使用的进制

    /** 字符串转无符号整数 */
    unsigned long stoul(const string& str,size_t* idx=0,int base=10);
    unsigned long long stoull(const string& str,size_t* idx=0,int base=10);

    /** 字符串转实数 */
    float stof(const string& str,size_t*idx=0);
    double stod(const string & str,size_t* idx=0);
}




