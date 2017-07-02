
def ostriv(a,x,y,k):
	a[x][y]=k;
	p=4;
	s+=1;
	if a[x-1][y]=='*':
		ostriv(a,x-1,y);
		p=p-1;
	if a[x+1][y]=='*':
		ostriv(a,x+1,y);
		p=p-1;
	if a[x][y-1]=='*':
		ostriv(a,x,y-1);
		p=p-1;
	if a[x][y+1]=='*':
		ostriv(a,x,y+1);
		p=p-1;
	