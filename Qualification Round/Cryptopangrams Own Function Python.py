import math

def gcd(a, b):
    return a if b == 0 else gcd(b, a % b)

t = int(input())
for c in range(1, t + 1):
    n,l=map(int,input().split())
    nums=list(map(int,input().split()))
    alpha = [0 for _ in range(l + 1)]
    for i in range(l - 1):
        if nums[i]!=nums[i + 1]:
            k = gcd(nums[i], nums[i + 1])
            alpha[i] = nums[i]//k
            alpha[i+1]=k
            for j in range(i+2,l+1):
                alpha[j]=nums[j-1]//alpha[j-1]
            for j in range(i-1,-1,-1):
                alpha[j]=nums[j]//alpha[j + 1]
            break

    alphabet = sorted(set(alpha))
    dict = {}
    for i, p in enumerate(alphabet):
        dict[p] = chr(i + ord('A'))

    plain = ""
    for x in alpha:
        plain += dict[x]
    print("Case #",c,": ",plain,sep='')