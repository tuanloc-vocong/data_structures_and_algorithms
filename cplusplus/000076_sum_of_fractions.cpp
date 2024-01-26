// Title: Sum Of Fractions
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Data Abstraction

/**
 * Cho hai phân số, hãy viết chương trình tính tổng và rút gọn hai phân số đó.
 * 
 * Input:
 * Dòng thứ nhất là thông tin tử số và mẫu số của phân số thứ nhất.
 * Dòng thứ hai là thông tin tử số và mẫu số của phân số thứ hai.
 * Các số trong dữ liệu đều thuộc phạm vi số nguyên dương không quá 1.000.
 * 
 * Output:
 * Một dòng duy nhất là hai số nguyên a và b cách nhau bởi khoảng trắng, với a,b là tử và mẫu của tổng
 * hai phân số từ dữ liệu vào.
 * 
 * Example 1:
 * Input:
 * 1 3
 * 1 3
 * 
 * Output:
 * 2 3
 **/

#include <iostream>  
#include <math.h>  

using namespace std;  
  
struct PhanSo {  
    int nu, de;  
};  
  
PhanSo sumFraction(PhanSo a, PhanSo b) {  
    PhanSo res;  
    res.nu = a.nu * b.de + b.nu * a.de;  
    res.de = a.de * b.de;  
    return res;  
}  
  
int gcd(int a, int b) {  
    if (b == 0) return a;  
    return gcd(b, a % b);   
}  
  
PhanSo reduce(PhanSo f){    
        if(f.nu == 0){    
            f.de = 1;    
            return f;     
        }

        int x = gcd(abs(f.nu), abs(f.de));    
        f.nu = f.nu / x;    
        f.de = f.de / x;  
        return f;  
}    
  
int main () {  
    PhanSo a, b;  
    cin >> a.nu >> a.de;  
    cin >> b.nu >> b.de;  
  
    PhanSo res = sumFraction(a, b);  
    res = reduce(res);   
    cout << res.nu << ' ' << res.de;  
    return 0;  
}  