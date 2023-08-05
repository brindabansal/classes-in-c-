//class is a user defined data type..
//fundamental unit of data types..
//objects are variables of type class.

#include<iostream>
using namespace std;

class fruit{
    public:
    string name;
    string color;


};




int main(){
    fruit apple;
    apple.name="apple";
    apple.color="red";
    cout<<apple.name<<" "<<apple.color<<endl;

    return 0;
}