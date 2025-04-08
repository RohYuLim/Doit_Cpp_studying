// 어설션을 이용한 예외처리
#include <iostream>
#include <cassert>

void divide(int a, int b) {
  // b가 0인 경우 어설션을 이용하여 예외 처리
  assert(b != 0);

  int result = a / b;
  std::cout << "결과: " << result << std::endl;
}

int main() {
  divide(10, 2); // 결과: 5 출력
  divide(5, 0); // 프로그램 종료, "b는 0이 될 수 없습니다!" 메시지 출력
  return 0;
}