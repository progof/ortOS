// BubbleSortAlgo.cpp

#include "../core/core.hpp" 

class BubbleSortAlgo : public IProgram {
public:
    BubbleSortAlgo() : IProgram("BubbleSortAlgo", "Программа, которая выводит на экран приветствие.") {}

void bubbleSort(int array[], int size)
{ 
    // loop to access each array element
    for (int step = 0; step < size; ++step)
    {  
        // loop to compare array elements
        for (int i = 0; i < size - step; ++i)
        {
            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1]) 
            {
                // swapping elements if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// print array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << "  " << array[i];
    }
    std::cout << "\n";
}

    void run() override {
        std::cout << "\n\tThe name of the program => [Algo: Bubble Sort]\n" << std::endl;
        int data[] = {-2, 45, 0, 11, -9};

         // find array's length
         int size = sizeof(data) / sizeof(data[0]);
  
        bubbleSort(data, size);
  
        std::cout << "Sorted Array in Ascending Order:\n";  
        printArray(data, size);
    }
};

void registerBubbleSortAlgo(IProgramController& controller) {
    BubbleSortAlgo* program = new BubbleSortAlgo();
    controller.registerProgram(program);
}
