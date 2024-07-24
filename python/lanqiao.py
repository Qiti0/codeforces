f = list(range(1,20190325))
f[0] = 1
f[1] = 1
f[2] = 1
for i in range(3,20190325):
    f[i] = f[i - 1] + f[i - 2] + f[i - 3];
print(f[20190325])