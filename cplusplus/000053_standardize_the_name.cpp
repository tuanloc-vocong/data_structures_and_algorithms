// Title: Standardize The Name
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(n)
// Topic:

/**
 * Trước khi giải Ngoại hạng anh (Premier league) diễn ra, thì ban tổ chức nhận được danh sách N cầu thủ được đăng ký
 * thi đấu nhưng họ tên của các cầu thủ chưa được chuẩn hóa. Vì vậy ban tổ chức nhờ bạn viết một chương trình chuẩn hóa
 * lại họ tên của cầu thủ sao cho viết hoa ký tự đầu của mỗi từ và viết thường các ký tự còn lại.
 * 
 * Input:
 * Dòng đầu tiên là số nguyên dương N (N≤100) với N là số cầu thủ được đăng ký thi đấu.
 * 
 * N dòng tiếp theo, mỗi dòng là một chuỗi ký tự họ và tên các từ cách nhau bằng một khoảng trắng, bao gồm các ký tự từ
 * ‘A’ đến ‘Z’, ‘a’ đến ‘z’ và khoảng trắng, độ dài của chuỗi không quá 100 ký tự.
 * 
 * Output:
 * N dòng, mỗi dòng là chuỗi họ và tên sau khi đã chuyển theo đúng định dạng mong muốn.
 * 
 * Example 1:
 * Input:
 * 3
 * WiLiaN borGes Da SiLva
 * kevin de bruyne
 * pauL Pogba
 * 
 * Output:
 * Wilian Borges Da Silva
 * Kevin De Bruyne
 * Paul Pogba
 **/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string str;

    for(int i = 0; i < n; i++){
        getline(cin, str);
        string res = "";

        for(int j = 0; j < str.length(); j++){
            if(j == 0 || str[j-1] == ' '){
                res += toupper(str[j]);
            }else{
                res += tolower(str[j]);
            }
        }
        
        cout << res << endl;
    }
    return 0;
}