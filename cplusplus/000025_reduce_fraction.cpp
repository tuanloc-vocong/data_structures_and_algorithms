// Title: Reduce Fraction
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(log(min(a,b)))
// Space Complexity: O(1)
// Topic:

/**
 * Cho phân số a/b với a và b là hai số nguyên dương. Hãy rút gọn phân số đã cho.
 * 
 * Phân số c/d gọi là phân số rút gọn của a/b khi:
 * c=a/GCD(a,b)
 * d=b/GCD(a,b)
 * 
 * Input:
 * Gồm một dòng duy nhất chứa 2 số nguyên dương a, b cách nhau bởi một khoảng trắng (a,b≤10000).
 * 
 * Output:
 * In ra trên một dòng duy nhất hai số c và d là tử và mẫu của phân số tối giản, cách nhau bởi một khoảng trắng.
 *  
 * Example 1:
 * Input:
 * 2 4
 * 
 * Output:
 * 1 2
 **/

#include <iostream>

using namespace std;

int gcd(int x, int y){
    int r;
    while(y != 0){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}

int main(){
    int a, b, c, d;
    cin >> a >> b;

    c = a / gcd(a, b);
    d = b / gcd(a, b);
    
    cout << c << " " << d;
    return 0;
}