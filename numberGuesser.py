#!/usr/bin/python3

# Stupid number guessing program.

from random import randint

numberToGuess = randint(1,100)

theyGotItWrong = True
print("Try to guess the number I am thinking of.")
while(theyGotItWrong):
   numberGuessed = int(input("Take a guess between 1 and 100: "))
   if (numberGuessed == numberToGuess):
      print("You got it! WOOHOO!!")
      theyGotItWrong = False
   elif (numberGuessed <= numberToGuess):
      print("Too low, try again")
   else: #elif (numberGuessed >= numberToGuess):
      print("Too high, try again")


