from sys import argv
script, number1, number2 = argv
def addition():
	x = int(number1) + int(number2)
	print  "Add:%d" % x


def multiplication(arg1, arg2):
	a = int(number1)*int(number2)
	print "Mul: %d" % a

def substraction(arg1):
	b = int(number2) - int(number1)
	print "Sub:%r" %  b

def div(arg2):
	c= float(number1) / float(number2)
	print "Div:%f " % c

#def print_none():
#	print "I am an  enginner, i have 
addition()
multiplication('7', '4')
substraction('1')
div(2)
