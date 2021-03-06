def break_words(stuff):
	"""This function will break up words for us."""
	words = stuff.split(' ')
	return words

def sort_words(words):
    	"""Sorts the words."""
    	return sorted(words)

def print_first_word(words):
    	"""Prints the first word after popping it off."""
    	word = words.pop(1)
   	return word

def print_last_word(words):
    	"""Prints the last word after popping it off."""
    	word = words.pop() #To do
    	return word

#Trying
def sort_sentence(sentence):
    	"""Takes in a full sentence and returns the sorted words."""
    	words = break_words(sentence)
    	final = sort_words(words)
	return final
#To-DO
def print_first_and_last(sentence):
    	"""Prints the first and last words of the sentence."""
    	words = break_words(sentence)
    	a = print_first_word(words)
    	b = print_last_word(words)
	return a, b

def print_first_and_last_sorted(sentence):
    	"""Sorts the words then prints the first and last one."""
    	words = sort_sentence(sentence)
    	x = print_first_word(words)
    	y = print_last_word(words)
	return x , y

#Working
print "Let's practice everything."
print 'You\'d need to know \'bout escapes with \\ that do \n newlines and \t tabs.'


poem = """
\tThe lovely world
with logic so firmly planted
cannot discern \n the needs of love
nor comprehend passion from intuition
and requires an explantion
\n\t\twhere there is none.
"""

#Working
print "--------------"
print poem
print "--------------"

#Working
five = 10 - 2 + 3 - 6
print "This should be five: %d" % five


def secret_formula(started):
    jelly_beans = started * 500
    jars = jelly_beans / 1000
    crates = jars / 100
    return jelly_beans, jars, crates

#Working
start_point = 10000
beans, jars, crates = secret_formula(start_point)

print "With a starting point of: %d" % start_point
print "We'd have %d jeans, %d jars, and %d crates." % (beans, jars, crates)

#Working
start_point /=  10
beans, jars, crates = secret_formula(start_point)
#Working
print "We can also do that this way:"
print "We'd have %d beans, %d jars, and %d crabapples." %  (beans, jars, crates)


sentence = "All good\tthings come to those who weight."

print sentence # "Just for checking"

words = break_words(sentence)
sorted_words = sort_words(sentence)

first = print_first_word(words)
last = print_last_word(words)
sort_first = print_first_word(sorted_words)
sort_last = print_last_word(sorted_words)
sorted_words = sort_sentence(sentence)

print "First word:"
print first

print "Last word:"
print last

print "sort_first:"
print sort_first

print "sort_last:"
print sort_last

print "Sorted_words"
print sorted_words

print_first_and_last(sentence)

print_first_and_last_sorted(sentence)
