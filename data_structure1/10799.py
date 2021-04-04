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

print(count_line(r()))