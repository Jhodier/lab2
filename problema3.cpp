#include <iostream>
#include <string>
using namespace std;


bool compareStrings(string str1, string str2) {
    if (str1.length() != str2.length()) {
        return false;
    } else {
        return str1 == str2;
    }
}

int problema3() {
    string str1 = "hello";
    string str2 = "hello";
    string str3 = "world";

    std::cout << compareStrings(str1, str2) << std::endl; // prints 1
    std::cout << compareStrings(str1, str3) << std::endl; // prints 0

    return 0;
}
