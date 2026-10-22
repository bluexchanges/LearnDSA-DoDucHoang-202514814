# Bài 2: Kiểm tra mảng con có tổng bằng 0

## Đề bài

Cho một mảng số nguyên `A` gồm `n` phần tử, kiểm tra xem có tồn tại mảng con có tổng bằng `0` hay không.

Mảng con phải chứa các phần tử liên tiếp trong mảng ban đầu và có ít nhất một phần tử. Cần tìm đoạn `[l, r]` sao cho:

```text
A[l] + A[l + 1] + ... + A[r] = 0
0 <= l <= r < n
```
## Input và output

Input:

- Dòng đầu chứa số nguyên `n >= 0`.
- Dòng tiếp theo chứa `n` số nguyên của mảng.

Output:

- Nếu tìm thấy, in `Mang con la:` rồi in mỗi mảng con trên một dòng, dạng `{a,b,c}`.
- Nếu không tìm thấy và `n > 0`, in `Khong co`.
- Nếu `n = 0`, hàm trả về `false` ngay và chương trình không in gì.

## Giải thuật

### 1.Tổng tiền tố

Gọi `P[i]` là tổng các phần tử từ đầu mảng đến vị trí `i`:

```text
P[i] = A[0] + A[1] + ... + A[i]
P[-1] = 0
```

Tổng của đoạn `[l, r]` là:

```text
sum(l, r) = P[r] - P[l - 1]
```

Do đó, đoạn này có tổng bằng `0` khi `P[r] = P[l - 1]`. Mỗi cặp tổng tiền tố bằng nhau ở hai chỉ số khác nhau xác định một mảng con có tổng bằng `0`.

### 2. Lưu trữ

| Thuộc tính | Ý nghĩa |
| --- | --- |
| `sum` | Giá trị tổng tiền tố |
| `index` | Chỉ số cuối của tổng tiền tố trong mảng ban đầu |

## Testcase

### Test 1: Có nhiều mảng con có tổng bằng 0

Input:

```text
10
3 4 -7 3 1 3 1 -4 -2 -2
```

Output theo đúng thứ tự chương trình in ra:

```text
Mang con la:
{3,4,-7}
{3,4,-7,3,1,3,1,-4,-2,-2}
{3,1,3,1,-4,-2,-2}
{4,-7,3}
{3,1,-4}
{-7,3,1,3}
```

### Test 2: Không có mảng con có tổng bằng 0

Input:

```text
4
1 2 3 4
```

Output:

```text
Khong co
```

### Test 3: Mảng chỉ chứa một phần tử bằng 0

Input:

```text
1
0
```

Output:

```text
Mang con la:
{0}
```

### Test 4: Mảng chỉ chứa một phần tử khác 0

Input:

```text
1
5
```

Output:

```text
Khong co
```

### Test 5: Tất cả phần tử đều bằng 0

Input:

```text
3
0 0 0
```

Output:

```text
Mang con la:
{0}
{0,0}
{0,0,0}
{0}
{0,0}
{0}
```
### Test 6: Các mảng con có tổng bằng 0 chồng lấn nhau

Input:

```text
3
1 -1 0
```

Output:

```text
Mang con la:
{1,-1}
{1,-1,0}
{0}
```

### Test 7: Mảng rỗng

Input:

```text
0
```

Output:

```text
```

Chương trình hiện tại không in gì vì hàm trả về `false` ngay khi `n = 0`.

