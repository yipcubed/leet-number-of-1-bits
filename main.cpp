#include <iostream>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <queue>
#include <climits>

using namespace std;

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto x = [](){ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();

class Solution {
public:
    int hammingWeight(uint32_t n) {
      const static uint32_t one = 1;
      int total{0};
      for (int i = 0; i < 32; ++i) {
        if ((n & one) == one)
          ++total;
        n >>= 1;
      }
      return total;
    }
};

void test1() {
  Solution S;
  uint32_t x1 = 11;
  cout << "3? " << S.hammingWeight(x1) << endl;
  cout << "0? " << S.hammingWeight(0) << endl;
  cout << "1? " << S.hammingWeight(16) << endl;
  cout << "2? " << S.hammingWeight(24) << endl;
  cout << "3? " << S.hammingWeight(25) << endl;

}

void test2() {
  Solution S;
}

void test3() {
  Solution S;
}

int main() {
  test1();
  test2();
  test3();
  cout << "Done!" << endl;
  
  return 0;
}
