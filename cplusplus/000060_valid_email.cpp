// Title: Valid email
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * Bobo hiện tại đang làm nhân viên marketing cho công ty PaPa, nhân dịp cuối năm công ty có tổ chức sự kiện
 * tặng quà tri ân cho khách hàng nhưng mỗi khách hàng muốn nhận được quà phải điền địa chỉ email của mình vào
 * phiếu thông tin. Tuy nhiên có một số khách hàng muốn nhận được nhiều quà hơn nên đã ghi “khống” địa chỉ
 * email nhiều lần. Công ty giao nhiệm vụ cho Bobo hãy lọc ra các địa chỉ email không hợp lệ, tuy nhiên có tới
 * hơn 1000 phiếu thông tin để lọc. Nghe nói các học viên Big-O rất giỏi về thuật toán nên Bobo nhờ các bạn học
 * viên hãy viết giùm cho Bobo một chương trình có thể lọc ra các email không hợp lệ.
 *
 * Một email hợp lệ là:
 * Gồm có hai phần Local Part và Domain Name ngăn cách nhau bởi một ký tự ‘@’ duy nhất: <Local Part>@<Domain Name>.
 * Phần Local Part gồm các ký tự ‘A’ – ‘Z’, ‘a’ – ‘z’, ‘0’ – ‘9’ và ký tự đặc biệt: ‘.’ và ‘_’.
 * Domain Name gồm các ký tự ‘A’ – ‘Z’, ‘a’ – ‘z’ và ‘.’.
 * Domain Name phải có ít nhất một ký tự ‘.’.
 * Domain Name không được có hai ký tự ‘.’ liên tiếp.
 * Local Part và Domain Name không được rỗng.
 *
 * Lưu ý: email đầu vào để kiểm tra có thể chứa khoảng trắng (space).
 *
 * Input:
 * Gồm một dòng duy nhất là chuỗi s (3≤∣s∣≤1000) – địa chỉ email cần kiểm tra tính hợp lệ.
 *
 * Output:
 * Nếu chuỗi s​ là một email hợp lệ in ra “VALID”, ngược lại in ra “INVALID”.
 *
 * Example 1:
 * Input:
 * bigo_coding@gmail.com
 *
 * Output:
 * VALID
 *
 * Example 2:
 * Input:
 * 4melove_......_@love.forever
 *
 * Output:
 * VALID
 *
 * Example 3:
 * Input:
 * 75_HuynhTinhCua@abcd..xyz
 *
 * Output:
 * INVALID
 *
 * Example 4:
 * Input:
 * _i_LOVE_you@somuch
 *
 * Output:
 * INVALID
 *
 * Example 5:
 * Input:
 * ____....._____@special@day
 *
 * Output:
 * INVALID
 *
 * Explanation:
 * Trường hợp thứ ba chuỗi 75_HuynhTinhCua@abcd..xyz INVALID bởi vì phần Domain Name có hai ký tự ‘.’ liên tiếp nhau (luật 5).
 * Trường hợp thứ tư chuỗi _i_LOVE_you@somuch INVALID bởi vì phần Domain Name không có ký tự ‘.’ (luật 4).
 * Trường hợp thứ năm chuỗi ____....._____@special@day có 2 ký tự ‘@’ trong cùng một địa chỉ email (luật 1).
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}