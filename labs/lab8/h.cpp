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
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    for (vector<int>::iterator i = v.begin(); i != v.begin() + k; i++){
        cout << *i << " ";
    }
    return 0;
}