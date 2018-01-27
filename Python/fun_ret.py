def add(a, b):
	print "ADDING: %d + %d" % (a, b)
	return a + b

def sub(a, b):
	print "SUBSTRACTING: %d from %d" % (a, b)
	return b - a

def mul(a, b):
	print "MULTIPLICATION: %d x %d" % (a, b)
	return a * b

def div(a , b):
	print "DIVIDE: %d / %d" % (a, b)
	return a / b

print "Let's do some math with these functions."

age = add(30, 5)
height = sub(78, 4)
weight = mul(90, 2)
iq = div(100, 2)

print "Age: %d ,\nHeight:%d ,\nWeight:%d ,\nIQ:%d \n" % (age, height, weight , iq)


print "Here is the puzzle"

what = add(age , sub(height, mul(weight, div(iq, 2))))

print "Thanks becomes: " , what,"Can you do it by hand?"

