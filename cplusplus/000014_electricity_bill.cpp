// Title: Electricity bill
// Source: Big-O
// Difficulty:
// Time Complexity:
// Topic:

/**
 * "Ding!!! Dong!!! Ding!!! Dong!!!" - chuông cửa nhà bạn lại vang lên không ngừng vào ngày này mỗi tháng vì nhân viên
 * thu tiền điện lại đến tìm bạn. Bạn được xem hóa đơn tiền điện mình dùng trong tháng trước nhưng băn khoăn không biết
 * rằng con số này có được tính chính xác theo quy định hay không.
 *
 * Bạn biết được quy định về giá bán điện của Bộ Công Thương như sau:
 *
 * Bậc 	Giá bán lẻ điện sinh hoạt bậc thang 	Giá (VND/kWh)
 * 1 	Cho kWh từ 0 đến 50 	                1,484
 * 2 	Cho kWh từ 51 đến 100 	                1,533
 * 3 	Cho kWh từ 101 đến 200 	                1,786
 * 4 	Cho kWh từ 201 đến 300 	                2,242
 * 5 	Cho kWh từ 301 đến 400 	                2,503
 * 6 	Cho kWh từ 401 trở lên 	                2,587
 *
 * Với chỉ số điện tháng trước và tháng này ghi trên hóa đơn, bạn hãy tự tính lại số tiền điện phải trả để so sánh kết quả.
 *
 * Lưu ý: tiền phải trả == tiền điện sử dụng + thuế VAT (10% tiền điện). Kết quả chỉ lấy phần nguyên.
 *
 * Input:
 * Gồm một dòng duy nhất chứa hai số nguyên không âm cách nhau bởi một khoảng trắng.
 *
 * Số đầu tiên là chỉ số điện đầu tháng truớc, số tiếp theo là chỉ số điện đầu tháng này của bạn. (Bạn được đảm bảo là chỉ
 * số điện tháng sau luôn không bé hơn chỉ số điện tháng trước và các chỉ số điện có giá trị không quá 10^6​​).
 *
 * Output:
 * In ra một số nguyên duy nhất là số tiền bạn phải trả cho lượng điện mình đã sử dụng tháng trước.
 *
 * Example 1:
 * Input:
 * 120 168
 *
 * Output:
 * 78355
 *
 * Example 2:
 * Input:
 * 0 203
 *
 * Output:
 * 369793
 *
 * Explanation:
 * Ví dụ 1:
 * Tháng trước bạn sử dụng 48 kWh điện (số mới 168 – số cũ 120). Tra theo bảng trên thì bạn chỉ sử dụng điện ở bậc 1 nên tiền
 * điện của bạn là 48×1484=71232 (VND). Vậy tiền phải trả là 71232+71232×10%=78355.2 (VND), bạn chỉ cần in ra 78355.
 *
 * Ví dụ 2:
 * Bạn vừa sống tháng đầu tiên ở căn nhà mới mua và sử dụng 203 kWh điện.
 * 50 kWh điện đầu tiên tốn 50×1484=74200 (VND).
 * 50 kWh điện tiếp theo (từ 51 đến 100) tốn 50×1533=76650 (VND).
 * 100 kWh điện tiếp theo (từ 101 đến 200) tốn 100×1786=178600 (VND).
 * 3 kWh điện cuối cùng (từ 201 đến 203) tốn 3×2242=6726 (VND).
 *
 * Vậy chi phí điện sinh hoạt của bạn là 74200+76650+178600+6726=336176 (VND). Và tổng số tiền bạn cần trả là 336176+336176×10%=369793.6,
 * vì chỉ lấy phần nguyên nên kết qua cần in ra là 369793.
 **/

#include <iostream>

using namespace std;

int main()
{
    cout << "Hello, World!!!";
    return 0;
}