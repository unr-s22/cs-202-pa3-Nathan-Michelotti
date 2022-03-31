account: main.o account.o money.o
	g++ -std=c++11 -o account main.o account.o money.o

Money: main.o account.o money.o
	g++ -std=c++11 -o Money main.o account.o money.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

account.o: account.cpp
	g++ -std=c++11 -c account.cpp 

Money.o: Money.cpp
	g++ -std=c++11 -c Money.cpp 

