using namespace std;

#include <iostream>
int MPG(int milesPar, int gallonsPar);

int main () {

    int miles;
    int gallons;
    int mpg;
    cout << "Enter an ammount of miles: ";
    cin >> miles;
    cout << "Enter gallons ";
    cin >> gallons;

    mpg = MPG(miles, gallons);
    cout << "Miles per gallon: " << mpg << endl;
    return 0;
}

int MPG(int milesPar, int gallonsPar) {
    int ans;

    ans = milesPar/gallonsPar;
    return (ans);    
}