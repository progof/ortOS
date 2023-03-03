TARGET = ortOS
BUILD_DIR = build
CXX= g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

guess_x.o: ./src/programs/guess_x.cpp build_dir
	$(CXX) -c ./src/programs/guess_x.cpp -o ./$(BUILD_DIR)/guess_x.o	

run: guess_x.o build_dir
	$(CXX) ./src/interface.cpp ./$(BUILD_DIR)/guess_x.o -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*	