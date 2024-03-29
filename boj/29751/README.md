# BOJ 29751 : 삼각형

2023 국민대학교 & 중앙대학교 프로그래밍 경진대회 Open Contest · Arena #7 - A번

Problem: https://www.acmicpc.net/problem/29751  
Official Editorial: https://upload.acmicpc.net/054430ed-e479-4d3b-996d-2f36b0753e30/

Code: https://www.acmicpc.net/source/66747110 (C2x)  
Code: https://www.acmicpc.net/source/66747122 (아희)  

---

삼각형의 넓이를 구하는 공식은 '밑변 * 높이 / 2'이며, 이 공식을 사용해 문제를 해결할 수 있습니다.  
단, 문제 지문에 명시된 대로 소수점 아래 첫 번째 자리까지만 출력되도록 해야 합니다.  

참고로 '정수 / 2'의 결과는 '\*.0' 또는 '\*.5' 두 가지 경우 뿐입니다.  
그러므로 실수 연산을 지원하지 않는 언어(아희 등)를 사용하거나 출력되는 소수점 자리 수 지정 방법을 모르는 경우라면,  
나머지가 있는 경우 '\*.5', 없는 경우 '\*.0'을 출력하면 됩니다.
