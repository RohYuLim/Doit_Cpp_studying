// 구조체 활용

#include <iostream>
using namespace std;

struct Monster {
    string name;    // 이름
    int hp;         // 체력
    int attack;     // 공격
    int defense;    // 방어력
    int speed;      // 속도
};

// 몬스터 정보 출력 함수
void monster_print(Monster monster){
    cout << " 몬스터 이름 : " << monster.name << endl;
    cout << " " << monster.name << " " << "체력  : " << monster.hp << endl;
    cout << " 공격력 : " << monster.attack << endl;
    cout << " 방어력 : " << monster.defense << endl;
    cout << " 속도 : " << monster.speed << endl;
}

int main(){
    
    Monster pmonster = {"펭수", 100, 100, 100, 300};

    monster_print(pmonster);

    return 0;
   
}