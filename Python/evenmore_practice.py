#Now defining new function name: break_words(stuff) with one argument
def break_words(stuff):
	#A kind of description	
	"""This function will break up words for us.""" 
	#Taking input from the user, and it will be stored in variable: words 
	words = stuff.split(' ')
	#It will return words
	return words

#Now defining new function name: sort_words(words) with one argument
def sort_words(words):
	#A kind of description	
	"""Sorts the word"""
	#It will return words after sorting- It's using sorted() function 	
	return sorted(words)

#Now defining new function name: print_first_words(words) with one argument
def print_first_words(words):
	#A kind of description	
	"""prints the first word after poping it off."""
	#It will pop out the very first word that is inside the words varibale and the output will be stored in the variable word	
	word = words.pop(0)
	#It will return word
	print word

#Now defining new function name: print_last_word(words) with one argument
def print_last_word(words):
	"""Print the last word after popping it off."""
	words = break_words(sentence)
	return sort_words(words)

#Now defining new function name: print_first_and_last(sentence) with one argument
def print_first_and_last(sentence):
	#A kind of description
	"""Prints the first and last words of the sentence."""
	#It will call the break_words(arg) and the sentence will be given as an argument. In last the out will be stored in the words variable.	
	words = break_words(sentence)
	#Now its calling print_first_word adn print_last_word functions and words is given as an argument
	print_first_word(words)
	print_last_word(words)

#Now defining new function name: print_first_and_last_sorted(sentence) with one argument
def print_first_and_last_sorted(sentence):
	#A kind of description
	"""Sorts the words then prints the first and last one """
	#It will call the sort_sentence(arg) and the sentence will be given as an argument. In last the out will be stored in the words variable.
	words = sort_sentence(sentence)
	#Now its calling print_first_word adn print_last_word functions and words is given as an argument	
	print_first_word(words)
	print_last_word(words)

#Now declaring new varibale: ok which contain some lines to print.
ok = """
Hello, this is spirited wolf.
Whats your name? Are you Joe?
No? Why why?
"""

#It will print the break_words function with the argument given to it.
print break_words(ok)
