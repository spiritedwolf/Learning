#Variables declared
cars = 100
space_in_a_car = 4.0
spaceincar = 4
drivers = 30
passengers = 90
cars_not_driven = cars - drivers
cars_driven = drivers
carpool_cap = cars_driven * space_in_a_car

carpool = cars_driven * spaceincar
avg=passengers / cars_driven

#Priniting variables
print "There are " , cars , " cars available" 
print "There are only ", drivers , "drivers available"
print "There will be ", cars_not_driven , " empty cars today"
print "We can transport", carpool_cap, " people today"
print "We have ", passengers, "to carpool today"
print "We need to put about", avg, "in  each car"

print "Space in a car is:" , spaceincar
print "Car pool raion:" , carpool
