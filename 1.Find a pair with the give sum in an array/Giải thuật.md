Given an unsorted integer array, find a pair with the given sum in it.

| Input | Output |
| --- | --- |
| Mảng số nguyên không âm A, n phần tử, có tổng cần tìm là S | Cặp có tổng là S hoặc không tìm thấy |

\+ Tìm 2 vị trí A\[i\] và A\[j\] sao cho A\[i\]+ A\[j\]=S và 0<=i<j<=n

\+ Giai thuat

Input Arr A,n ,S

if n<2 => print” Khong tim thay”

if A\[0\]> S => print “ Khong tim thay”

low = 0 ; high=n-1

sort A

if ( A\[low\]+A\[high\]==S)-> print A\[low\],A\[high\]

if (A\[low\]+A\[high\]< S)? low++:high--
