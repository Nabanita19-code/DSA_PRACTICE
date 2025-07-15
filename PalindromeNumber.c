#include<stdbool.h>
bool isPalindrome(int x) {
    if (x < 0) return false;
    int original = x;
    long N = 0;
    while (x !=0) {
        int digit = x%10;
        N = N*10 + digit;
        x/=10;
    }
        return original == N;
    
}
