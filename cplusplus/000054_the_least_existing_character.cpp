// Title: The Least Existing Character
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Topic: String

/**
 * Cho N chuỗi, hãy viết chương trình tìm ký tự xuất hiện ít nhất trong các chuỗi, chuỗi ký tự chỉ bao gồm các kí tự
 * từ ‘A’ → ‘Z’ và ‘a’ → ‘z’.
 * 
 * Lưu ý: không phân biệt chữ hoa hay chữ thường.
 * 
 * Input:
 * Dòng đầu tiên là số lượng chuỗi N (1≤N≤1000).
 * N dòng tiếp theo, mỗi dòng là một chuỗi ký tự có độ dài không quá 1000 ký tự.
 * 
 * Output:
 * N dòng, mỗi dòng là một ký tự in hoa của ký tự xuất hiện ít nhất trong chuỗi, nếu nhiều ký tự xuất hiện ít nhất
 * thì xuất ra ký tự có thứ tự từ điển nhỏ nhất.
 * 
 * Lưu ý: Thứ tự từ điển theo chiều tăng dần là từ ‘A’ đến ‘Z’.
 * 
 * Example 1:
 * Input:
 * 3
 * cd
 * Abcdd
 * Bigocoding
 * 
 * Output:
 * C
 * A
 * B
 **/

#include <iostream>
#include <string>

using namespace std;

int pos(char ch){
    if('A' <= ch && ch <= 'Z'){
        return ch - 'A';
    }
    return ch - 'a';
}

char getMinimumOccurringChar(string str){
    int count[26] = {0};
    for(int i = 0; i < str.length(); i++){
        count[pos(str[i])]++;
    }

    int min = 1001;
    char res;

    for(int i = 0; i < 26; i++){
        if(count[i] != 0 && count[i] < min){
            min = count[i];
            res = i + 'A';
        }
    }
    return res;
}

int main(){
    int n;
    string str;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){
        getline(cin, str);
        cout << getMinimumOccurringChar(str) << endl;
    }
    return 0;
}