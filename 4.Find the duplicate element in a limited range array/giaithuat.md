# Bài 4: Tìm phần tử trùng lặp trong mảng có giới hạn giá trị

## Đề bài

Cho mảng gồm `n` phần tử có giá trị từ `1` đến `n - 1`. Mỗi giá trị trong khoảng này xuất hiện một lần, riêng một giá trị xuất hiện hai lần. Tìm giá trị bị trùng mà không sử dụng thêm mảng phụ.

## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 2`.
- Dòng tiếp theo chứa `n` số nguyên thỏa mãn điều kiện đề bài.

Output: In `The duplicate element is: x`, với `x` là giá trị bị trùng.

## Giải thuật

Sử dụng phép XOR (`^`)

Tính chất:

```text
x ^ x = 0
x ^ 0 = x
```

Phép XOR có tính giao hoán và kết hợp, nên các giá trị giống nhau có thể triệt tiêu dù không đứng cạnh nhau.

1. Khởi tạo `val = 0`.
2. Duyệt các phần tử trong mảng, thực hiện `val ^= x`.
3. Duyệt các số từ `1` đến `n - 1`, thực hiện `val ^= i`.
4. Trả về `val`, là giá trị bị trùng.

Các số xuất hiện một lần trong mảng sẽ triệt tiêu với số tương ứng trong khoảng `1..n-1`. Riêng số bị trùng xuất hiện tổng cộng ba lần khi XOR cả hai nhóm, nên còn lại chính số đó.

Ví dụ với mảng `[1,2,3,4,4]`:

```text
val = (1 ^ 2 ^ 3 ^ 4 ^ 4) ^ (1 ^ 2 ^ 3 ^ 4)
    = 4
```

- Thời gian: `O(n)`.
- Bộ nhớ phụ: `O(1)`.

## Testcase

### Test 1:

Input:

```text
5
1 2 3 4 4
```

Output:

```text
The duplicate element is: 4
```

### Test 2:

Input:

```text
5
1 2 3 4 2
```

Output:

```text
The duplicate element is: 2
```

### Test 3:

Input:

```text
6
3 1 5 2 3 4
```

Output:

```text
The duplicate element is: 3
```

### Test 4:

Input:

```text
5
1 4 2 1 3
```

Output:

```text
The duplicate element is: 1
```

### Test 5:

Input:

```text
2
1 1
```

Output:

```text
The duplicate element is: 1
```
