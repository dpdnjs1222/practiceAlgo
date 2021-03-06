자료구조 1 : Stack & Queue

# Stack
1. [9012 괄호](https://www.acmicpc.net/problem/9012)   
```
Valid Parenthesis String을 구하기 위해 '('가 나오는 경우 stack에 push하고 ')'가 나오는 경우 stack에서 pop한다. VPS가 아닌 경우 빈 stack에서 pop하거나(짝이 안맞는 ')'가 생김) 괄호 전체를 돌고도 빈 stack이 아니게 된다(짝이 안맞는 '('가 생김).  
이 문제는 stack의 원리만 사용하면 된다. stack 대신 int 변수를 사용해서 push이면 +1, pop이면 -1 했다.
```

2. [10799 쇠막대기](https://www.acmicpc.net/problem/10799)    
```
다음 3가지의 상황으로 나눌 수 있다.  
1. '('   
새로운 막대기가 나오는 경우로, 레이저로 잘릴 때 count해야하는 막대기가 하나 더 늘었다  
-> push   
2. '()'  
레이저가 나오는 경우로, stack에 쌓여있는 막대기만큼 count한다   
-> push & pop, +len(stack)
3. ')'   
막대기가 끝나는 경우로, 끝난 하나의 막대기를 count한다   
-> pop, +1   

'()' 레이저를 알아내기 위해 이전 괄호를 살피거나, stack에 괄호의 index를 넣어준다.
```

3. [1406 에디터](https://www.acmicpc.net/problem/1406)     
```
두 개의 stack을 사용한다. 커서를 기준으로 왼쪽 문자는 왼쪽 stack, 오른쪽 문자는 오른쪽 stack에 저장된다.
```

# Queue
1. [1158 요세푸스 문제](https://www.acmicpc.net/problem/1158)
```
큐의 가장 앞 원소를 pop해서 뒤에 push하면 원을 이루면서 앉아있는 효과를 줄 수 있다.   
즉, 매번 큐에서 원소를 pop하고 k번째 인 경우 출력, k번째가 아닌 경우 뒤에 push한다.  
**매 k번째마다 출력하는데 총 n번 하므로 이중 for문을 사용하여**  
**- 0~k-1번째 : pop & push**  
**- k번째 : pop & print**  
**할 수 있다. 정답 출력 형식을 지키기 위해**  
**n-1개까지만 for문으로 출력하고 마지막 남은 원소는 따로 출력한다**
```
