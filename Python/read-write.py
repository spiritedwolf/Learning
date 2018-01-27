from sys import argv
script, file_name = argv

print "We're going to erase:%r" % file_name
print "If you don't want that hit (CTRL+C)"
print "If you do want that hit return(enter)"


raw_input("?")

print "Opening the file...."
target = open(file_name, 'w')

print "Truncating the file, Good bye!"
target.truncate()

print "Now type three lines:"
line_1 = raw_input("Line 1:") 
line_2 = raw_input("Line 2:") 
line_3 = raw_input("Line 3:") 


print "I'm going to write these to the file: %s" % file_name

target.write(line_1)
target.write("\n")

target.write(line_2)
target.write("\n")

target.write(line_3)
target.write("\n")

#print "Lets see what is looks like now"
#print target.read()

print "Closing it..."
target.close()

print "Lets read the file"
x = raw_input("$ ")

again_open = open(x)

print again_open.read()
