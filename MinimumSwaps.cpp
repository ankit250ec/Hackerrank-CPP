// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr) { //C++14
    int swap = 0;
    for(int i = 0; i < arr.size();)
    {
        if(arr[i] != i + 1)
        { 
            std::swap(arr[i], arr[arr[i] - 1]);
            swap++;
            if(arr[i] < i + 1)  continue; //restart the comparison from original location             
        }
        i++;
    }
    return swap;
}
