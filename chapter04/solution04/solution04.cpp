// for 반복문을 활용하여 사용자에게 정수를 입력받고, 해당 정수가 포함된 구구단을 출력하는 프로그램을 만들어 보세요. 사용자는 1~9까지 정수만 입력하도록 제한합니다.

#include <iostream>
using namespace std;

int main(){
    int number;
    
    while(true){
        cout << " 정수를 입력해주세요 : ";
        cin >> number;

        if(number >= 1 && number <= 9){
            break;
        }
        cout << " 유효하지 않는 숫자 입니다. 다시 입력해 주세요 " << endl;
    }

    for(int i = 1; i <= 9; i++){
        cout << number << " * " << i << " = " << number*i << endl;
    }

    return 0;
}