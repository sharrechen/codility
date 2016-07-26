#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// max_sum(a[t] + a[v] - t + v)
int solution(vector<int> & a) {
    int t_max = a[0];
    int v_max = a[0];
    for (int i = 1; i < a.size(); ++i) {
        t_max = max(a[i] - i, t_max);
        v_max = max(a[i] + i, v_max);
    }
    return t_max + v_max;
}
