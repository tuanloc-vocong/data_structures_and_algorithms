// Title: Night At The Museum
// Difficulty: Easy
// Tags:
// Author: tuanloc-vocong
// Time Complexity: O(n)
// Space Complexity: O(1)
// Topic: Dynamic Array & String

/**
 * Grigoriy, giống như tên của một anh hùng bộ phim hài nổi tiếng, đã tìm được công việc làm một nhân viên bảo vệ ban đêm
 * tại bảo tàng. Vào đêm đầu tiên, anh ta nhận được một chiếc máy dập nổi và phải đi kiểm tra toàn bộ khu trưng bày.
 *
 * Máy dập nổi là một thiết bị cho phép người dùng in chữ trên cuộn băng keo. Chữ sẽ được in tuần tự, từng chữ một. Thiết bị
 * gồm có một vòng quay gồm các ký tự tiếng Anh in thường xếp thành vòng tròn trên đó, một con trỏ đứng yên chỉ vào ký tự hiện
 * tại và một nút bấm để in ký tự được chọn. Ở mỗi thao tác, vòng quay ký tự có thể quay một bước theo chiều kim đồng hồ hoặc
 * ngược chiều kim đồng hồ.
 *
 * Ban đầu, con trỏ chỉ vào ký tự 'a'. Những ký tự còn lại được xếp như hình bên dưới:
 *
 * Sau khi Grigorly thêm một đồ vật mới vào kệ triển lãm, anh ta phải in tên của vật phẩm đó lên miếng băng keo và dán lên.
 * Không bắt buộc phải trả vòng quay về vị trí bắt đầu với con trỏ chỉ vào ký tự 'a'.
 *
 * Người anh hùng của chúng ta sợ rằng các vật triển lãm sẽ sống dậy và tấn công anh ta, cho nên anh ấy muốn in tên các đồ vật đó
 * nhanh nhất có thể. Hãy giúp Grigoriy với mỗi chuỗi bất kỳ hãy tìm số lần quay ít nhất cần để in chuỗi đó.
 *
 * Input:
 * Một dòng duy nhất chứa tên của vật triển lãm - một chuỗi không rỗng có độ dài không quá 100 ký tự. Chuỗi được cho chỉ có các
 * ký tự tiếng Anh in thường.
 *
 * Output:
 * In số một số nguyên - số lần quay ít nhất để in tên vật triển lãm được cho ở input.
 *
 * Example 1:
 * Input:
 * ares
 *
 * Output:
 * 34
 *
 * Example 2:
 * Input:
 * zeus
 *
 * Output:
 * 18
 *
 * Example 3:
 * Input:
 * map
 *
 * Output:
 * 35
 **/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string wheel;
    cin >> wheel;
    char pointer = 'a';
    int dist, count = 0;

    for (char &c : wheel)
    {
        dist = abs(pointer - c);
        if (dist < 13)
        {
            count += dist;
        }
        else
        {
            count += 26 - dist;
        }
        pointer = c;
    }

    cout << count;
    return 0;
}