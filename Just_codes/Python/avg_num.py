def average(num):
    sum_num=0
    for i in num:
        sum_num+=i
    avg = sum_num/len(num)
    return avg

n=[18,25,3,41,5]
print("The average is ",average(n))


