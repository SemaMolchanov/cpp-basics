#include <iostream>

using namespace std;

int main(){
    int a, b, c, max;
    cin >> a >> b >> c;
    if (a > b && a > c){
        max = a;
    }
    else if (b > a && b > c){
        max = b;
    }
    else if (c > a && c > b){
        max = c;
    }
    cout << max;
    return 0;
}