# a simple method to estimate pi using uniformly distributed random numbers

from random import random

def findPi(nthrows=100*1000*1000):
    count=0
    for i in range (nthrows):
        x=random()
        y=random()
        if x*x+y*y < 1: count = count+1
    return 4.0*count/nthrows


if __name__ == "__main__":
    estimate=findPi()
    print("estimate of pi",estimate)
    
