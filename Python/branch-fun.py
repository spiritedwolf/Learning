#Calling library sys and using/importing exit module
from sys import exit
#Now defining new function name: gold_room
def gold_room():
	print "This room is full of gold. How much do you take?" #Simple print line

	next = raw_input("$ ")	#Taking input from the user, and it will be stored in var next
	if "0" in next or "1" in next:	#Now checking if 0 or 1 is there in next 
		how_much = int(next)	#Then  it will convert the next input in int data type and it will be stored in var: how_much
	else: #Simple else statement
		dead("Man, learn to type a number.") #Calling dead() to print a line

	if how_much < 50:	#Now again checking if the value iof how_much is less then 50
		print "Nice, you are not greedy. Yu win!"	#If yes then it will print this  line.

	else:	#Simple else statement
		dead("You gready bastard") #Calling dead() to print a line

#Now defining new function name: bear_room
def bear_room():
	print "There is a bear here" #Simple print line
	print "The bear has a bunch of honey." #Simple print line
	print "The fat bear is in front of another door." #Simple print line
	print "How you are going to move the bear?" #Simple print line
	bear_moved = False #Telling bear_moved to False 

	while True: #Starting while loop which will run till the condition is "True"
		next = raw_input("$ ")	#Taking input from the user, and it will be stored in var next

		if next == "take honey": #Now checking if the value of next is equals to "take honey"
			dead("The bear looks at you then slaps your face off.") #Priniting line using dead()

		elif next == "taunt bear" and not bear_moved: #Now checking if the value of next is equals to taunt_bear and not beared moved.
			print "The bear has moved from the door, You can go through it now."
			bear_moved = True #Now changing the value of bear_moved  to True

		elif next == "taunt bear" and bear_moved: #Now checking if the value of next is equals to taunt_bear and beard moved also
			dead("The bear gets pissed off and chews your legs off.") #Priniting line using dead()

		elif next == "open door" and bear_moved:  #Now checking if the value of next is equals to open door and beared is moved
			gold_room() #When the above condition willl be true it will call gold_room()

		else: #Simple else statement
			print "I got no idea what that means." #Simple print statement

#Now defining new function name: cthulhu_room()
def cthulhu_room():
	print "Here you see the great evil-Mr.CTHULHU" #Simple print statement
	print "He, it, whatever stares at you and you go insane." #Simple print statement
	print "Do you flee for your life or eat your head." #Simple print statement

	next = raw_input("$ ")  #Taking input from the user, and it will be stored in var next
	if "flee" in next: #If flee is in next input
		start() #Then it will call this start()

	elif "head" in next: #If head is typed in the next 
		dead("Well that was tasty!") #Priniting line using dead()

	else: #Simple else statement
		cthulhu_room() #Calling function cthulhu_room() 

#Now defining new function name: dead with 1 argument
def dead(why): 
	print why, "Good Job!" #It will print out what ever is given as an argument with "Good job!" in last
	exit(0) #It will exit the program

#Now defining new function name: start()
def start():
	print "You are in a dark room." #Simple print statement
	print "There is a door to you. Right and left." #Simple print statement
	print "Which one do you take?" #Simple print statement

	next = raw_input("$ ") #Taking input from the user, and it will be stored in var next

	if next == "left": #If left is typed  in next then it will->
		bear_room()	#Call this function: bear_room()

	elif next == "right": #If right is typed then it will ->
		cthulhu_room()	#Call this function:  cthulhu_room()

	else: #Simple else statement
		dead("You stumb around the room until you starve") #It will print the line with death()

#Let the game begin's ;) 
start()


#So fucking boring stuff to write comment for every single line.
#PS- Spirited wolf lol :P
