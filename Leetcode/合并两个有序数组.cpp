#include<iostream>
using namespace std;
#include<vector>
#include<utility>

//方法一：先拼接，再选择排序
int main(){
    vector<int> nums1={1,2,3,0,0,0};
    int m=3,n=3;
    vector<int> nums2={2,5,6};
    int j=0;
    for(int i=m;i<m+n;i++){
        nums1[i]=nums2[j];
        j++;
    }
    //打印拼接之后的数组.
    cout<<"[";
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i];
        if(i!=nums1.size()-1){
            cout<<",";
        }

    }
    cout<<"]";

    cout<<endl;
    //选择排序(从后面待排序的元素中选出最小的)

    for(int i=0;i<nums1.size();i++){
        int j=i;//记录现在位置
        for(int k=i+1;k<nums1.size();k++){
            if(nums1[j]>nums1[k]){
                j=k;
            }
        }
        swap(nums1[i],nums1[j]);
    }

    cout<<"排序后："<<endl;
    cout<<"[";
    for(int i=0;i<nums1.size();i++){
        cout<<nums1[i];
        if(i!=nums1.size()-1){
            cout<<",";
        }

    }
    cout<<"]";




    return 0;

    
}


