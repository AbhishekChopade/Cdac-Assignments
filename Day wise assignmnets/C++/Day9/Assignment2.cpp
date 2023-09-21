// 2. Implement a Date class with following member functions. Also overload remaining relational operators to compare two dates.
//    Also write a small program to demonstrate the use of Date class and overloaded relational operators.
// class Date {
// 	int day;
// 	int month;
// 	int year;
// public:
// 	Date();
// 	Date(int d, int m, int y);
// 	void Read();
// 	void Write();
// 	bool operator==(Date obj2);
// };
#include<iostream>
using namespace std;
class Date {
	int day;
	int month;
	int year;
public:
	Date(){};
	Date(int d, int m, int y):day(d),month(m),year(y){
        day = d;
        month = m;
        year = y;
    };
	void Read(){
        //cout<<"Enter day,month ands year="<<endl;
        cin>>day>>month>>year;

    };
	void Write()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    };
	bool operator==(Date obj2){
        if(day==obj2.day && month==obj2.month && year==obj2.year){
            return true;
        }
        else
            return false;
    };
};

int main()
{
    Date obj1;
    Date obj2;
    cout<<"Enter day,month and year of obj1 ="<<endl;
    obj1.Read();
    cout<<"Enter day,month and year of obj2 ="<<endl;
    obj2.Read();
    cout<<"Date of obj1 = ";
    obj1.Write();
    cout<<"Date of obj1 = ";
    obj2.Write();
    if(obj1==obj2){
        cout<<"Dates of obj1 and obj2 are same";
    }
    else
        cout<<"Dates are not same";

    


}