def mountain(hi , lo, n):
    indexHi  = n - (hi - lo) - 1
    if(indexHi <= 0):
        indexHi = 1
    leftLo = hi - indexHi
    rightLo = hi - (n - indexHi) + 1
    myArr = [0] * n

    if(indexHi >= n or leftLo < lo or rightLo < lo):
        return [-1]
    else:
        for i in range(n):
            if(i < indexHi):
                myArr[i] = hi - indexHi + i
            elif(i == indexHi):
                myArr[i] = hi
            else:
                myArr[i] = hi - (i - indexHi)
    return myArr

hi = int(input())
lo = int(input())
n = int(input())

answer = mountain(hi, lo, n)
print(answer)