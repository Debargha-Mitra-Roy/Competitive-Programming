int firstOccurrance(vector<int> &arr, int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else
        {
            if (arr[mid] < key)
                start = mid + 1;

            else
                end = mid - 1;
        }
    }

    return ans;
}

int lastOccurrance(vector<int> &arr, int size, int key)
{
    int start = 0, end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else
        {
            if (arr[mid] < key)
                start = mid + 1;

            else
                end = mid - 1;
        }
    }

    return ans;
}

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int k)
{
    pair<int, int> pr;

    pr.first = firstOccurrance(arr, n, k);
    pr.second = lastOccurrance(arr, n, k);

    return pr;
}