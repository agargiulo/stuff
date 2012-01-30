#!/usr/bin/env python2.7
from random import randint

quotes = []

with open("quotes.txt", "ro") as quotesFile:
	for quote in quotesFile:
		quotes.append(quote.strip())

quoteID = randint(0, len(quotes) - 1)
print(quotes[quoteID])
