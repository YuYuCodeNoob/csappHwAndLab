code = "maduiersnfotvbyl"
decode = "flyers"
candidate = "abcdefghijklmnopqrstuvwxyz"
res = []
for x in decode:
    res.append(code.find(x))
allRes = [[] for _ in range(6)] 
for i in range(6):
    for x in candidate:
        c = ord(x) & 0xf
        if c == res[i]:
            allRes[i].append(x)
path = []
allCode = []
def dfs(i):
    if i == 6:
        allCode.append(''.join(path[:]))
        return
    for x in allRes[i]:
        path.append(x)
        dfs(i+1)
        path.pop()
dfs(0)
print(allCode)