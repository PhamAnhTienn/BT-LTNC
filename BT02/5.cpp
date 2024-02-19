#include <iostream>
#include <string>

using namespace std;

string one_to_nineteen(int num) {
    switch (num) {
        case 1: return "one";
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
        case 10: return "ten";
        case 11: return "eleven";
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
        default: return "";
    }
}

string tens(int num) {
    switch (num) {
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
        default: return "";
    }
}

string convert_number_to_english(int number) {
    string result;

    if (number >= 100000000) {
        result += one_to_nineteen(number / 100000000) + " hundred ";
        number %= 100000000;
    }

    if (number >= 10000000) {
        result = result + tens(number / 10000000) + " ";
        number %= 10000000;
    }

    if (number >= 1000000) {
        result += one_to_nineteen(number / 1000000) + " million ";
        number %= 1000000;
    }

    if (number >= 100000) {
        result += one_to_nineteen(number / 100000) + " hundred ";
        number %= 100000;
    }

    if (number >= 10000) {
        result = result + tens(number / 10000) + " ";
        number %= 10000;
    }

    if (number >= 1000) {
        result += one_to_nineteen(number / 1000) + " thousand ";
        number %= 1000;
    }

    if (number >= 100) {
        result += one_to_nineteen(number / 100) + " hundred ";
        number %= 100;
    }

    if (number > 0) {
        if (!result.empty()) {
            result += "and ";
        }

        if (number < 20) {
            result += one_to_nineteen(number);
        } else {
            result += tens(number / 10);
            if (number % 10 > 0) {
                result += " ";
                result += one_to_nineteen(number % 10);
            }
        }
    }

    return result;
}

int main() {
    int number;

    cout << "Enter a number between -999999999 and 999999999: ";
    cin >> number;

    if (number < -999999999 || number > 999999999) {
        cout << "Number out of range." << endl;
        return 1;
    }

    cout << "Number in English: " << convert_number_to_english(number) << endl;

    return 0;
}
