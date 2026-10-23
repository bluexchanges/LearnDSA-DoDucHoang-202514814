# Bài 8: Tìm chỉ số nhỏ nhất của phần tử lặp trong mảng

## Đề bài

Cho mảng số nguyên, tìm chỉ số nhỏ nhất của một phần tử xuất hiện nhiều hơn một lần.

Chỉ số được tính từ `0`. Ví dụ, trong mảng `[5,6,3,4,3,6,4]`, phần tử `6` ở chỉ số `1` có xuất hiện lại, nên kết quả là `1`.

## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 0`.
- Dòng tiếp theo chứa `n` số nguyên không âm. Code dùng giá trị phần tử làm chỉ số mảng nên không hỗ trợ số âm.

Output:

- Nếu có phần tử lặp, in `The minimum index of the repeating element is x`, với `x` là chỉ số nhỏ nhất cần tìm.
- Nếu không có phần tử lặp, in `Invalid Input`.

## Giải thuật

Dùng mảng đếm `count` theo hàm `findMinIndex` trong code của bạn.

1. Nếu `n <= 1`, trả về `-1` vì không có phần tử lặp.
2. Duyệt mảng để tìm giá trị lớn nhất `max_val`.
3. Tạo mảng `count` gồm `max_val + 1` phần tử, ban đầu đều bằng `0`. Khởi tạo `min_index = -1`.
4. Duyệt `i` từ `n - 1` về `0`. Nếu `count[arr[i]] > 0`, cập nhật `min_index = i` vì giá trị này đã xuất hiện ở bên phải. Sau đó tăng `count[arr[i]]` lên `1`.
5. Trả về `min_index`. Trong `main`, nếu kết quả là `-1` thì in `Invalid Input`; ngược lại, in chỉ số tìm được.

Vì duyệt từ phải sang trái, mỗi lần cập nhật đều nhận được chỉ số nhỏ hơn trước. Sau khi duyệt xong, `min_index` chính là chỉ số nhỏ nhất của phần tử lặp. Không dừng ngay khi gặp phần tử lặp đầu tiên trong quá trình duyệt.

Gọi `M` là giá trị lớn nhất trong mảng:

- Thời gian: `O(n + M)`, gồm tìm giá trị lớn nhất, khởi tạo mảng đếm và duyệt từ phải sang trái.
- Bộ nhớ phụ: `O(M + 1)` để lưu mảng `count`.

## Testcase

### Test 1: 

Input:

```text
7
5 6 3 4 3 6 4
```

Output:

```text
The minimum index of the repeating element is 1
```

### Test 2: 

Input:

```text
6
1 2 3 4 5 6
```

Output:

```text
Invalid Input
```

### Test 3: 

Input:

```text
4
1 2 2 1
```

Output:

```text
The minimum index of the repeating element is 0
```

### Test 4: 

Input:

```text
5
0 2 3 0 2
```

Output:

```text
The minimum index of the repeating element is 0
```

### Test 5: Mảng chỉ có một phần tử

Input:

```text
1
7
```

Output:

```text
Invalid Input
```

### Test 6: Mảng rỗng

Input:

```text
0
```

Output:

```text
Invalid Input
```
