a=[]
sz=[]
def root(a,i):
	while(i!=a[i]):
		a[i]=a[a[i]]
		i=a[i]
	return i
def quickunion(a,p,q):

	i=root(a,p)
	j=root(a,q)
	if i==j:
		return
	if sz[i]<sz[j]:
		a[i]=j
		sz[j]+=sz[i]
	else:
		a[j]=i
		sz[i]+=sz[j]
	a[j]=i
def connected(a,p,q):
	return root(a,p)==root(a,q)
"""
for x in range(0,10):
	a.append(x)
	sz.append(1)
quickunion(a,0,5)
quickunion(a,5,6)
quickunion(a,1,2)
quickunion(a,1,7)
quickunion(a,8,3)
quickunion(a,3,4)
quickunion(a,4,9)
print(connected(a,0,5))
print(connected(a,4,9))
"""
