# Bài 5: Tìm lợi nhuận lớn nhất khi mua bán cổ phiếu nhiều lần

## Đề bài

Cho mảng giá cổ phiếu theo từng ngày. Tìm lợi nhuận lớn nhất khi được mua bán nhiều lần, nhưng tại mỗi thời điểm chỉ được giữ tối đa một cổ phiếu. Phải bán cổ phiếu đang giữ trước khi bắt đầu giao dịch mới. Không tính phí giao dịch.

## Input và output

Input:

- Dòng đầu chứa số ngày `n >= 0`.
- Dòng tiếp theo chứa `n` số nguyên không âm là giá cổ phiếu theo từng ngày.

Output:

- In các giao dịch dạng `Buy on day x and sell on day y`. Ngày được tính từ `1`.
- Cuối cùng in `Total profit: p`, với `p` là tổng lợi nhuận lớn nhất.
- Nếu không có giao dịch có lợi và `n >= 2`, chỉ in `Total profit: 0`.
- Theo code hiện tại, nếu `n <= 1`, chương trình không in gì.

## Giải thuật

Sử dụng phương pháp tham lam: mua ở đầu mỗi đoạn giá tăng và bán ở cuối đoạn đó.

1. Khởi tạo `i = 0`, `profit = 0`.
2. Bỏ qua các ngày giá giảm hoặc bằng nhau bằng cách tăng `i` khi `price[i] >= price[i + 1]`.
3. Lưu `buy_day = i`.
4. Tiếp tục tăng `i` khi `price[i] <= price[i + 1]` để tìm cuối đoạn giá không giảm.
5. Lưu `sell_day = i`. Nếu `sell_day > buy_day`, cộng `price[sell_day] - price[buy_day]` vào `profit` và in ngày mua, ngày bán.
6. Lặp lại đến cuối mảng, sau đó in tổng lợi nhuận.

Trong mỗi đoạn giá không giảm, mua ở đầu và bán ở cuối thu được toàn bộ phần giá tăng. Bỏ qua các đoạn giảm giúp tránh lỗ. Vì vậy, cộng lợi nhuận của các đoạn này cho kết quả lớn nhất.

- Thời gian: `O(n)` vì chỉ số `i` chỉ tiến về phía trước.
- Bộ nhớ phụ: `O(1)`.

## Testcase

### Test 1:

Input:

```text
8
1 5 2 3 7 6 4 5
```

Output:

```text
Buy on day 1 and sell on day 2
Buy on day 3 and sell on day 5
Buy on day 7 and sell on day 8
Total profit: 10
```

### Test 2: 

Input:

```text
6
10 8 6 5 4 2
```

Output:

```text
Total profit: 0
```

### Test 3: 

Input:

```text
5
1 2 3 4 5
```

Output:

```text
Buy on day 1 and sell on day 5
Total profit: 4
```

### Test 4: 

Input:

```text
4
3 3 3 3
```

Output:

```text
Total profit: 0
```

### Test 5: 

Input:

```text
6
2 2 5 5 1 4
```

Output:

```text
Buy on day 2 and sell on day 4
Buy on day 5 and sell on day 6
Total profit: 6
```

### Test 6: 

Input:

```text
1
5
```

Output:

```text
```

Chương trình không in gì vì hàm trả về ngay khi `n <= 1`.
