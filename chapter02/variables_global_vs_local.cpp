// 전역 변수, 지역 변수 구분하여 접근하기

#include <iostream>
using namespace std;

int value = 1; // 전역 변수

int main(){
    int value = -1;

    cout << value << endl;
    cout << ::value << endl;

    return 0;
}