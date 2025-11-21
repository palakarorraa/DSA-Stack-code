#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int arr[MAX];
    int topA = -1, topB = MAX;
    int item;

    cout << "Enter item to push in Stack B: ";
    cin >> item;

    if (topB - 1 == topA) {
        cout << "Stack Overflow in B\n";
    } else {
        topB--;
        arr[topB] = item;
        cout << "Inserted " << item << " in Stack B\n";
    }
    return 0;
}
