#include <iostream>
#include <vector>

using namespace std;

int main () {
    vector<int> i;
    i.push_back(1);
    i.push_back(2);
    vector <int> j(3,10);
    i = j;
    for (int l = 0; l < i.size(); l++) {
        cout << i[l];
    }
}