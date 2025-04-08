// 예외 처리 실전 연습 1

#include <iostream>
#include <stdexcept>

using namespace std;

string get_season(int month){
    if(month >= 3 && month <= 5){
        return "봄";
    }else if(month >= 6 && month <= 8){
        return "여름";
    }else if(month >= 9 && month <= 11){
        return "가을";
    }else{
        return "겨울";
    }
}

int main(){
    
    try{
       int month, day;
    
        cout << "월을 입력 하세요 : ";
        cin >> month;

        if(month < 1 || month > 12){
            throw out_of_range("월은 1부터 12까지의 정수 이여야 합니다.");
        }
        
        cout << "일을 입력하세요 : ";
        cin >> day;

        if(day < 1 || day > 31)
            throw out_of_range("일은 1부터 31까지의 정수여야 합니다.");
        
        string season = get_season(month);
        cout << " 입력하신 날짜의 계절은 " << season << "입니다." << endl;
    }

    catch(out_of_range& ex){
        cerr << " 예외 발생 : " << ex.what() << endl;
    }

    return 0;
    
}