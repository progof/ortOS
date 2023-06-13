TARGET = ortOS
BUILD_DIR = build
PROG_LIST = hungry_dog.o compress.o mult_big_num.o guess_x.o compound_interest.o animal.o bubbleSort.o 
BUILD_EDU = ./$(BUILD_DIR)/compress.o ./$(BUILD_DIR)/mult_big_num.o ./$(BUILD_DIR)/animal.o
BUILD_FIN = ./$(BUILD_DIR)/compound_interest.o
BUILD_GMS = ./$(BUILD_DIR)/guess_x.o ./$(BUILD_DIR)/hungry_dog.o
BUILD_ALG = ./$(BUILD_DIR)/bubbleSort.o
CXXFLAGS = -std=c++17
CXX = g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

guess_x.o: ./src/programs/game/guess_x.cpp ./src/programs/game/guess_x.hpp build_dir
	$(CXX) -c ./src/programs/game/guess_x.cpp -o ./$(BUILD_DIR)/guess_x.o

mult_big_num.o: ./src/programs/education/mult_big_num.cpp ./src/programs/education/mult_big_num.hpp build_dir
	$(CXX) -c ./src/programs/education/mult_big_num.cpp -o ./$(BUILD_DIR)/mult_big_num.o

animal.o: ./src/programs/education/animal.cpp ./src/programs/education/animal.hpp build_dir
	$(CXX) -c ./src/programs/education/animal.cpp -o ./$(BUILD_DIR)/animal.o

compress.o: ./src/programs/education/compress.cpp ./src/programs/education/compress.hpp build_dir
	$(CXX) -c ./src/programs/education/compress.cpp -o ./$(BUILD_DIR)/compress.o

compound_interest.o: ./src/programs/finance/compound_interest.cpp ./src/programs/finance/compound_interest.hpp build_dir
	$(CXX) -c ./src/programs/finance/compound_interest.cpp -o ./$(BUILD_DIR)/compound_interest.o

hungry_dog.o: ./src/programs/game/hungry_dog.cpp ./src/programs/game/hungry_dog.hpp build_dir
	$(CXX) -c ./src/programs/game/hungry_dog.cpp -o ./$(BUILD_DIR)/hungry_dog.o	

bubbleSort.o: ./src/programs/algo/bubbleSort.cpp ./src/programs/algo/bubbleSort.hpp build_dir
	$(CXX) -c ./src/programs/algo/bubbleSort.cpp -o ./$(BUILD_DIR)/bubbleSort.o

run: $(PROG_LIST) ./src/interface.hpp build_dir
	g++ $(CXXFLAGS) ./src/interface.cpp $(BUILD_EDU) $(BUILD_FIN) $(BUILD_GMS) $(BUILD_ALG) $(CXXFLAGS) -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*