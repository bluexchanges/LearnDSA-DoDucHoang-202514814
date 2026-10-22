# Bài 3: Sắp xếp mảng nhị phân trong thời gian tuyến tính

## Đề bài

Cho mảng chỉ gồm các phần tử `0` và `1`. Sắp xếp mảng sao cho tất cả số `0` đứng trước các số `1`, với thời gian `O(n)` và bộ nhớ phụ `O(1)`.

## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 0`.
- Dòng tiếp theo chứa `n` phần tử, mỗi phần tử là `0` hoặc `1`.

Output: In mảng sau khi sắp xếp, các phần tử cách nhau bằng dấu cách. Nếu `n = 0`, chương trình không in gì.

## Giải thuật
1. Khởi tạo `k = 0`, là vị trí sẽ đặt số `0` tiếp theo.
2. Duyệt mảng bằng biến `i` từ `0` đến `n - 1`.
3. Nếu `arr[i] == 0`, đổi chỗ `arr[i]` với `arr[k]`, sau đó tăng `k` lên `1`.
4. Duyệt xong, tất cả số `0` nằm ở đầu mảng, các số `1` nằm ở phía sau.

- Thời gian: `O(n)` vì chỉ duyệt mảng một lần.
- Bộ nhớ phụ: `O(1)` vì đổi chỗ trực tiếp trên mảng.

## Testcase

### Test 1: 

Input:

```text
8
1 0 1 0 1 0 0 1
```

Output:

```text
0 0 0 0 1 1 1 1
```

### Test 2:
Input:

```text
4
0 0 0 0
```

Output:

```text
0 0 0 0
```

### Test 3:

Input:

```text
4
1 1 1 1
```

Output:

```text
1 1 1 1
```

### Test 4: 

Input:

```text
5
0 0 1 1 1
```

Output:

```text
0 0 1 1 1
```

### Test 5: 

Input:

```text
1
0
```

Output:

```text
0
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
