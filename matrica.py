n=0


n=int(input())
a=[]
k=0
for i in range(n+2):
	a.append([0]*(n+2))
s=[]


for i in range(1,n+1): 
	s=input()
	for j in range(0,n):
			a[i][j+1]=s[j]

			
for i in range(1,n+1): 
	print("")
	for j in range(1,n+1): 
		print(a[i][j],end="")

		
for i in range(1,n+1):
	for j in range(1,n+1):
		if a[i][j]=="*":
			k+=1
			ostriv(a,i,j,k)
		
for i in range(1,n+1): 
	print("")
	for j in range(1,n+1): 
		print(a[i][j],end="")