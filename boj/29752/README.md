# BOJ 29752 : 최장 스트릭

2023 국민대학교 & 중앙대학교 프로그래밍 경진대회 Open Contest · Arena #7 - B번

Problem: https://www.acmicpc.net/problem/29752  
Official Editorial: https://upload.acmicpc.net/054430ed-e479-4d3b-996d-2f36b0753e30/

Code: https://www.acmicpc.net/source/66747152 (C2x)  
Code: https://www.acmicpc.net/source/66747161 (아희)  

---

현재 스트릭을 저장할 변수와 최장 스트릭을 저장할 변수를 만듭니다.  
s_i를 입력받은 후, s_i가 1 이상이라면 현재 스트릭에 1을 더하고, 0이라면 현재 스트릭을 0으로 만듭니다.  
그 후 최장 스트릭 변수에는 max(최장 스트릭, 현재 스트릭)을 저장하면 i일까지의 최장 스트릭을 구할 수 있습니다.  
N일차까지 입력받은 후의 최장 스트릭 변수에 저장된 수가 N일 동안의 최장 스트릭이 됩니다.  
