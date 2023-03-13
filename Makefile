TARGET = ortOS
BUILD_DIR = build
CXX = g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

guess_x.o: ./src/programs/education/guess_x.cpp ./src/programs/education/guess_x.hpp build_dir
	$(CXX) -c ./src/programs/education/guess_x.cpp -o ./$(BUILD_DIR)/guess_x.o

compound_interest.o: ./src/programs/finance/compound_interest.cpp ./src/programs/finance/compound_interest.hpp build_dir
	$(CXX) -c ./src/programs/finance/compound_interest.cpp -o ./$(BUILD_DIR)/compound_interest.o

run: guess_x.o compound_interest.o ./src/interface.hpp build_dir
	g++ ./src/interface.cpp ./$(BUILD_DIR)/guess_x.o ./$(BUILD_DIR)/compound_interest.o -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*