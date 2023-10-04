# BOJ 30236 : 증가 수열
Codeforces Round 899 (Div. 2) A번  
Problem: https://www.acmicpc.net/problem/30236  
Code: https://www.acmicpc.net/source/67496746 (C2x)  

---

b_i번째 수열의 값을 저장할 변수 x를 만들어 0으로 초기화합니다.  
a_1부터 a_n까지 차례대로 검사하면서, (x + 1) == a_i라면 x에 2를, 아니라면 1을 더한 값이 좋은 수열 조건을 만족하는 b_i의 최솟값입니다.  
그러므로, a_n까지 검사한 이후의 x는 b_n의 최솟값이 됩니다.
