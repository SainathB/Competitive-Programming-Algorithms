t=raw_input()
t=(int)(t)
for test in xrange(t):
	n=raw_input()
	n=raw_input()
	n=(int)(n)
	#print n
	sum=0
	for i in xrange(n):
		a=raw_input()
		a=(int)(a)
		sum+=a
	if(sum%n):
		print "NO"
	else:
		print "YES"
		
