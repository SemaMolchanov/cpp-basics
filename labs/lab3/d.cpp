#include <iostream>

using namespace std;

int main(){
    int arraySize;
    cin >> arraySize;
    int a[arraySize];
    for (int i = 0; i < arraySize; i++){
        cin >> a[i];
    }
    int max = a[0];
    int maxPosition = 0;
    for (int i = 0; i < arraySize; i++){
        if (a[i] >= max){
            max = a[i];
            maxPosition = i+1;
        }
    }
    cout << maxPosition;
    return 0;
}