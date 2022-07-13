import pygame

for i in range(5):
    print("Hello World")

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