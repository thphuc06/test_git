#include <iostream>
#include <vector>
using namespace std;

void change(vector<int>&arr){
    for(int i = 0; i < arr.size(); i++){
        arr[i] = 2;
    }
}

void recur(vector<vector<int>>&res, vector<int>tmp, vector<int>arr, int pos){
    res.push_back(tmp);
    for(int i = pos; i < arr.size(); i++){
        tmp.push_back(arr[i]);
        recur(res, tmp, arr, i + 1);
        tmp.pop_back();
    }
}


int main(){
    vector<int>arr = {1,2,3};
    vector<vector<int>>res;
    vector<int>tmp;
    recur(res, tmp, arr, 0);
    for(const auto &x : res){
        for(const auto &y: x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}