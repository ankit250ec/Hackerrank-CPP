// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) { //C++14
    map<string, int> mapstr; //store the string and number of occurences

    for(auto s : magazine) //make the dictionary
    {
        auto it = mapstr.find(s);
        if(it == mapstr.end())            
            mapstr.insert({s, 1});            
        else
            it->second++;
    }

    for(auto s : note) //find in the dictionary
    {
        auto it = mapstr.find(s);
        if((it == mapstr.end()) || (it->second == 0)) 
        {           
           cout << "No" << endl;
           return;
        }
        else
            it->second--;
    }
    cout << "Yes" << endl;
}
