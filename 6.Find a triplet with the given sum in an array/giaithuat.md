# Bài 6: Tìm bộ ba phần tử có tổng cho trước

## Đề bài

Cho mảng số nguyên chưa được sắp xếp và số nguyên `target`. Tìm ba phần tử ở ba vị trí khác nhau có tổng bằng `target`.

Chương trình in tất cả các bộ ba giá trị khác nhau thỏa mãn, mỗi bộ chỉ in một lần.

## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 0`.
- Dòng tiếp theo chứa `n` số nguyên của mảng.
- Dòng cuối chứa tổng cần tìm `target`.

Output:

- Nếu tìm thấy, in `Triplet exists.` rồi in các bộ ba theo dạng `{a, b, c}` trên dòng tiếp theo.
- Nếu không tìm thấy hoặc `n < 3`, in `No triplet exists`.

## Giải thuật
1. Nếu `n < 3`, in `No triplet exists` và kết thúc.
2. Sắp xếp mảng tăng dần bằng `bubble_sort`.
3. Duyệt `i` từ `0` đến `n - 3` để cố định phần tử đầu tiên. Nếu `i > 0` và `num[i] == num[i - 1]`, bỏ qua để tránh bộ ba trùng.
4. Đặt `left = i + 1`, `right = n - 1`.
5. Trong khi `left < right`, tính `cur_sum = num[i] + num[left] + num[right]`:
   - Nếu bằng `target`, in bộ ba, bỏ qua các giá trị trùng ở hai con trỏ, sau đó tăng `left` và giảm `right`.
   - Nếu lớn hơn `target`, giảm `right`.
   - Nếu nhỏ hơn `target`, tăng `left`.
6. Nếu duyệt hết mà chưa tìm được bộ ba nào, in `No triplet exists`.

Vì mảng đã tăng dần, tăng `left` giúp tăng tổng và giảm `right` giúp giảm tổng. Điều kiện `i < left < right` bảo đảm dùng ba vị trí khác nhau. Các phần tử có thể bằng nhau nếu mảng có đủ số lần xuất hiện.

- Thời gian: `O(n²)`, gồm Bubble Sort và duyệt hai con trỏ cho từng `i`.
- Bộ nhớ phụ: `O(1)`, kết quả được in trực tiếp.
- Mảng ban đầu bị thay đổi thứ tự sau khi sắp xếp.

## Testcase

### Test 1: 

Input:

```text
8
2 7 4 0 9 5 1 3
6
```

Output:

```text
Triplet exists.
The triplets with the given sum 6 are: {0, 1, 5} {0, 2, 4} {1, 2, 3}
```

### Test 2: 

Input:

```text
4
1 2 3 4
20
```

Output:

```text
No triplet exists
```

### Test 3: 

Input:

```text
6
-1 0 1 2 -1 -4
0
```

Output:

```text
Triplet exists.
The triplets with the given sum 0 are: {-1, -1, 2} {-1, 0, 1}
```

### Test 4: 

Input:

```text
6
1 1 1 2 2 3
5
```

Output:

```text
Triplet exists.
The triplets with the given sum 5 are: {1, 1, 3} {1, 2, 2}
```

### Test 5: 
Input:

```text
4
0 0 0 0
0
```

Output:

```text
Triplet exists.
The triplets with the given sum 0 are: {0, 0, 0}
```

### Test 6: 

Input:

```text
2
1 2
3
```

Output:

```text
No triplet exists
```
