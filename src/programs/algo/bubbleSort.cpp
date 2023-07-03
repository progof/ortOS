#include "bubbleSort.hpp"

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
        cout << "  " << array[i];
    }
    cout << "\n";
}

void displayBubbleSort()
{
    auto timeStart = chrono::steady_clock::now();

    cout << "\n\tThe name of the program => [Algo: Bubble Sort]\n" << endl;
    int data[] = {-2, 45, 0, 11, -9};

    // find array's length
    int size = sizeof(data) / sizeof(data[0]);
  
    bubbleSort(data, size);
  
    cout << "Sorted Array in Ascending Order:\n";  
    printArray(data, size);

    auto timeEnd = chrono::steady_clock::now();
    auto workTime = chrono::duration_cast<chrono::milliseconds>(timeStart-timeEnd);
    //chrono::duration<float> workTime = timeStart - timeEnd;
    cout << "Algo running time: " << workTime.count() << " s" << endl;
}