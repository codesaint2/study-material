import math

def findMaxInJourny(x, y, z):
    if (x == y):
        return x + math.floor(z / 2)
    
    elif (x < y):
        x, y = y, x
    
    return x + math.floor((z - (x - y)) / 2)

x = int(input())
y = int(input())
steps = int(input())

getSteps = findMaxInJourny(x, y, steps)
print(getSteps)