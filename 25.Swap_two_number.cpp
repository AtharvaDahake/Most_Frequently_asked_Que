#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "Before Swapping: a = " << a << ", b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "After Swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
