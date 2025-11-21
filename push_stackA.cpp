#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int arr[MAX];
    int topA = -1, topB = MAX;
    int item;

    cout << "Enter item to push in Stack A: ";
    cin >> item;

    if (topA + 1 == topB) {
        cout << "Stack Overflow in A\n";
    } else {
        topA++;
        arr[topA] = item;
        cout << "Inserted " << item << " in Stack A\n";
    }
    return 0;
}
