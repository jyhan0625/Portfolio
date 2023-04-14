char = ['0','1','2','3','4','5','6','7','8','9',
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

ascii = input()

for i in range(64):

    if i<10:
        if char[i] == ascii:
            print(i+48)
            break

    elif i>=10 and i<36:
        if char[i] == ascii:
            print(i+55)
            break
    else:
        if char[i] == ascii:
            print(i+61)
            break
