#Defining a new function name cheese_and_crackers with 2 parameters: cheerse_count and 
#Boxes_of_cracker
def cheese_and_crackers(cheese_count, boxes_of_cracker):
	#This will print out the value of cheese_count argument
	print "You have %d cheese!" % cheese_count
	#This will print the number of boxes.
	print "You have %d boxes of cracker." % boxes_of_cracker
	#It will print rubbish.....
	print "Man that's enogh is enough for the party."
	print "Get a blancket\n" # It will also print rubish but in end it will 
				 # Start  with a new line

#It will print the line
print "We can just give the function number directly:"
#We are passing the numbers as an arguments to cheese_and_crackers
cheese_and_crackers(20, 30)

#It willl also print the line
print "Or, we can use the variables from our script."
#We are declaring two variables name #amount_ch and #amount_cr and we 
#are giving values to them
amount_cr = 10
amount_ch = 50

#We are calling the function cheese_and_crackers by giving the local variables
# to them

cheese_and_crackers(amount_ch, amount_cr)

#It willl also print the line
print "We can even do math inside"
#We are passing the arguments with simple maths
cheese_and_crackers(10 -20 , 5 + 6)

#It willl also print the line
print "We can combine the two, var and math:"
#We are passing the combination the variable and math.
cheese_and_crackers(amount_ch + 100 , amount_cr + 100)

print "----------------------PRACTICE---------------------"

def practice(arg1, arg2):
	print "Ok, bro this is the arg 1:%d" % arg1
	print "And this one is the arg 2:%d" % arg2
	print "Okay see you, tata"


local1= 10
local2 = 20

print "This is with local variable"
practice(local1, local2)

print "This one will ask you to enter number:"
x = int(raw_input('Var:1$ '))
y = int(raw_input('Var:2$ '))

print "So, here you go"
practice(x , y)




