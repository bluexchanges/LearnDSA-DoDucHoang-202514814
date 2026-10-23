# Bài 7: Gom nhóm phần tử theo lần xuất hiện đầu tiên

## Đề bài

Cho mảng chưa được sắp xếp có các phần tử trùng nhau. Sắp xếp lại để những phần tử cùng giá trị đứng cạnh nhau, đồng thời giữ nguyên thứ tự xuất hiện đầu tiên của các giá trị.


## Input và output

Input:

- Dòng đầu chứa số phần tử `n >= 0`.
- Dòng tiếp theo chứa `n` số nguyên không âm. Code hiện tại dùng giá trị phần tử làm chỉ số mảng nên không hỗ trợ số âm.

Output: In mảng sau khi gom nhóm, các phần tử cách nhau bằng dấu cách. Nếu `n = 0`, chương trình không in gì.

## Giải thuật
1. Nếu `n <= 1`, giữ nguyên mảng và kết thúc hàm.
2. Tìm giá trị lớn nhất `max_val` trong mảng.
3. Tạo mảng `freq` có `max_val + 1` phần tử để đếm số lần xuất hiện của từng giá trị.
4. Tạo mảng `visited` để đánh dấu giá trị đã được gom nhóm và mảng `result` để lưu kết quả.
5. Duyệt mảng ban đầu từ trái sang phải. Với mỗi giá trị `val` chưa được đánh dấu, thêm `freq[val]` lần giá trị đó vào `result`, rồi đặt `visited[val] = true`.
6. Gán `arr = result`.

Duyệt từ trái sang phải giúp các nhóm giữ đúng thứ tự xuất hiện đầu tiên. Mảng `visited` bảo đảm mỗi giá trị chỉ được tạo nhóm một lần.

Gọi `M` là giá trị lớn nhất trong mảng:

- Thời gian: `O(n + M)` do khởi tạo mảng đếm, đánh dấu và duyệt mảng. Tổng số phần tử được thêm vào `result` là `n`.
- Bộ nhớ phụ: `O(n + M)` để lưu `freq`, `visited` và `result`.

## Testcase

### Test 1:
Input:

```text
6
1 2 3 1 2 1
```

Output:

```text
1 1 1 2 2 3
```

### Test 2: 

Input:

```text
9
5 4 5 5 3 1 2 2 4
```

Output:

```text
5 5 5 4 4 3 1 2 2
```

### Test 3: 

Input:

```text
6
0 2 0 1 2 0
```

Output:

```text
0 0 0 2 2 1
```

### Test 4: 

Input:

```text
4
4 1 3 2
```

Output:

```text
4 1 3 2
```

### Test 5: 

Input:

```text
1
7
```

Output:

```text
7
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
