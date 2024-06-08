#include<iostream>
using namespace std;

int main() {
    char c;
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c >= 'a' && c <= 'z') {
            cout << 0;
        }
        else {
            cout << 1; 
        }
    }
    else {
        cout << -1;
    }
    return 0;
}
