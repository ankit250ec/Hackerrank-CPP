// Complete the sherlockAndAnagrams function below.
int sherlockAndAnagrams(string s) { //C++14
    int count = 0;
    for(auto k = 0; k < s.length(); k++) //k will go from 0 to 8, when k = 8 there are two sub strings
    {
        for(auto i = 0; i + k < s.length() - 1; i++) 
        {
            string substr = s.substr(i, k + 1);
            sort(substr.begin(), substr.end());
            for(auto j = i + 1; j + k < s.length(); j++)
            {
                string substr2 = s.substr(j, k + 1);
                sort(substr2.begin(), substr2.end());
                if(substr == substr2)   count++;
            }
        }
    }
    return count;
}
