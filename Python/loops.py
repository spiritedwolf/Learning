#A variable is declared: the_count , which contains 1 to 5 numbers in sorted way.
the_count = [1, 2, 3, 4, 5]
#A variable is declared: fruits , which contains some fruits name.
fruits = ["apple", "oranges", "pears", "apricots"]
#A variable is declared: change , which contains some numbers and some name.
change = [1, "pennies", 2, "dimes", 3, "quarters"]

#The first kind of for loop goes through a list.
for number in the_count:
	print "This is count:%r :: %r" % (number, the_count)

#Same as above
for fruit in fruits:
	print "A fruit of type: %s" % fruit

#Also we can go with mixed lists too.
#Notice we will use %r as we don't know what's in it.
for i in change:
	print "I got:%r" % i

#We can also build lists, first starts with an empty one.
elements = []

#Then use the range function to do 0 to 5 counts.
for q in range(1,7):
	print "Adding %r to the list" % q
	#append() is a functions that list understands
	elements.append(q)

#Print then out
for i in elements:
	print "Elements:%r" % i

#It will printout everything that is inside elements
print elements
