i=0
try:
	i=int(input())
except:
	print("error")
else:
	k=0
	if i<3:
		print("Error")
	else:
		i=int(i)
		if i%2==1	:
			print(2)
		else:
			for x in range(2,i):
				if i%x!=0:
					for j in range(2,int(x/2)+2):
						if x%j==0:
							k=1
							break
					if k==0:
						print(x)
						break
					k=0