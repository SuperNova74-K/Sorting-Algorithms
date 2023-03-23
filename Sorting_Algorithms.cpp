//
// Created by Khaled Waleed on 23-Mar-23.
//

#include "limits"
#include "algorithm"

namespace sortlib{
    template<typename T, int size>
    void insertionSort(T (&arr)[size]){

    }

    template<typename T, int size>
    void selectionSort(T (&arr)[size]){
        for (int firstUnsortedElement = 0; firstUnsortedElement < size - 1; ++firstUnsortedElement) {
            // find the smallest unsorted element

            int smallestUnsortedElementIndex = firstUnsortedElement;

            for (int i = firstUnsortedElement + 1; i < size; ++i) {
                if(arr[i] < arr[smallestUnsortedElementIndex]){
                    smallestUnsortedElementIndex = i;
                }
            }

            std::swap(arr[firstUnsortedElement], arr[smallestUnsortedElementIndex]);
        }
    }
}

