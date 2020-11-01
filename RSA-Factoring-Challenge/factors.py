#!/usr/bin/env python3
""" Factorize as many possible into a product of 2 smaller numbers"""
from sys import argv


with open(argv[1], "r") as f:
    for x in f:
        if (int(x) % 2) is 0:
            p = int(x) / 2
            print("{}={}*2".format(x[:-1], int(p)))
        elif (int(x) % 5) is 0:
            p = int(x) / 5
            print("{}={}*5".format(x[:-1], int(p)))
        elif (int(x) % 3) is 0:
            p = int(x) / 3
            print("{}={}*3".format(x[:-1], int(p)))
        elif (int(x) % 7) is 0:
            p = int(x) / 7
            print("{}={}*7".format(x[:-1], int(p)))
        else:
            n = int(x) ** 0.5
            p = int(n) + 1
            q = int(n)
            while (p * q != int(x)):
                if (p * q < int(x)):
                    p += 1
                else:
                    q -= 1
            print("{}={}*{}".format(x[:-1], int(p), int(q)))
