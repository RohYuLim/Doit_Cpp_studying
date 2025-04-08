// 처리 되지 않은 모든 예외 받기

#include <iostream>
using namespace std;

int main(){
    try{
        int input;
        cout << " 정수 중 하나를 입력하세요 : ";
        cin >> input;

        if(input > 0){
            cout << " throw 1 " << endl;
            throw 1;    // 예외 1 발생(정수 형식 예외)
            cout << " after throw 1 " << endl;
        }   // 입력받은 숫자가 양수이면
        
        if(input < 0){  // 입력 받은 숫자가 음수 이면
            cout << "throw -1.0f" << endl;
            throw -1.0f;    // 예외 -0.1f 발생(부동 소수점 형식 예외)
            cout << "after throw -1.0f" << endl;
        }

        if(input == 0){
            cout << "throw Z" << endl;
            throw 'Z';
            cout << "after throw Z" << endl;
        }
    }
    
    catch (int a)
    {
        cout << " catch " << a << endl;
    }

    catch (...){
        cout << "catch all" << endl;
    }

    return 0;
}