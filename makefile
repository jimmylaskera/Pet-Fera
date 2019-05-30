all: main.o seller.o category.o item.o menu.o utils.o readfile.o
	g++ -Wall -ansi -pedantic -std=c++11 ./bin/*.o -o ./bin/program.out

readfile.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/readfile.cpp -I ./inc -o ./bin/readfile.o

seller.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/Seller.cpp -I ./inc -o ./bin/seller.o

menu.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/Menu.cpp -I ./inc -o ./bin/menu.o

category.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/Category.cpp -I ./inc -o ./bin/category.o

item.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/Item.cpp -I ./inc -o ./bin/Item.o

utils.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/utils.cpp -I ./inc -o ./bin/utils.o

main.o:
	g++ -Wall -ansi -pedantic -std=c++11 -c ./src/main.cpp -I ./inc -o ./bin/main.o

clear:
	rm ./bin/*.o ./bin/*.out ./data.csv

run:
	./bin/program.out