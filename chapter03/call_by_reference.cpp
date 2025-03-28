// 매개변수를 레퍼런스 변수로 선언

#include <iostream>
using namespace std;

void swap(int &ref_a, int &ref_b){
    // 교환 전 a, b 값
    cout << "[swap func] before swap, ref_a : " << ref_a << " ref_b : " << ref_b << endl;

    int temp = ref_a;
    ref_a = ref_b;
    ref_b = temp;

    // 교환 후 a, b 값
    cout << "[swap func] after swap, ref_a : " << ref_a << " ref_b : " << ref_b << endl; 
}

int main(){

    int a = 5;
    int b = 10;

    // 교환 전 a, b 값
    cout << "[main] before swap, a : " << a << " b : " << b << endl;

    swap(a,b);

    // 교환 후 a, b 값
    cout << "[main] after swap, a : " << a << " b : " << b << endl;

    return 0;
}