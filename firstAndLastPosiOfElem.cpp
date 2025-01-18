#include <iostream>
#include <vector>
#include <algorithm> // For sorting
using namespace std;
class B_Search
{
public:
    vector<int> firstAndLast(vector<int> &arr, int n, int target)
    {
        int start = 0, end = n - 1, mid;
        int first = -1, last = -1;
        // Finding First
        while (start <= end)
        {
            mid = start + (end - start) / 2;
            if (arr[mid] == target)
            {
                first = mid;
                end = mid - 1;
            }
            else if (arr[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        if (first == -1)
        {
            return {-1, -1};
        }
        // Finding Last Element

        start = first, end = n - 1;
        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (arr[mid] == target)
            {
                last = mid;
                start = mid + 1;
            }
            else if (arr[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return {first, last};
    }
};

int main()
{
    B_Search s_obj;
    vector<int> arr = {1, 3, 5, 7, 8, 8};

    // Sort the array before binary search
    sort(arr.begin(), arr.end());

    int size = arr.size();
    int targetVal;
    cout << "Enter the value of target: ";
    cin >> targetVal;

    vector<int> Solution = s_obj.firstAndLast(arr, size, targetVal);

    if (Solution[0] == -1)
    {
        cout << "Target not found!";
    }
    else
    {
        cout << "First Occurrence : " << Solution[0] << endl;
        cout << "Last Occurrence : " << Solution[1] << endl;
    }
    return 0;
}
