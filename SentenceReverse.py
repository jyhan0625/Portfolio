# Do not put special characters between words. Specail character is only possible in the end of sentence.
# For example,
# Did you understand? (o)
# Hey, I am Alex. (x)
# Hey I am Alex.(o)


sentence = input().lower().split()
special = None

if not 'a' <= sentence[-1][-1] <= 'z':
    special = sentence[-1][-1]
    sentence[-1] = sentence[-1][:-1]

counter = len(sentence) -1

while counter >= 0:

    if counter == len(sentence) -1:
        print(sentence[counter][0].upper() + sentence[counter][1:], end=" ")
        counter -= 1

    else:
        if counter == 0:
            print(sentence[counter] + special)
            counter -= 1
        else:
            print(sentence[counter], end=" ")
            counter -= 1

