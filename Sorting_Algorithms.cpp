//
// Created by Khaled Waleed on 23-Mar-23.
//

#include <stdexcept>
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

    template<typename T, int size>
    void bubbleSort(T (&arr)[size]){
        while (true){
            int swaps = 0;

            for (int i = 1; i < size; ++i) {
                if(arr[i] < arr[i - 1]){
                    swaps++;
                    std::swap(arr[i], arr[i - 1]);
                }
            }

            if(swaps == 0)
                break;
        }
    }

    template<typename T, int size>
    void shellSort(T (&arr)[size]){

        int increment = 1; // knuth increment
        while(increment <= size / 3){ // Get the proper increment for  size
            increment = increment * 3 + 1;
        }

        while(increment > 0){

            for (int i = increment; i < size; ++i) {
                T temp = arr[i];
                int j = i;

                while(j >= increment && arr[j - increment] > temp){
                    arr[j] = arr[j - increment];
                    j -= increment;
                }

                arr[j] = temp;
            }

            increment /= 3;
        }

    }

    template<typename T, int size>
    void countSort(T (&arr)[size]){
        if(not size)
            return;

        if (typeid(arr[0]) != typeid(int))
        {
            throw std::invalid_argument("Invalid argument type, count sort only takes integers");
        }


        int maxEelemnt = arr[0], minElement = arr[0];

        for (int i = 0; i < size; ++i) {
            maxEelemnt = std::max(maxEelemnt, arr[i]);
            minElement = std::min(minElement, arr[i]);
        }

        int *freqArray = new int[abs(minElement) + abs(maxEelemnt) + 1] {0};

        for (int i = 0; i < size; ++i) {
            freqArray[arr[i] + abs(minElement)]++;
        }

        int label = 0;

        for (int i = 0; i < abs(minElement) + abs(maxEelemnt) + 1; ++i) {
            while(freqArray[i]--){
                arr[label++] = i - abs(minElement);
            }
        }

        delete[] freqArray;
    }


    template<typename T>
    void merge_two_lists(T arr[], int start, int mid, int end){

        int const leftSize = mid - start + 1;
        int const rightSize = end - mid;

        T* leftArray = new T[leftSize], * rightArray = new T[rightSize];

        for (int i = 0; i < leftSize; ++i) {
            leftArray[i] = arr[start + i];

        }

        for (int i = 0; i < rightSize; ++i) {
            rightArray[i] = arr[mid + 1 + i];
        }


        int label = start;
        int x = 0, y = 0;

        while (x < leftSize && y < rightSize){
            if(leftArray[x] <= rightArray[y]){
                arr[label++] = leftArray[x++];
            }else{
                arr[label++] = rightArray[y++];
            }
        }

        while (x < leftSize){
            arr[label++] = leftArray[x++];
        }

        while (y < rightSize){
            arr[label++] = rightArray[y++];
        }


        delete[] leftArray;
        delete[] rightArray;
    }

    template<typename T, int size>
    void mergeSort(T (&arr)[size], int start , int end){
        if(start >= end){
            return;
        }

        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge_two_lists (arr, start, mid, end);
    }

}








