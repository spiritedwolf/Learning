#Printing normal text
print "Let's practice everthing."
#Printing normat text but we are using escape also to print " ' ", " \ " and  tab.
print "You\'d need to know \'bout escape with \\ that do \n newlines and \t tabs."

#Declaring new variable $one_song_by_ed_sheeran which contain some lyrics from his song
one_song_by_ed_sheeran = """
Tell me that you turned down the man \n Who asked for your hand
\'Cause you\'re waiting for me
and i know, you\'re gonna be away a while
But I\'ve got no plans at all to leave.
"""
#We will print " - " 24 times 
print "------------------------"
#It will print one_song_by_ed_sheeran
print one_song_by_ed_sheeran
#We will print " - " 24x times again but this time we will use multiply
print "-" * 24

#We are declaring a var $five which will do simple math
five = 10 -2 + 3 -6
#We are printing text + $five
print "This should be five: %d " % five

#We are defining new function name:secret_formula with 1 argument:started
def secret_formula(started):
	jelly_beans = started * 500 #Declaring jelly_beans var
	jars = jelly_beans / 1000   #Declaring Jars var
	crates = jars /100          #Declaring cractes var
	return jelly_beans, jars, crates #returning all these three var.

#We are declaring new variable with value 10k
start_point = 10000
#We are saying beans, jars, creates all equals to 10k
beans, jars, crates = secret_formula(start_point)

#It will print $start_point
print "With a starting point of: %d" % start_point
#It will print " ' ", and beans, jars, crates value
print "We\'d have %d beans , %d jars, and %d crates." % (beans , jars , crates)

#Now we are saying start_point = start_point / 10
start_point /=10
#Printing text and all again..... 
print "We can also do that this way:"
print "We'd have %d beans, %d jars, and %d crates." % secret_formula(start_point)

