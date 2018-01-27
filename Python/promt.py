from sys import argv

scriptname, user = argv

prompt = "spirit$ "

print "Hi %s , i'm %s's script" % (user, scriptname)
print "I did like to ask you few questions."
print "Do you like me %s?" % user
likes = raw_input(prompt)

print "Where do you live %s?" % user
lives = raw_input(prompt)

print "What kind of computer do you have?"
computer = raw_input(prompt)

print """
Alright , so you said you %r about liking me. 
You lives in %r. Now sure where that i thought.
And you have a %r computer. Nicec choice.
""" % (likes, lives, computer)

