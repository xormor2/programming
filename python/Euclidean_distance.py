#!/usr/bin/python3
#Code copyleft Lauri Friberg 2021
import math
print("Code copyleft Lauri Friberg 2021.")
print("This program calculates the Euclidean (Pythagorean) distance between [x0, y0] and [x1, y1].")
x0=float(input("Enter the value for x0: "))
y0=float(input("Enter the value for y0: "))
x1=float(input("Enter the value for x1: "))
y1=float(input("Enter the value for y1: "))
#The modern algebraic formula for the Euclidean distance:
d=math.sqrt(((x1-x0)*(x1-x0))+((y1-y0)*(y1-y0)))
print(f"{d}")
