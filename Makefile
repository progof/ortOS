TARGET = ortOS
BUILD_DIR = build
BUILD_APP = ./$(BUILD_DIR)/BigNumberProgram.o ./$(BUILD_DIR)/HelloWorldProgram.o 
#BUILD_CORE = ./$(BUILD_DIR)/core.o 
#BUILD_UI = ./$(BUILD_DIR)/ui.o 
CXXFLAGS = -std=c++17
CXX = g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

#core.o: ./src/core/core.hpp build_dir
#	$(CXX) -c ./src/core/core.hpp -o ./$(BUILD_DIR)/core.o

#ui.o: ./src/ui/ui.hpp ./src/core/core.hpp build_dir
#	$(CXX) -c ./src/ui/ui.hpp -o ./$(BUILD_DIR)/ui.o

BigNumberProgram.o: ./src/programs/BigNumberProgram.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/BigNumberProgram.cpp -o ./$(BUILD_DIR)/BigNumberProgram.o

HelloWorldProgram.o: ./src/programs/HelloWorldProgram.cpp ./src/core/core.hpp build_dir
	$(CXX) -c ./src/programs/HelloWorldProgram.cpp -o ./$(BUILD_DIR)/HelloWorldProgram.o

#IProgramController.o: ./src/programs/IProgramController.cpp ./src/programs/IProgramController.hpp  ./src/core/core.hpp build_dir
#	$(CXX) -c ./src/programs/IProgramController.cpp -o ./$(BUILD_DIR)/IProgramController.o

run: BigNumberProgram.o HelloWorldProgram.o ./src/main.cpp build_dir
	g++ $(CXXFLAGS) ./src/main.cpp $(BUILD_APP) $(CXXFLAGS) -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*
