all:
	g++ -std=c++11 driver.cpp ProduceStand.cpp Vegetable.cpp Fruit.cpp Person.cpp Date.cpp Address.cpp -o test -Wall -g
