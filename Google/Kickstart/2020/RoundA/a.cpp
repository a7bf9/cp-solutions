#include <iostream>
#include <vector>

using namespace std;

int solve() {
  int N, B;
  cin >> N >> B;
  vector<int> p(N);
  for(int i = 0; i < N; i++) cin >> p[i];

  int ans = 0, cost = 0;
  sort(p.begin(), p.end());
  for(int i = 0; i < p.size(); i++) {
    if(p[i]+cost <= B) {
      ans++;
      cost += p[i];
    } else
      break;
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  for(int i = 1; i <= t; i++) {
    cout << "Case #" << i << ": " << solve() << endl;
  }
}
