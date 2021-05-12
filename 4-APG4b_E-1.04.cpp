//四番目の問題「変数と型」です。プログラムでほぼ毎回使うので、すぐに覚えられると思います
/*問題文
次のプログラムをコピー＆ペーストして、指定した場所にプログラムを追記することで問題を解いて下さい。*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;

  // 以下のコメント/* */を消して追記する
  cout << /* 1年は何秒か */ << endl;
  cout << /* 2年は何秒か */ << endl;
  cout << /* 5年は何秒か */ << endl;
  cout << /* 10年は何秒か */ << endl;
}

/*int型で宣言した変数secondsには「365*24*60*60」という処理が格納されています。このsecondsを使えばいちいち(365*24*60*60)*n(nは年の数)と書かなくても楽に出せて
ミスが少ないということですね*/

//ACになったコード例
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 一年の秒数
  int seconds = 365 * 24 * 60 * 60;

  // 以下のコメント/* */を消して追記する
  cout <<1*seconds<< endl;
  cout <<2*seconds<< endl;
  cout <<5*seconds<< endl;
  cout <<10*seconds<< endl;
}
