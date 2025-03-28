// new, delete로 배열 형태의 동적 메모리 할당하고 해제하기

#include <iostream>
using namespace std;

int main(){
    
    int *pt_int_array_value = new int[5];   // 동적 메모리 할당(배열)
    
    for(int i = 0; i < 5; i++){
        pt_int_array_value[i] = i;  // 할당된 배열 변수에 0~4까지 순서대로 넣기
    }

    for(int i = 0; i < 5; i++){
        cout << pt_int_array_value[i] << endl;
    }

    delete[] pt_int_array_value;

    return 0;
}