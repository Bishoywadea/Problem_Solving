#include <iostream>
using namespace std;


int  main() {
    float sale, price,after;
    cin >> sale >> price;
    after = (price / (1 - (sale / 100)));
    cout  << ceil(after*100)/100;

}
