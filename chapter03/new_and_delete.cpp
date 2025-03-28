#include <iostream>
using namespace std;

int main(){
    int *pt_int_value = new int;
    
    *pt_int_value = 100; // 동적 메모리 할당
    cout << *pt_int_value << endl;

    delete pt_int_value; // 동적 메모리 해제

    return 0;
}