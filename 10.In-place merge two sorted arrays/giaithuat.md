# Bài 10: Trộn hai mảng đã sắp xếp tại chỗ

## Đề bài

Cho hai mảng `X` và `Y` đã được sắp xếp tăng dần. Trộn các phần tử sao cho `X` chứa các phần tử nhỏ nhất, `Y` chứa các phần tử còn lại. Giữ nguyên kích thước hai mảng và không dùng mảng phụ.

Sau khi trộn, mỗi mảng vẫn tăng dần và mọi phần tử trong `X` không lớn hơn các phần tử trong `Y`.

## Input và output

Theo thứ tự nhập trong `main`:

- Dòng đầu chứa số phần tử `n` của `X`.
- Dòng tiếp theo chứa `n` phần tử của `X` theo thứ tự tăng dần.
- Dòng tiếp theo chứa số phần tử `m` của `Y`.
- Dòng cuối chứa `m` phần tử của `Y` theo thứ tự tăng dần.
Output:

- Dòng đầu in mảng `X` sau khi trộn.
- Dòng thứ hai in mảng `Y` sau khi trộn.
- Các phần tử cách nhau bằng dấu cách.

## Giải thuật
1. Duyệt từng phần tử `X[i]` từ trái sang phải.
2. Nếu `X[i] <= Y[0]`, giữ nguyên vì phần tử này không lớn hơn phần tử nhỏ nhất của `Y`.
3. Nếu `X[i] > Y[0]`, đổi chỗ hai phần tử. Lúc này, phần tử nhỏ hơn được đưa vào `X[i]`.
4. Lưu `first = Y[0]`, đặt `k = 1`. Khi `k` còn trong mảng và `Y[k] < first`, dịch `Y[k]` sang trái một vị trí rồi tăng `k`.
5. Gán `Y[k - 1] = first` để đưa phần tử vừa đổi sang vào đúng vị trí, giữ `Y` tăng dần.
6. Tiếp tục đến hết mảng `X`.
- Thời gian xấu nhất: `O(n × m)` với hai mảng không rỗng, vì mỗi phần tử của `X` có thể làm dịch chuyển các phần tử của `Y`.
- Bộ nhớ phụ: `O(1)`.

## Testcase

### Test 1:

Input:

```text
5
1 4 7 8 10
3
2 3 9
```

Output:

```text
1 2 3 4 7
8 9 10
```

### Test 2:

Input:

```text
3
1 2 3
3
4 5 6
```

Output:

```text
1 2 3
4 5 6
```

### Test 3:
Input:

```text
3
7 8 9
3
1 2 3
```

Output:

```text
1 2 3
7 8 9
```

### Test 4:

Input:

```text
3
1 3 3
4
2 3 4 4
```

Output:

```text
1 2 3
3 3 4 4
```

### Test 5:

Input:

```text
3
-5 -1 3
3
-4 0 2
```

Output:

```text
-5 -4 -1
0 2 3
```

### Test 6:

Input:

```text
1
5
1
2
```

Output:

```text
2
5
```
