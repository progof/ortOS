TARGET = ortOS
BUILD_DIR = build
CXXFLAGS = -std=c++11
CXX = g++

build_dir:
	if [ ! -d $(BUILD_DIR) ]; then mkdir $(BUILD_DIR); fi

guess_x.o: ./src/programs/education/guess_x.cpp ./src/programs/education/guess_x.hpp build_dir
	$(CXX) -c ./src/programs/education/guess_x.cpp -o ./$(BUILD_DIR)/guess_x.o

mult_big_num.o: ./src/programs/education/mult_big_num.cpp ./src/programs/education/mult_big_num.hpp build_dir
	$(CXX) -c ./src/programs/education/mult_big_num.cpp -o ./$(BUILD_DIR)/mult_big_num.o

compress.o: ./src/programs/education/compress.cpp ./src/programs/education/compress.hpp build_dir
	$(CXX) -c ./src/programs/education/compress.cpp -o ./$(BUILD_DIR)/compress.o

compound_interest.o: ./src/programs/finance/compound_interest.cpp ./src/programs/finance/compound_interest.hpp build_dir
	$(CXX) -c ./src/programs/finance/compound_interest.cpp -o ./$(BUILD_DIR)/compound_interest.o

hungry_dog.o: ./src/programs/game/hungry_dog.cpp ./src/programs/game/hungry_dog.hpp build_dir
	$(CXX) -c ./src/programs/game/hungry_dog.cpp -o ./$(BUILD_DIR)/hungry_dog.o	

education_controller.o: ./src/programs/education/education_controller.cpp ./src/programs/education/education_controller.hpp build_dir
	$(CXX) -c ./src/programs/education/education_controller.cpp -o ./$(BUILD_DIR)/education_controller.o

finance_controller.o: ./src/programs/finance/finance_controller.cpp ./src/programs/finance/finance_controller.hpp build_dir
	$(CXX) -c ./src/programs/finance/finance_controller.cpp -o ./$(BUILD_DIR)/finance_controller.o

game_controller.o: ./src/programs/game/game_controller.cpp ./src/programs/game/game_controller.hpp build_dir
	$(CXX) -c ./src/programs/game/game_controller.cpp -o ./$(BUILD_DIR)/game_controller.o

run: game_controller.o finance_controller.o education_controller.o hungry_dog.o compress.o mult_big_num.o guess_x.o compound_interest.o ./src/interface.hpp build_dir
	g++ ./src/interface.cpp ./$(BUILD_DIR)/game_controller.o ./$(BUILD_DIR)/finance_controller.o ./$(BUILD_DIR)/education_controller.o ./$(BUILD_DIR)/hungry_dog.o ./$(BUILD_DIR)/compress.o ./$(BUILD_DIR)/mult_big_num.o ./$(BUILD_DIR)/guess_x.o ./$(BUILD_DIR)/compound_interest.o --std=c++17 -o ./$(BUILD_DIR)/$(TARGET) && ./$(BUILD_DIR)/$(TARGET)

clean:
	rm -r ./$(BUILD_DIR)/*