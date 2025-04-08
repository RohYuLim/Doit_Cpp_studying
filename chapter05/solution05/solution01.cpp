// try, catch, throw문 이해하기

#include <iostream>

int main(){
    try{
        int divisor = 0;
        // 0으로 나누려는 경우 예외 발생
        if(divisor == 0){
            throw std::runtime_error("0으로 나눌 수 없습니다!");
        }

        int result = 10 / divisor;
        std::cout << "결과 : " << result << std::endl;
    }

    catch(const std::runtime_error& e){
        std::cout << "예외 발생 : "<<e.what() << std::endl;
    }

    return 0;
}