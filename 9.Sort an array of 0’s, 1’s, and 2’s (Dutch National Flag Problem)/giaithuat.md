# Bài 9: Sắp xếp mảng gồm các số 0, 1 và 2

## Đề bài

Cho mảng chỉ chứa các giá trị `0`, `1`, `2`. Sắp xếp mảng tăng dần trong thời gian tuyến tính và sử dụng bộ nhớ phụ hằng số.

## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 0`.
- Dòng tiếp theo chứa `n` phần tử, mỗi phần tử là `0`, `1` hoặc `2`.

Output: In mảng sau khi sắp xếp, các phần tử cách nhau bằng dấu cách. Nếu `n = 0`, chương trình không in gì.

## Giải thuật
1. Khởi tạo `left = 0`, `mid = 0`, `right = n - 1`.
2. Trong khi `mid <= right`, xét `arr[mid]`:
   - Nếu bằng `0`, đổi chỗ `arr[left]` với `arr[mid]`, sau đó tăng cả `left` và `mid`.
   - Nếu bằng `1`, tăng `mid`.
   - Nếu bằng `2`, đổi chỗ `arr[mid]` với `arr[right]`, sau đó giảm `right`. Giữ nguyên `mid` để kiểm tra phần tử vừa đổi về.
3. Khi `mid > right`, mảng đã được sắp xếp.
- Thời gian: `O(n)` vì mỗi bước làm giảm một phần tử chưa xử lý.
- Bộ nhớ phụ: `O(1)`, đổi chỗ trực tiếp trên mảng.

## Testcase

### Test 1:

Input:

```text
12
0 1 2 2 1 0 0 2 0 1 1 0
```

Output:

```text
0 0 0 0 0 1 1 1 1 2 2 2
```

### Test 2:

Input:

```text
6
2 2 1 1 0 0
```

Output:

```text
0 0 1 1 2 2
```

### Test 3: 

Input:

```text
6
0 0 1 1 2 2
```

Output:

```text
0 0 1 1 2 2
```

### Test 4: 

Input:

```text
4
2 2 2 2
```

Output:

```text
2 2 2 2
```

### Test 5:

Input:

```text
1
1
```

Output:

```text
1
```

### Test 6: 

Input:

```text
0
```

Output:

```text
```

Chương trình không in gì.
