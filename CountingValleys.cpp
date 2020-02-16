// Complete the countingValleys function below.
int countingValleys(int n, string s) { //C++14
    int cnt = 0;
    int valley = 0;
    int state = 0;
    enum class Direction { descend, level, ascend };
    Direction dir = Direction::level;
    if(n < 2 && n > 10e6)
    {
        cout << "improper input" << endl;
    }
    for(auto str : s)
    {
        switch(str)
        {
        case 'U':
            if(dir == Direction::level && cnt == 0)
            {
                dir = Direction::ascend;                
            }
            else if (dir == Direction::descend && cnt == -1) 
            {
                dir = Direction::level; //when we reach sea level
                valley++;
            }
            cnt++;
            break;
        case 'D':
            if(dir == Direction::ascend && cnt == 1)
            {
                dir = Direction::level;
            }
            else if (dir == Direction::level && cnt == 0) 
            {
                dir = Direction::descend;
            }
            cnt--;
            break;
        default:
            cout << "error" << endl;
            break;
        }
    }
    return valley;

}
