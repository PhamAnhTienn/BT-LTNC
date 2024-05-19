#include <iostream>
#include <cstring>

char* findSubstringOccurrences(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count = 0;

    for (int i = 0; i <= len1 - len2; ++i) {
        bool found = true;
        for (int j = 0; j < len2; ++j) {
            if (str1[i + j] != str2[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            ++count;
        }
    }
    char* result = new char[20]; 
    sprintf(result, "%d", count);
    return result;
}

int main() {
    const char* main_string = "ababababab";
    const char* sub_string = "aba";
    char* result = findSubstringOccurrences(main_string, sub_string);
    std::cout << "Number of occurrences: " << result << std::endl;
    delete[] result; 
    return 0;
}

