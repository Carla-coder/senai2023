def fibo(n):
    f0 = 0
    f1 = 1
    for k in range(1,n+1):
        f2 = f0 + f1
        f0 = f1
        f1 = f2
    return f0
print(fibo(500))
