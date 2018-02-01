#Declaring variables
people = 30
cars = 40
buses = 15

#It's checking if 40 > 30 = true: So it will print that line.
if cars > people:
	print "We should take the cars."

#It's checking else 40 < 30 = false:So it will not print that line.
elif cars < people:
	print "We should not take the cars."

#Else if both statement do not work then, print this line.
else: 
	print "We can't decide."

#Now it's checking if 15 > 40 = false:So it will not print that.
if buses > cars:
	print "That's too many buses."

#Now it's checking if 15 < 40 = True:So it will print this line.
elif buses > cars:
	print "Maybe we could take the buses."

#If both statemnt gets false then it will print this line.
else:
	print "We still can't decide."

#Same now 30 > 15 which is true so it will print that line
if people > buses:
	print "Ok, Let's just take the buses."

#Else it will print this line if the above condition is false.
else:
	print "Fine, let's stay home then."

