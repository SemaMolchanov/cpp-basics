#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main(){
    vector<int> v;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int k;
    cin >> k;
    for (int i = 0; i < n; i++){
        if (i != k){
            cout << v[i] << " ";
        }
    }
    return 0;
}