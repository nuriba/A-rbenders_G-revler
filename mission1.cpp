#include <iostream>
#define g 9.80665
int main(){
    int t;
    float distance;
    std:: cout << "time:";
    std:: cin >> t;
    distance=g*t*t/2;
    std:: cout<< distance;
    return 0;
}

