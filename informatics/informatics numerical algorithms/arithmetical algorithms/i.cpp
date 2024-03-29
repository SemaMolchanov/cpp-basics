#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (a == 0 || b == 0){
        return a + b;
    }
    if (a > b){
        return gcd(a % b, b);
    }
    else{
        return gcd(a, b % a);
    }
}

int lcm(int a, int b){
    return (a * b)/gcd(a, b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << lcm(a, b);
    return 0;
}