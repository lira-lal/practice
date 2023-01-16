#include <iostream>
#include <iomanip>
using namespace std;

int a = 1;
//소수를 더하는 함수
double add_double(double b) {
    b = b + a; //인자와 전역변수인 int a를 더한다.
    return b;
}
// 함수에 0.3을 넣어 소수값을 출력
int main() {

    double b = add_double(0.3);
    cout << (double) b << endl;

    return 0;
}