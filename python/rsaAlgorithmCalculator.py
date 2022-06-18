
Alphabet = [ "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K",
"L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X",
"Y", "Z", ".", "?", " ", "’", "_", "!", "@", "^", ",", "$", "(", ")",
"#", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
"n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" ]



def myencrypt(text):
    encyrptText = [] # list of encrypted characters
    for i in text: # iterate through each letter in the text
        charCode = Alphabet.index(i) # find the ordinal number of the letter
        encryptCode = charCode**7 % 65 # do charCode to the power of 7 mod 65
        encyrptText.append(Alphabet[encryptCode]) # add to the list of encrypted characters
    encyrptText = " ".join(encyrptText) # make the list into text for easier reading (feature of python)
    return encyrptText # help to print out the code

def mydecrypt(text): # Same as myencrypt but with variable names changed (if s was different we would have to change the exponent here)
    encyrptText = []
    for i in text:
        charCode = Alphabet.index(i)
        decryptCode = charCode**7 % 65 # (if s was different we would have to change the exponent here)
        encyrptText.append(Alphabet[decryptCode])
    encyrptText = " ".join(encyrptText)
    return encyrptText
