#include <iostream>

using namespace std;

int main(){
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++){
        cin >> a[i];
        if (a[i] % 2 == 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}