def lengthCounter(number):
    count = 0
    while(number!=0):
        number = number//10
        count = count+1
    return count
    
def main():
    number = int(input("Enter the number: "))
    result = lengthCounter(number)
    if result == 0:
        print("The length of",number,"is 1")
    else:
        print("The length of",number,"is",result)
    
if __name__ == "__main__":
    main()
        