#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int arr[MAX];
    int topA = -1, topB = MAX - 1;

    arr[topB] = 100; // example pre-filled
    
    if (topB == MAX) {
        cout << "Stack Underflow in B\n";
    } else {
        cout << "Deleted " << arr[topB] << " from Stack B\n";
        topB++;
    }
    return 0;
}
