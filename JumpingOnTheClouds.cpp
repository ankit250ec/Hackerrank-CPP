// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) { //C++14
    int jumpNum = 0;
    for(int i = 0; i < c.size() - 1;)
    {
        if(c[i+2] == 1) i++;
        else i = i + 2;
        jumpNum++;
    }
    return jumpNum;
}
