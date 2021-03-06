#include <iostream>
using namespace std;

int multiple_of(int x, int y) {
  return (x % y) == 0;
}

int main() {
  int answer = 0;

  for(int i = 1; i < 1000; i++) {
    if(multiple_of(i, 3) || multiple_of(i, 5)) answer += i;
  }
  cout << answer << endl;

  return 0;
}
