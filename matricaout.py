a=[]
n=4
for i in range(n):
	a.append([0]*n)
a[0][0]=1
for i in range(0,n): 
	s=input()
	for j in range(0,n):
			a[i][j]=s[j]
