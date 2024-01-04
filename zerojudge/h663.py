MAXN = 20
INF = float('inf')

N = int(input())
conflict = [[0] * N for _ in range(N)]
dp = [[-1] * (1 << N) for _ in range(N)]
path = [[-1] * (1 << N) for _ in range(N)]

def solve(pos, mask):
    if mask == (1 << N) - 1:
        return 0
    if dp[pos][mask] != -1:
        return dp[pos][mask]

    ans = INF
    idx = -1
    for i in range(N):
        if not (mask & (1 << i)):
            res = conflict[pos][i] + solve(i, mask | (1 << i))
            if res < ans:
                ans = res
                idx = i

    path[pos][mask] = idx
    dp[pos][mask] = ans
    return ans

def print_path(pos, mask):
    path_str = []
    while mask != (1 << N) - 1:
        path_str.append(str(path[pos][mask] + 1))
        pos = path[pos][mask]
        mask |= (1 << pos)
    print(" ".join(path_str))

for i in range(N):
    conflict[i] = list(map(int, input().split()))

ans = INF
idx = -1
for i in range(N):
    res = solve(i, 1 << i)
    if res < ans:
        ans = res
        idx = i

print(ans)
print(idx + 1, end=" ")
print_path(idx, 1 << idx)