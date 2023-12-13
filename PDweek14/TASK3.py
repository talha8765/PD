def totalPopulation(name,area):
    population = float((area*100)/148940000)
    return population

def main():
    name = input("Enter the country's name: ")
    area = int(input("Enter the contry's area: "))
    population = float(totalPopulation(name,area))
    print(name,"is",round(population,2),"% of the total world's landmass")
    
if __name__ == "__main__":
    main()