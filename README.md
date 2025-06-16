# 백준 풀이 연습장

- 백준 코딩문제 풀이 연습장
- https://www.acmicpc.net/
- 단계별로_풀어보기 현재 진도 [확인](./C99_Step_by_Step/TRACKER.md)


## 기록 노트
### 1단계 - 입출력과 사칙연산 
- long long 타입이라는 친구도 있더라 [_>](./C99_Step_by_Step/Step01/10172.c)
```c 
    long long A, B, C;
    scanf("%lld %lld %lld", &A, &B, &C);
```
- c언어 큰따옴표(")출력은 \로 이스케이프 [_>](./C99_Step_by_Step/Step01/11382-롱롱.c)
<img src="./image/back01.png" width=350>

### 2단계 - 조건문
- 특이사항 無

### 3단계 - 반복문
- 가변 길이 배열은 c언어에서 안 된다고 알고 있었는데, C99이상 버전에서는 된다고 한다. malloc을 안 써도 된다니!
- Visual Stdio에서는 에러난다. [_>](./C99_Step_by_Step/Step03/10950-A+B.c)
<img src="./image/back02.png">

- 입력 -> 출력 -> 입력 -> 출력이 허용되는 줄도 모르고 어렵게 풀고 있었다... 즉, 지금까지는 배열을 쓸 필요가 없었음 [깨달음 _>](./C99_Step_by_Step/Step03/10952-A+B.c)

- C언어의 EOF에 대하여 [_>](./C99_Step_by_Step/Step03/10951-EOF.c) / [참고자료](https://ip99202.github.io/posts/C%EC%96%B8%EC%96%B4-eof-%EC%B2%98%EB%A6%AC%ED%95%98%EB%8A%94-%EB%B0%A9%EB%B2%95/)

### 4단계 - 1단계 배열
- 문제를 잘 읽어야 함과 적절한 자료형 선택의 중요성.[->](./C99_Step_by_Step/Step04/1546-평균.c)

### 5단계 - 문자열
- c언어에서 문자열 -> 정수로 받는 방법 [->]
(./C99_Step_by_Step//Step05/11720-숫자합.c)