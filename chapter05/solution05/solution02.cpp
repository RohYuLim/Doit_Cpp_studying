// 예외 처리 생략과 실패 대응

#include <iostream>

void process(int value){

    try{
        // value가 음수 일때 예외 던지기
        if(value < 0){
            throw std::runtime_error("음수 값을 처리할 수 없습니다.");
        }

        // 예외가 발생하지 않으면 value 출력
        std::cout << "value : "<< value << std::endl;
    }

    catch(const std::runtime_error& e){
        // 예외 발생 시 예외 발생! 출력
        std::cout << "예외 발생!"<<std::endl;
    }
    catch(...){
        // 예외 종류에 관계 없이 실패 대응
        std::cout << "처리에 실패했습니다." << std::endl;
    }
    
}

int main(){
    process(10);
    process(-5);
    return 0;
}