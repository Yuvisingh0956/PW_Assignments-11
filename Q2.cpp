//Q2. Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and create a function which returns a vector of the non-overlapping intervals that cover all the intervals in the input.

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& v) {
    vector<vector<int>> ans;
    int j = 0;
    ans.push_back(v[0]);
    for(int i = 1; i < v.size(); i++){
        if (ans[j][1] >= v[i][0]){
            ans[j][1] = max(ans[j][1],v[i][1]);
        }
        else{
            j++;
            ans.push_back(v[i]);
        }
    }
    return ans;
}

int main(){
    vector<vector<int>> v = {{1,4},{2,3},{5,8},{6,9}};
    vector<vector<int>> ans = merge(v);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    } 

    return 0;
}