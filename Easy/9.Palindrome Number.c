// Given an integer x, return true if x is palindrome integer.
// An integer is a palindrome when it reads the same backward as forward.

bool isPalindrome(long x){

    if (x >= 0 && (x % 10 != 0 || x == 0)) {

        long reverseNum = 0;
        long num = x;

        while (reverseNum < num) {

            reverseNum = reverseNum * 10 + x % 10;
            x /= 10;

        }

        if (reverseNum == num)
            return true;

    }

    return false;

}
