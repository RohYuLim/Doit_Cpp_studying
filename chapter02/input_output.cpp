#include <iostream>

using namespace std; // 네임 스페이스 사용 선언

int main(){

/* 숫자를 2개 입력받아 합을 출력하기 */
#if 0    
    int i, j;
    std::cout << "Enter_num_1: "; // 문자열 출력
    std::cin >> i; //사용자에게 정수를 입력 받아 i에 저장

    std::cout << "Enter_num_2: "; // 문자열 출력
    std::cin >> j;

    std::cout << "num1 + num2 = " << i + j << std::endl; //두수의 합 출력
#endif

    /* using namespace 사용하기 */
    int i, j;

    cout << "Enter num1 : ";
    cin >> i;

    cout << "Enter num2 : ";
    cin >> j;

    cout << "num1 + num2 = " << i+j << endl;
    

    return 0;
}



