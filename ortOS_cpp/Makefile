TARGET = ortOS
BUILD_DIR = build
BUILD_APP = ./$(BUILD_DIR)/BigNumberProgram.o ./$(BUILD_DIR)/BubbleSortAlgo.o ./$(BUILD_DIR)/CharCompress.o  ./$(BUILD_DIR)/CompoundInterest.o
CXXFLAGS = -std=c++17
CXX = g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

BigNumberProgram.o: ./src/programs/BigNumberProgram.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/BigNumberProgram.cpp -o ./$(BUILD_DIR)/BigNumberProgram.o

BubbleSortAlgo.o: ./src/programs/BubbleSortAlgo.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/BubbleSortAlgo.cpp -o ./$(BUILD_DIR)/BubbleSortAlgo.o

CharCompress.o: ./src/programs/CharCompress.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/CharCompress.cpp -o ./$(BUILD_DIR)/CharCompress.o

CompoundInterest.o: ./src/programs/CompoundInterest.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/CompoundInterest.cpp -o ./$(BUILD_DIR)/CompoundInterest.o	

run: BigNumberProgram.o BubbleSortAlgo.o CharCompress.o CompoundInterest.o ./src/main.cpp build_dir
	g++ $(CXXFLAGS) ./src/main.cpp $(BUILD_APP) -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*
