import sys
r = lambda: sys.stdin.readline().strip()

def count_line(s):
    answer = 0
    cnt = 0
    back = ''
    for c in s:
        if c == '(':
            cnt += 1
        elif c == ')':
            cnt -= 1
            if back == '(':
                answer += cnt
            elif c == ')':
                answer += 1
        back = c
    return answer

def count_line_with_stack(s):
    stack = []
    answer = 0
    for (i, c) in enumerate(s):
        if c == '(':
            stack.append(i)
        elif c == ')':
            top = stack[-1]
            stack.pop()
            if top + 1 == i:
                answer += len(stack)
            elif c == ')':
                answer += 1
    return answer

print(count_line_with_stack(r()))