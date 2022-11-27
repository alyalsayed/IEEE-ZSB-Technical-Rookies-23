//--------------------------------------------------------------------------
/* A code to implement the insertion sort algorithm
--time comlexity
* 1-Best case is  O(N) when the array is sorted SO the part of while loop won't occur
* 2-Average case o(N^2)
* 3-worst case are o(N^2) , WORST when array is reversely sorted
*Space complexity is O(1) as we sort in the same array
* 1-we divide the array into two parts sorted , unsorted (left is sorted and right is not)
* 2-the first element is cosidered sorted 
* 3-we start with element 2 (first element in unsorted part) to insert it into its right place
    it needs to be inserted by comparing it with its left neighbor.
* Insertion sort is stable algorithm
* stable sorting algorithm maintains the relative order of the items when dublicate numbers are existed
*/
//---------------------------------------------------------------------------
public static void insertionSort(int arr[])
        {
                int n = arr.length;//get length of the array
                int key=0,j=0;
                for (int i = 1; i < n; i++) {
                        key = arr[i];//index of unsorted elements(elements to be sorted)
                        j = i - 1;//index of last sorted element
            // iterate to find the right postion of unsorted element in the left part
            //if the array is needed to be in increasing order
                        while (j >= 0 && arr[j] > key) {
                                arr[j + 1] = arr[j];
                                j = j - 1;
                                

                        }
                        arr[j + 1] = key;
                }
               
        }