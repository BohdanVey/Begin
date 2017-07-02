n=int(input())
a=[[0]*(n+2)]*(n+2)
s=[]
for i in range(1,n+1): 
	s=" "
	s+=input()
	for j in range(1,n+1):
			a[j][i]=s[j]
		
			
for i in range(1,n+1):
	print("")
	for j in range(1,n+1):
		print(a[j][i],end="")