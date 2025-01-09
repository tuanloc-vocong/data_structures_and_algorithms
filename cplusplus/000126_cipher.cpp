// Title: Cipher
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Để tránh bị người khác nhìn thấy tin nhắn, Harry đã chuyển đoạn tin nhắn thành một loại mật mã mà chỉ có
 * Harry hiểu được. Cách Hary thực hiện như sau:
 * Đầu tiên, anh ấy tách chuỗi ban đầu ra làm 2 chuỗi, 1 chuỗi toàn các ký tự lẻ, chuỗi còn lại chứa toàn ký tự chẵn.
 * Sau đó, anh ấy tạo một mật mã bằng cách ghép 2 chuỗi lại với nhau sau khi đã đảo ngược chuỗi chứa các ký tự chẵn.
 *
 * Input:
 * Gồm một dòng duy nhất là đoạn tin nhắn của Harry. Đoạn tin nhắn được biểu diễn dưới dạng chuỗi, bao gồm các
 * ký tự Alphabet thường và khoảng trắng. Độ dài chuỗi không quá 100 ký tự.
 *
 * Output:
 * Một dòng duy nhất, in ra mật mã sau khi đã được chuyển đổi theo cách của Harry.
 *
 * Example 1:
 * Input:
 * disinterested
 *
 * Output:
 * dessnreteitid
 *
 * Explanation:
 * Ví dụ 1: Với chuỗi "disinterested", ta có 2 chuỗi được tách ra là: "d_s_n_e_e_t_d" và "_i_i_t_r_s_e_". Ta đảo
 * chuỗi 2 lại thành: "_e_s_r_t_i_i_". Cuối cùng, mật mã ta có được là: "dessnreteitid".
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}