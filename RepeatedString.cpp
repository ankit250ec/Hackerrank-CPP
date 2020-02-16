// Complete the repeatedString function below.
long repeatedString(string s, long n) { //C++14
    return (count(s.begin(), s.end(), 'a')) * (n / s.size()) + 
        count(s.begin(), s.begin() + n % s.size(), 'a');
}
