#include<iostream>
#include<string>
using namespace std;
class student{
    private:
      string name;
      int roll no;
      float mark-s1;
      float mark-s2;
      float mark-s3;
      float total-marks;   

    public:
    void get_data() {
        cout<<"student name:"<<endl;
        cin>>name;
        cout<<"Roll no:"<<endl;
        cin>> Roll no;
        cout<<"subject-1"<<"subject-2"<<"subject-3"<<endl;
        cin>>mark-s1>>mark-s2>>mark-s3;

    }

    void cal_total(){
        s_total=mark-s1+mark-s2+mark-s3;
    }
    void put_data(){
        cout<<"student name:"<<name<<endl;
        cout<<"Roll no:"<<Roll no<<endl;
        cout<<"subject-1"<<mark-s1<<endl;
        cout<<"subject-2"<<mark-s2<<endl;
        cout<<"subject-3"<<mark-s3<<endl;
        cout<<"total marks:"<<s_total<<endl;
    }
};

int main(){
    student s1,s2;
    cout<<"Enter details of student-1:"<<endl;
    s1.get_data();
    s1.cal_total();

    cout<<"Enter details of student-2:"<<endl;
    s2.get_data();
    s2.cal_total();

    s1.put_data();
    s2.put_data();
}