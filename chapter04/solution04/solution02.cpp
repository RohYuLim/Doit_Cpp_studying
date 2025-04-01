// switch 문을 활용하여 사용자에게 1~7까지의 숫자 중 하나를 입력받아, 숫자에 해당하는 요일을 출력하는 프로그램을 만들어 보세요.

#include <iostream>
using namespace std;

int main(){

    int number;
    cout << " 숫자를 입력해 주세요(1~7) : ";
    cin >> number;

    switch(number){
        case 1:
            cout << " 월요일 입니다. " << endl;
            break;
        case 2:
            cout << " 화요일 입니다. " << endl;
            break;
        case 3:
            cout << " 수요일 입니다. " << endl;
            break;
        case 4:
            cout << " 목요일 입니다. " << endl;
            break;
        case 5:
            cout << " 금요일 입니다. " << endl;
            break;
        case 6:
            cout << " 토요일 입니다. " << endl;
            break;
        case 7:
            cout << " 일요일 입니다. " << endl;
            break;
        default:
            cout << " 숫자를 잘못 입력하였습니다. " << endl;
    }

    return 0;
}