//電卓を作ろうです　早速作ってみます
#include <studio.h>
using namespace std;

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  else if (op == "-") {
      cout << A - B << endl;
  }
  else if (op == "*") {
      cout << A * B << endl;
  }
  else if (op == "/" && B != 0) {
      cout << A / B <<endl;
  }
  else {
      cout <<"error" << endl;
  }
  return 0;
}

/*
C++の場合はelifではなくelse if になる
覚えておくといいもの
!(条件式)→条件式の結果の反転→条件式が偽
条件式1 && 条件式2→条件式1が真 かつ 条件式2が真→条件式1と条件式2のどちらも真
条件式1 || 条件式2→条件式1が真 または 条件式2が真→条件式1と条件式2の少なくとも片方が真

*/
