#include <iostream>

using namespace std;

char* weird_string() { 
   char c[] = "123345";
   return c; 
}

int main() {
    char* ptr = weird_string(); 

    cout << ptr << endl;

    return 0;
}

/*5.cpp: In function 'char* weird_string()':
5.cpp:6:9: warning: address of local variable 'c' returned [-Wreturn-local-addr]
    char c[] = "123345";
         ^
*/
