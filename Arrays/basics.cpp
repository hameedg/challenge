#include <iostream>
using namespace std;

int largestelement(int arr[], int n)
{
    int res = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
            res = i;
    }
    return arr[res];
}
// revise elif condition of second largest function
int secondlargest(int arr[], int n)
{
    int res = -1, largest = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return arr[res];
}
bool sorted_or_not(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
            return false;
    }
    return true;
}
void reverse_array(int arr[], int n)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int removeduplicates_fromsorted(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Size left" << endl;
    return res;
}

void move_zereos_to_end(int arr[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reverse_array_with_end_points(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}

void left_rotate_by_d(int arr[], int n, int d)
{
    reverse_array_with_end_points(arr, 0, d - 1);
    reverse_array_with_end_points(arr, d, n - 1);
    reverse_array_with_end_points(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void leader_in_an_array(int arr[], int n)
{
    int curr_leader = arr[n - 1];
    cout << curr_leader << " ";

    for (int i = n - 2; i >= 0; i--)
    {
        if (curr_leader < arr[i])
        {
            curr_leader = arr[i];
            cout << curr_leader << " ";
        }
    }
}
int main()
{
    int n, arr[100], d;
    cout << "Enter size::" << endl;
    cin >> n;
    cout << "Enter elemets" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Is there any d:" << endl;
    cin >> d;
    cout << "largest:";
    cout << largestelement(arr, n) << endl;
    cout << "Second largest:";
    cout << secondlargest(arr, n) << endl;
    cout << "sorted or not:" << endl;
    cout << bool(sorted_or_not(arr, n)) << endl;

    cout << "Remove duplicates:" << endl;
    cout << removeduplicates_fromsorted(arr, n);
    cout << endl;

    cout << "Left rotate by d::" << endl;
    left_rotate_by_d(arr, n, d);
    cout << endl;

    cout << "Leaders in an arrays:" << endl;
    leader_in_an_array(arr, n);
    cout << endl;

    cout << "Move zereos to one end" << endl;
    move_zereos_to_end(arr, n);
    cout << endl;

    cout << "reverse:" << endl;
    reverse_array(arr, n);
    cout << endl;

    return 0;
}

// time complexity O(n)