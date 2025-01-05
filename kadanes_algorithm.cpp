#include <iostream>
#include <climits>
using namespace std;
int kadanes_algorithm(int arr[], int size)
{
    int current_sum = 0;   // storing the current sum
    int max_sum = INT_MIN; // maximum sum

    for (int i = 0; i < size; i++)
    {
        current_sum += arr[i]; // adding sub-arrays in current sum
        if (current_sum > max_sum)
        {
            max_sum = current_sum;
        }
        if (current_sum < 0)// main point of kadane's algorithm , if there negative number , don't add it
        {
            current_sum = 0;
        }
    }

    return max_sum;
}

int main()
{
    int arr[] = {3, 4, -8, 4, 2, -1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]); // finding the size of an array

    cout << "The maximum sum subarray sum is : " << kadanes_algorithm(arr, size); // ans = 17
}