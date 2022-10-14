#!/usr/bin/python3

import math, sys
from math import *
import re

#                      MESSAGE -H                          #

def message_groundhog():
    print("SYNOPSIS")
    print("\t./groundhog period\n")
    print("DESCRIPTION")
    print("\tperiod\tthe number of days defining a period")
    sys.exit(0)


#                      START FONCTION TEMPERATURE INCREASE AVERAGE                          #

def TIAFct(ArrayTemp):
    arg = int(sys.argv[1])

    if (len(ArrayTemp) <= arg):
        valuereturn =  "nan"
        return valuereturn
    else:
        value = 0
        for i in range(len(ArrayTemp) - arg, len(ArrayTemp)):
            ArrayValue = ArrayTemp[i] - ArrayTemp[i - 1]
            if (ArrayValue > 0): 
                value += ArrayValue 
            else:
                value += 0
        try:
            value /= arg
        except ZeroDivisionError:
            value = 0
        return value

def PrintTIA(ArrayTemp):
    arg = int(sys.argv[1])
    x = TIAFct(ArrayTemp)

    if (len(ArrayTemp) <= arg):
        print("g=", end='')
        print(x, end='\t\t')
        return x
    else:
        print("g=", end='')
        print("%.2f" % x, end='\t\t')
        return x

#                      END FONCTION TEMPERATURE INCREASE AVERAGE                            #




#                      START FONCTION RELATIVE TEMPERATURE EVOLUTION                        #


def RTEFct(ArrayTemp):
    arg = int(sys.argv[1])

    if (len(ArrayTemp) <= arg):
        valuereturn =  "nan"
        return valuereturn
    elif (ArrayTemp[len(ArrayTemp) - arg - 1] == 0):
        value = 0
        return value
    else:
        value = (((ArrayTemp[-1] - ArrayTemp[len(ArrayTemp) - arg - 1])/ArrayTemp[len(ArrayTemp) - arg - 1]) * 100)
        return value

def printRTE(ArrayTemp, ArraySwitch):
    arg = int(sys.argv[1])
    x = RTEFct(ArrayTemp)
    ArraySwitch.append(x)

    if (len(ArrayTemp) <= arg):
        print("r=", end='')
        print(x, end='')
        print("%", end='\t\t')
        return ArraySwitch
    elif x == 0:
        print("r=", end='')
        print(x, end='')
        print("%", end='\t\t')
        return ArraySwitch
    else:
        print("r=", end='')
        print(round(x), end='')
        print("%", end='\t\t')
        return ArraySwitch

#                      END FONCTION RELATIVE TEMPERATURE EVOLUTION                        #



#                      START FONCTION STANDART DEVIATION                                  #

def SDFct(ArrayTemp):
    arg = int(sys.argv[1])
    if arg == 0:
        arg = 1
    sizeArray = len(ArrayTemp)
    x = 0
    y = 0

    if (len(ArrayTemp) <= arg - 1):
        valuereturn =  "nan"
        return valuereturn
    else:
        for i in range(sizeArray - arg, sizeArray):
            x += ArrayTemp[i]
            y = y + pow(ArrayTemp[i], 2)
        value = math.sqrt((y/arg) - pow((x/arg), 2))
        return value

def printSD(ArrayTemp, ArraySwitch, CountSwitch):
    arg = int(sys.argv[1])
    x = SDFct(ArrayTemp)

    if (len(ArrayTemp) <= arg - 1):
        print("s=", end='')
        print(x)
        return CountSwitch
    else:
        print("s=", end='')
        if arg == 0:
            print("%.2f" % x)
            return CountSwitch
        elif (ArraySwitch[-1] != "nan" and  ArraySwitch[-2] != "nan" and ArraySwitch[-3] != "nan" and ArraySwitch[-4] != "nan"):
            CountSwitch = FindSwitch(ArraySwitch, x, CountSwitch)
            return CountSwitch
        else:
            print("%.2f" % x)
            return CountSwitch

#                      END FONCTION STANDART DEVIATION                                  #




#                      START FONCTION FIND SWITCH                                  #

def FindSwitch(ArraySwitch, x, CountSwitch):
    if (ArraySwitch[-1] < 0 and ArraySwitch[-2] > 0 and ArraySwitch[-3] > 0 and ArraySwitch[-4] > 0):
        if (ArraySwitch[-2] > ArraySwitch[-3]) or (ArraySwitch[-2] < ArraySwitch[-3]):
            print("%.2f" % x, end='\t\t')
            print("a switch occurs")
            CountSwitch += 1
            return CountSwitch
    elif (ArraySwitch[-1] > 0 and ArraySwitch[-2] < 0 and ArraySwitch[-3] < 0 and ArraySwitch[-4] < 0):
        if (ArraySwitch[-2] > ArraySwitch[-3]) or (ArraySwitch[-2] < ArraySwitch[-3]):
            print("%.2f" % x, end='\t\t')
            print("a switch occurs")
            CountSwitch += 1
            return CountSwitch
    else:
        print("%.2f" % x)
        return CountSwitch

#                      END FONCTION FIND SWITCH                                  #


#                      START INPUT USER GESTION                                 #

def check_float_input(x):
    try:
        float(x)
        return True
    except ValueError:
        return False

def getTempUser(ArrayTemp, ArraySwitch, CountSwitch, ArrayWeird, count_input):
    try:
        InputUser = input()
        Value = 0
        if InputUser.isnumeric() or check_float_input(InputUser):
            if InputUser.isnumeric():
                ArrayTemp.append(Value)
                Value = int(InputUser)
                count_input += 1
            else:
                Value = float(InputUser)
                ArrayTemp.append(Value)
                count_input += 1
            PrintTIA(ArrayTemp)
            ArraySwitch = printRTE(ArrayTemp, ArraySwitch)
            CountSwitch = printSD(ArrayTemp, ArraySwitch, CountSwitch)
            getTempUser(ArrayTemp, ArraySwitch, CountSwitch, ArrayWeird, count_input)
        elif count_input < int(sys.argv[1]):
            sys.exit(84)
        elif(InputUser == "STOP"):
            print("Global tendency switched %d times" % CountSwitch)
            print("5 weirdest values are ", end='')
            print(ArrayWeird)
            sys.exit(0)
        else:
            print("Only number authorized, try again", file=sys.stderr)
            sys.exit(84)
    except EOFError:
        exit(84)

#                      END INPUT USER GESTION                                 #



#                      MAIN FONCTION                                          #
def main():
    ArrayTemp = []
    ArraySwitch = []
    CountSwitch = 0
    ArrayWeird = [0, 0, 0, 0, 0]
    count_input = 0

    try:
        if len(sys.argv) == 2 and sys.argv[1] == "-h":
            message_groundhog()
        elif len(sys.argv) == 2 and sys.argv[1].isnumeric():
            getTempUser(ArrayTemp, ArraySwitch, CountSwitch, ArrayWeird, count_input)
        else:
            print("Error in input or argument check with -h", file=sys.stderr)
            sys.exit(84)
    except KeyboardInterrupt:
        sys.exit(0)
main()