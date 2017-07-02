n=0
smax=0
s=0
def ostriv(a,x,y,k,s):
	a[x][y]=k;
	s[0]=s[0]+1
	if a[x-1][y]=='*':
		s=ostriv(a,x-1,y,k,s)
	else:
		s[1]=s[1]+1
	if a[x+1][y]=='*':
		s=ostriv(a,x+1,y,k,s)
	else:
		s[1]=s[1]+1
	if a[x][y-1]=='*':
		s=ostriv(a,x,y-1,k,s)
	else:
		s[1]=s[1]+1
	if a[x][y+1]=='*':
		s=ostriv(a,x,y+1,k,s)
	else:
		s[1]=s[1]+1
	return s
	

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
			s=[0,0]
			s=ostriv(a,i,j,k,s)
			if s[0]>smax:
				smax=s[0]
				pmax=s[1]
print(smax," ",pmax)				
		
for i in range(1,n+1): 
	print("")
	for j in range(1,n+1): 
		print(a[i][j],end="")