// 방문하는 손님 수 만큼만 빵 만들기

#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int customer_num = 0;

    cout << "오늘 방문 손님 : ";
    cin >> customer_num;    // 손님 수 입력

    string *bread = new string[customer_num];   // 손님 수 만큼 string 배열 생성

    for(int i = 0; i < customer_num; i++){
        bread[i] = "빵 : " + to_string(i);  // to_string: 숫자를 문자열로 변환하는 함수
    }

    cout << endl << " == 생산 된 빵 == " << endl;

    for(int i = 0; i < customer_num; i++){
        cout << *(bread + i) << endl;
    }

    delete[] bread; // string 배열 삭제

    return 0;
}