// Complete the countTriplets function below.
long countTriplets(vector<long> arr, long r) { //C++14
    map<long, long> lmap, rmap; //we can use both ordered or unordered maps
    long count = 0;
    for(long val : arr) rmap[val]++; //find the frequencies   
    for(long val : arr)
    {
        rmap[val]--;
        auto lval = lmap[val / r];
        auto rval = rmap[val * r];
        if((lval && (val % r == 0)) && rval)   count += lval* rval;
        lmap[val]++;
    }
    return count;
}
