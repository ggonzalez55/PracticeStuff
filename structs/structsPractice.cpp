#include <iostream>
#include <string>
using namespace std;

struct Cars
{
    string cars; 
    int number;

};

void set(Cars& Struct, string name, int num); 

int main (){

    Cars fast;
    string names;
    int age;

    fast.cars = "Honda";
    fast.number = 2001;
    cout << fast.cars<< ": " << fast.number << endl;

    cout <<"Enter car: "<< names;
    cin >> names;
    cout <<"Enter age: " << endl;
    cin >> age;
    set(fast, names, age ); 

    cout << fast.cars << ": "<<fast.number<< endl;


    return 0;
}

void set(Cars& Struct, string name, int num){

    Struct.cars = name;
    Struct.number = num;


}