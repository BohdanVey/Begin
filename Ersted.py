def Ersted(n):
	a=[True,True]
	for x in range(2,n+1):
		a.append(True)
	for i in range(2,n+1):
		if a[i]:
			print(i)
			x=2
			while i*x<=n:
					
					a[i*x]=False
					x+=1
Ersted(100)
				