
#include <iostream>
#include <cmath>
using namespace std;


void update(int *a, int *b) {
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    cin >> a >> b;

    update(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
