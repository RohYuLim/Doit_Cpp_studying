#include <iostream>
using namespace std;

int main(){

    // 크기가 5인 정수 배열을 동적으로 할당하고, 이를 가리키는 포인터를 선언
    int *array = new int[5];

    // 동적으로 할당한 배열에 1부터 5까지의 값 저장
    for(int i = 0; i < 5; i++){
        array[i] = i + 1;
    }

    // 할당한 배열의 내용을 출력
    for(int i = 0; i < 5; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    // 할당한 메모리 해제
    delete[] array;

    return 0;
}