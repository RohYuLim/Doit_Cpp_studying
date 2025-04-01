//  if 문을 활용하여 사용자로부터 입력받은 숫자가 ‘양수’인지 ‘음수’인지를 판별하는 프로그램을 만들어 보세요. (0은 양수로 취급)

#include <iostream>
using namespace std;

int main(){

    int input_number;

    cout << " 정수를 입력 하세요 : ";
    cin >> input_number;

    if(input_number >= 0){
        cout << input_number << "은 양수 입니다." << endl;
    }else{
        cout << input_number << "은 음수 입니다. " << endl;
    }

    return 0;
}