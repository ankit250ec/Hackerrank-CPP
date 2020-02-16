// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) { //o(nlogn)
    set<int> set_ar;
    int pair = 0;
    for(auto val : ar)
    {
        auto r = set_ar.insert(val);
        if(!r.second)
        {
            set_ar.erase(r.first);
            pair++;
        }
    }
    return pair;
}
