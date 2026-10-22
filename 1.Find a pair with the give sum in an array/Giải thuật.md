# Bài 1: Tìm cặp phần tử có tổng bằng S

Cho mảng số nguyên `A` gồm `n` phần tử chưa được sắp xếp và số nguyên `S`. Tìm hai phần tử ở hai vị trí khác nhau sao cho:
## 1: Tìm một cặp
### Giải thuật

1. Nếu `n < 2`, in `Khong tim thay` và kết thúc.
2. Sắp xếp mảng tăng dần.
3. Duyệt bằng hai con trỏ từ hai đầu mảng.
4. Nếu tổng bằng `S`, in cặp hiện tại và kết thúc ngay.
5. Nếu hai con trỏ gặp nhau mà chưa tìm thấy, in `Khong tim thay`.
### Testcase

**Test 1:**

Input:

```text
6
8 7 2 5 3 1
10
```

Output:

```text
Pair found(2,8)
```
**Test 2:**

Input:

```text
4
1 2 4 8
20
```

Output:

```text
Khong tim thay
```

**Test 3:**

Input:

```text
2
3 3
6
```

Output:

```text
Pair found(3,3)
```

**Test 4:**

Input:

```text
1
5
10
```

Output:

```text
Khong tim thay
```

## Ý 2: Tìm tất cả các cặp giá trị khác nhau
### Giải thuật

1. Nếu `n < 2`, in `Khong tim thay` và kết thúc.
2. Sắp xếp mảng tăng dần, đặt `found = false`.
3. Duyệt bằng hai con trỏ như ý 1.
4. Khi tổng bằng `S`, in cặp hiện tại, đặt `found = true`, rồi bỏ qua các phần tử trùng với hai giá trị vừa in.
5. Tiếp tục đến khi `low >= high`.
6. Nếu `found` vẫn bằng `false`, in `Khong tim thay`.

### Testcase input/output

**Test 1:**

Input:

```text
6
8 7 2 5 3 1
10
```

Output:

```text
Pair found(2,8)
Pair found(3,7)
```

**Test 2:**

Input:

```text
10
1 5 1 5 2 4 2 4 3 3
6
```

Output:

```text
Pair found(1,5)
Pair found(2,4)
Pair found(3,3)
```

**Test 3:**

Input:

```text
7
-3 -1 0 1 2 3 4
1
```

Output:

```text
Pair found(-3,4)
Pair found(-1,2)
Pair found(0,1)
```

**Test 4:**

Input:

```text
4
1 2 4 8
20
```

Output:

```text
Khong tim thay
```

**Test 5:**

Input:

```text
0

6
```

Output:

```text
Khong tim thay
```
