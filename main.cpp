#include <bits/stdc++.h>
using namespace std;

// Constants
const int SCREEN_WIDTH = 900;
const int SCREEN_HEIGHT = 750;

// Array
const int arrSize = 100;
const int rectSize = 9;

int arr[arrSize];
int Barr[arrSize];

bool complete = false;

// SDL_Window *window = NULL;
// SDL_Renderer *renderer = NULL;

class CAlgorithms {
    public:
        void bubbleSort();
        void mergeSort();
        void merge2SortedArrays();
        void insertionSort();
        void selectionSort();
        void quickSort();
        void arrayPartition();
        void swapSelectionSort();
};
#include "ujjwal_211105.h"
#include "aamya_211112.h"
#include "deep_211132.h"
#include "aryaman_211130.h"
#include "vinayak_211117.h"

int main(int argc, char *args[])
{
    // intro(); to be called from vinayak's header

    while (1)
    {
        cout << '\n';
        if (controls())
            execute();
        else
        {
            cout << "\nEXITING PROGRAM.\n";
            break;
        }
    }

    return 0;
}