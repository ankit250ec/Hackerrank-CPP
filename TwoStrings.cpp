// Complete the twoStrings function below.
string twoStrings(string s1, string s2) { //C++14
        map<char, int> mapstr; //store the string and number of occurences

    for(auto s : s1) //make the dictionary 
        mapstr.insert({s, 1}); //if more than 1 occurence, no need to store as not needed           

    for(auto s : s2) //find in the dictionary
    {
        auto it = mapstr.find(s);
        if((it != mapstr.end()))         
           return "YES";
    }
    return "NO";
}
