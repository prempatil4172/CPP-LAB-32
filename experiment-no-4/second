#include <iostream>
using namespace std;
class Time{
    private:
        int hours, minutes;
    public:
    void input(){
        cout << "Enter hours, minutes : ";
        cin >> hours >> minutes;
    }
    void add(Time t1, Time t2){
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;
        if (minutes >= 60){
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }
    void display(){
        cout << "Total Time = "<< hours << " hours "<< minutes << " minutes ";
    }
};
int main()
{
    Time t1, t2,t3;
    cout << "Enter first time:\n";
    t1.input();
    cout << "Enter second time:\n";
    t2.input();
    t3.add(t1, t2);
    t3.display();
    return 0;
}