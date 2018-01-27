#It's importing argv  from sys module
from sys import argv

#Arguments name decleration
script, filename = argv

#Declaring variable #txt which is opening file of our "Argument 2".
txt = open(filename)
#It will print/read the file $txt
print txt.read()

#Normal print line.
print "Type the filename again"

#Declaring new variable $file_again which will read the input from the user
file_again = raw_input("$ ")

#Declaring new variable $txt_again which will open the file the name we passed to file_again
txt_again = open(file_again)

print txt_again.readline()
#It will read the $txt_again varible-> the file whihc we have passed
#print txt_again.read()
