message = 'I am spirited wolf.'

key = 6

mode = 'encrypt'

translate = ''

letters = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

message = message.upper()

for symbol in message:
	if symbol in letters:
		num = letters.find(symbol)
		if mode == 'encrypt':
			num = num + key
		elif mode == 'decrypt':
			num = num - key

		if num >= len(letters):
			num = num - len(letters)
		elif num < 0:
			num = num + len(letters)

		translate = translate + letters[num]

	else:
		translate = translate + symbol

print (translate)