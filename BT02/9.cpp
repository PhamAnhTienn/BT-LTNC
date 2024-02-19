/*https://www.hackerrank.com/challenges/rectangular-game/problem*/

int solve(vector<vector<int>> steps) {
   int rows = steps.size();

    int r = 1000001; 
    int c = 1000001; 
    
    for (int i = 0; i < rows; i++) {
        r = min(r, steps[i][0]);
        c = min(c, steps[i][1]);
    }
    long long res = r*c;
    return res;
}