#include <iostream>
using namespace std;

int safeDivide(int a, int b) {
    try {
        if (b == 0) throw "Divide by zero";
        return a / b;
    } catch (const char* a) {
        return -1; // trả về mã lỗi
    }
}

string getMessage(bool fail) {
    try {
        if (fail) throw runtime_error("Failure!");
        return "Success!";
    } catch (const exception &e) {
        return string("Caught error: ") + e.what();
    }
}

int main() {

    cout << safeDivide(5, 0);
    cout << getMessage(true);
    return 0;
}