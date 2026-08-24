#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,4,6};
    int size=4;
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"sum="<<sum<<endl;
    return 0;

}