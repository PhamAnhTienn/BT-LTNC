#include <bits/stdc++.h>  
using namespace std;

int randomLessThanN(int N) {
    return rand() % N;
}

int main() {
    srand(time(0)); 
    int N = 10;
    int randomNumber = randomLessThanN(N);
    cout << randomNumber;
    return 0;
}