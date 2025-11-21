#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int arr[MAX] = {10, 20, 30}; // example pre-filled data
    int topA = 2, topB = MAX;

    if (topA == -1) {
        cout << "Stack Underflow in A\n";
    } else {
        cout << "Deleted " << arr[topA] << " from Stack A\n";
        topA--;
    }
    return 0;
}
