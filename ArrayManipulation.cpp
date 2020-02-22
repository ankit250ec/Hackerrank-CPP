// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries) { //C++14
    long ** p = new long * [n];

    for(int i = 0; i < n; i++)
        p[i] = new long [2] {0};

    int maxFirstLocation = 0;
    for(auto s : queries)
    {
        p[s[0] - 1][0] += s[2];
        p[s[1] - 1][1] += s[2];
        maxFirstLocation = std::max(maxFirstLocation, s[0]);
    }

    auto value = p[0][0];
    auto maxValue = value;
    for(int j = 1; j < maxFirstLocation; j++)
    {
        value += p[j][0] - p[j-1][1];
        maxValue = std::max(maxValue, value);
    }

    delete[] p;
    return maxValue;
}
