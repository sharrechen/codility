#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> & a) {
    int sum = -1;
    int tmp = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > 0) {
            tmp += a[i];
        } else {
            if (tmp > 0 && tmp > sum) {
                sum = tmp;
            }
            tmp = 0;
        }
    }
    if (tmp > 0 && tmp > sum) sum = tmp;
    return sum;
}

int main(void) {
    string str;
    vector<int> seq;
    while (getline(cin, str)) {
        istringstream ss(str);
        int n;
        while(ss >> n) {
            seq.push_back(n);
        }
        cout << solution(seq) << endl;
        seq.clear();
    }

    return 0;
}
