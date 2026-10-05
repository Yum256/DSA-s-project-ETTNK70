Bài tập tuần 2: Tháp Hà Nội
Cho ba cọc A, B, C và n đĩa có kích thước khác nhau, ban đầu được xếp chồng lên nhau ở cọc A theo thứ tự giảm dần về kích thước từ dưới lên trên. Nhiệm vụ là chuyển toàn bộ $n$ đĩa từ cọc gốc A sang cọc đích C, sử dụng cọc trung gian B, tuân thủ các quy tắc: Mỗi lần chỉ được di chuyển đúng 1 đĩa trên cùng của một cọc. Đĩa lớn hơn không bao giờ được đặt lên trên đĩa nhỏ hơn.
*Giải thuật đệ quy:
-Để di chuyển n đĩa từ cột A sang cột C, trước tiên ta cần di chuyển n-1 đĩa trên cùng sang cột B, sau đó di chuyển đĩa thứ n sang cột C, cuối cùng di chuyển n-1 đĩa từ B về C.
-Khi khai báo hàm với n đĩa, ta sẽ cho hàm tự gọi nó với n-1 đĩa.
-Điều kiện dừng đó là khi n = 1, chuyển đĩa từ A qua C.
Test case: 
- input: 1 => ouput: Chuyển đĩa 1 từ A sang C 
- input: 2 => ouput: Chuyển đĩa 1 từ A sang B 
                     Chuyển đĩa 2 từ A sang C
                     Chuyển đĩa 1 từ B sang C
- input: 3 => ouput: Chuyển đĩa 1 từ A sang C 
                     Chuyển đĩa 2 từ A sang B
                     Chuyển đĩa 1 từ C sang B
                     Chuyển đĩa 3 từ A sang C
                     Chuyển đĩa 1 từ B sang A
                     Chuyển đĩa 2 từ B sang C
                     Chuyển đĩa 1 từ A sang C

  ---Hết---
