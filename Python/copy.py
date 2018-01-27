#importing argv module from sys library
from sys import argv
#importing exists module from os.path library
from os.path import exists

#declaring arguments variables
script , from_file , to_file = argv

#print the 2nd and 3rd arguments
#print "Coping from %s to %s" % (from_file, to_file)

#Declaring $in_file variable for opening file from 2nd variable
in_file = open(from_file)

#Declaring vaiable $indata for reading the opened file.
indata = in_file.read()

#Print out the size of the file in bytes , and it' s using len function

#print "The input file is %d bytes long." % len(indata)

#Printing and checking if the 3rd argument file is valid or not, if not it will create file with the name
#print "Does the output file exist? %r" % exists(to_file)
#Printning
#print "Ready, hit return(ENTER) to continue, CTRL+C to abort"

#Just normal ..
#raw_input("? ")

#Declaring $out_file  variable which will open the file that we have passed in 3rd argument with write policy
out_file = open(to_file, 'w')
#It will write the file in out.file
out_file.write(indata)

#Rubish....
print "Alright, all done"

#Closing the file that we had opened 
out_file.close();in_file.close()

#opening the file to read + declaring variable $x
#x = open(to_file)

#Print x file
#print x.read()
