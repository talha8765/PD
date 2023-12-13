def oddishOrEvenish(number):
    sum = 0
    temp = 0
    while(number>0):
       temp = number % 10
       number = number / 10
       sum += temp
        
    if(sum%2==1):
        return False
    else:
        return True
    
def main():
    number = int(input("Enter number: "))
    result = oddishOrEvenish(number)
    if result == False:
        print(number,"is Oddish")
    else:
        print(number,"is Evenish")
        
if __name__ == "__main__":
    main()