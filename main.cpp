#include "sortedList.cpp"
#include "sortedArray.cpp"
using namespace std; 
/**
Samuel Salas 
Programming assignment number: 5
Sorted list and sorted array
COSC III Data Structure 
The date
*/


int main() {
    SortedList sortedList;
    SortedArray sortedArray;
    
    // Question 1: Write a funcrion to comapre the 2 data structure
    int test_array[10]= {89,23,21,123,4,56,56,56,98,67};
    
    cout << "Sorted List: ";
    sortedList.printList();

    cout << "Sorted List: ";
    sortedArray.printArray();

    // Question 2:
    function 
        vaidatasortedCollections(sortedList,sortedArray): 
    for index in range (size of sortedArray):
    if sortedList.getValueAt(index):
== sortedArray.getValueAt(index):

        print(sortedList.getValue(index))
        else:
        print("warning mismatch at index" + index)
        break
    


    return 0;
}
