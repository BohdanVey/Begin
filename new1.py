a=list(input())
suma=0.0
s=[0]
k=0
q=0
r=[]
d=0
for x in range(0,len(a)):
	try:
		a[x]=int(a[x])
		s[k]=s[k]*10+a[x]
		q=0
		if x==0:
			r.append("+")
	except:
		r.append(a[x])
		s.append(0)
		if q==0 and x!=0:
			k=k+1
		q=1

d=0
for x in range(len(r)):

	if r[d]=="^":
		s[d-1]=s[d-1]**s[d]
		r.pop(d)
		s.pop(d)
		d=d-1
	d=d+1
d=0
for x in range(len(r)):

	if r[d]=="*":
		s[d-1]=s[d-1]*s[d]
		r.pop(d)
		s.pop(d)
		d=d-1
	if r[d]=="/":
		s[d-1]=s[d-1]/s[d]
		r.pop(d)
		s.pop(d)
		d=d-1
	d=d+1	
for x in range(0,len(r)):
	if r[x]=="+":
		suma=suma+s[x]
	if r[x]=="-":
		suma=suma-s[x]

		
print(suma)

		

	