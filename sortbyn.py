n=int(input())
a=[0]*10
str=list(input())
for i in range(0,n):
	str[i]=int(str[i])
	a[str[i]]+=1;
for i in a:
	print(i);


