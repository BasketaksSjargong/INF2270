with open("100.tall", 'r') as infile:
    numbers = [int(i) for i in infile]   
print "Sum: " , sum(numbers)
print "Max: " , max(numbers)
