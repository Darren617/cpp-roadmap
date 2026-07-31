#include<string>
#include<cctype>
#include<algorithm>
using namespace std;

int main(){
    string str="Hello, World";
    transform(str.begin(),str.end(),str.begin(),[](unsigned char ch){
        return static_cast<char>(toupper(ch));
    });//字符串转大写

    transform(str.begin(),str.end(),str.begin(),[](unsigned char ch){
        return static_cast<char>(tolower(ch));
    });//字符串转小写
    return 0;
}


