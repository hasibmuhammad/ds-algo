#include <bits/stdc++.h>

using namespace std;

void fun(int count) {
    if(count == 5) {
        return;
    }
    cout << count << " ";
    fun(count + 1);
}

int main() {
    fun(1);
    return 0;
}