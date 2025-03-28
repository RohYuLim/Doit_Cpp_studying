// 매개변수를 일반 변수로 선언

#include <iostream>
using namespace std;

void swap(int a, int b){
    
    // a와 b swap 하기 전 출력
    cout << "[swap func] before swap, a : " << a << " b : " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    // swap  함수 내 교환 후 a, b 값
    cout << "[swap func] after swap, a : " << a << " b : " << b << endl;
}

int main(){
    
    int a = 5;
    int b = 10;

    // swap 함수 호출 전 a, b 값
    cout << "[main] before a : " << a << " b : "<< b << endl;

    swap(a,b);

    // swap 함수 호출 후 교환 된 a, b 값
    cout << "[main] after a :" << a << " b : "<< b << endl;

    return 0;
}