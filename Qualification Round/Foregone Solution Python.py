def check_four(n):
    x=str(n)
    if '4' in x:
        return 1
    else:
        return 0

t=int(input())
casenum=1
while t>0:
    print('Case #',casenum,': ',end='',sep='')
    num=input()
    for i in range(1,int(num)):
        if check_four(i)==0 and check_four(int(num)-i)==0:
            print(i,' ',int(num)-i,sep='')
            break
    casenum+=1
    t-=1