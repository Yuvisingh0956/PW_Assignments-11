//Q3. Given an array of intervals where arr[i] = [start, end], return the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.

#include<iostream>
#include<vector>
using namespace std;

int non_overlapping (vector<vector<int>> &v);

int main()
{
    vector<vector<int>> v = {{1, 2}, {5, 10}, {18, 35}, {40, 45}};
    cout<< non_overlapping(v) <<endl;

    return 0;
}

int non_overlapping (vector<vector<int>> &v)
{
    int count = 0;
    for(int i = 0; i < v.size()-1; i++)
    {
        if ((v[i][1] > v[i+1][0]) && (v[i][1] > v[i+1][1]))
        {
            v[i+1][0] = v[i][0];
            v[i+1][1] = v[i][1];
            count++;
        }

        else if ((v[i][1] > v[i+1][0]) && (v[i][1 < v[i+1][1]]))
        {
            v[i][1] = v[i+1][1];
            count++;
        }
    }
    return count;
}