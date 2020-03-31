#write a python function to test if a year is leap or not
#https://www.hackerrank.com/challenges/write-a-function/problem

def is_leap(year):
    leap = False
    
    if (year % 100 == 0):
        if year % 400 == 0:
            leap = True;
        else:
            return leap;
    elif year % 4 == 0:
        leap = True;
    
    return leap

year = int(input())
print(is_leap(year))
