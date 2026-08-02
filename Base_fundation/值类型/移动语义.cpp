#include<iostream>
using namespace std;

class BigMemoryPool{
private:
    char *pool_;
public:
BigMemoryPool(BigMemoryPool&& other){//窃取临时对象的资源而不是复制它
    pool_=other.pool_;
    other.pool_ = nullptr;
}
};

