//
// Created by Khaled Waleed on 23-Mar-23.
//

#include "limits"
#include "algorithm"

namespace sortlib{
    template<typename T, int size>
    void insertionSort(T (&arr)[size]){
        for (int firstNotSorted = 1; firstNotSorted < size; ++firstNotSorted) {
            if(arr[firstNotSorted] < arr[firstNotSorted - 1]){
                T temp = arr[firstNotSorted];

                int location = firstNotSorted;

                for (; location > 0 && temp < arr[location - 1] ; location--) {
                    arr[location] = arr[location - 1];
                }

                arr[location] = temp;
            }
        }
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

