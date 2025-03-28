// 지역 범위가 적용된 변수

#include <iostream>
using namespace std;

void print(){
    int value = 10;
    cout << "print 함수 내부에서의 지역 변수 value : " << value << endl;
}

int main(){
    int value = 5;
    cout << "main 함수 내부에서의 지역 변수 value : " << value << endl;

    // pirnt() 호출
    print();

    cout << "다시 main 함수 내부에서의 지역 변수 value : "<< value << endl;

    return 0;
}