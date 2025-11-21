#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

void moveDisk(stack<int> &src, stack<int> &dest, char s, char d){
    if(src.empty()){
        src.push(dest.top());
        cout << "Move disk " << dest.top() << " from " << d << " to " << s << endl;
        dest.pop();
    }
    else if(dest.empty()){
        dest.push(src.top());
        cout << "Move disk " << src.top() << " from " << s << " to " << d << endl;
        src.pop();
    }
    else if(src.top() > dest.top()){
        src.push(dest.top());
        cout << "Move disk " << dest.top() << " from " << d << " to " << s << endl;
        dest.pop();
    }
    else{
        dest.push(src.top());
        cout << "Move disk " << src.top() << " from " << s << " to " << d << endl;
        src.pop();
    }
}

int main(){
    int n;
    cout << "Enter number of disks: ";
    cin >> n;
    stack<int> A, B, C;
    for (int i = n; i >= 1; i--)
        A.push(i);
    char s = 'A', d = 'C', a = 'B';
    if (n % 2 == 0) 
        swap(d, a);
    int total_moves = pow(2, n) - 1;
    for (int i = 1; i <= total_moves; i++){
        if (i % 3 == 1)
            moveDisk(A, C, s, d);
        else if (i % 3 == 2)
            moveDisk(A, B, s, a);
        else
            moveDisk(B, C, a, d);
    }
    return 0;
}