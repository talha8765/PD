def overAndBalls(balls):
    totalOvers = balls/6
    return totalOvers
def main():
    balls = int(input("Enter the number of balls: "))
    totalOvers = overAndBalls(balls)
    print("Total overs for",balls,"balls is",round(totalOvers,1))
    
if __name__ == "__main__":
    main()