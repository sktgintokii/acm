#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <string>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i'; 
}

void print(char* str) {
    int len = strlen(str);
    string result;
    for (int i = 0; i < len; i++) {
        char c = tolower(str[i]);
        if (!isVowel(c)) {
            result += ".";
            result += c;
        }
    }

    printf("%s\n", result.c_str());
}

int main() {
    char str[200];
    
    scanf("%s", str);
    print(str);    
    return 0;
}
