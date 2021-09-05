def maximizer(length, input_arr): # 3, [“2 3”, “3 6”, “4 1”]
    minRow = 0
    minCol = 0
    for i in range(length):
        string_arr = input_arr[i].split() # ['2', '3']
        if (i == 0):
            minRow = int(string_arr[0])
            minCol = int(string_arr[1])
        else: 
            if (int(string_arr[0]) < minRow): 
                minRow = int(string_arr[0])
            if (int(string_arr[1]) < minCol): 
                minCol = int(string_arr[1])
    return minRow * minCol

length = int(input())
input_arr = []
for i in range(length):
    input_arr.append(input())

print(maximizer(length, input_arr))