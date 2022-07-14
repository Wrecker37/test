import pygame


"""print hellow world 5 times"""
def print_hello_world():
    for i in range(5):
        print("Hello World")

"""ask user for a string and print backwards"""
def reverse_string():
    string = input("Enter a string: ")
    string = string[::-1]
    print(string)

"""ask user for a string and determine if it is a palindrome"""
def is_palindrome():
    string = input("Enter a string: ")
    if string == string[::-1]:
        print("Yes, it is a palindrome")
    else:
        print("No, it is not a palindrome") 


print_hello_world()
reverse_string()

"""
string = input("Enter a string: ")


print("input string: " + string)

stringToList = list(string)

i=0
j= len(string) - 1

while(i <= j):
    temp = stringToList[i]
    stringToList[i] = stringToList[j]
    stringToList[j] = temp
    i+=1
    j-=1
    #for debug print("in while" + str(i) + " " + str(j))

reversedString = ''.join(stringToList)

print("\nreversed string: " + reversedString)

"comment"
"""