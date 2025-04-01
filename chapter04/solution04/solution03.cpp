// while 반복문을 활용하여 1~10까지 숫자 중 짝수만 출력하는 프로그램을 만들어 보세요.

#include <iostream>
using namespace std;

int main(){
    
    int number = 1;

    while(number <= 10){
        if(number % 2 == 0){
            cout << number << endl;
        }
        number++;
    }
    cout << endl;

    return 0;
}