#include <iostream>
#include <vector>
using namespace std;

//1,2,3
//subset: 1, 12, 123, 13, 2, 23, 3

void dequy(vector<vector<int>>&subset, vector<int>original, int pos, vector<int>tmp){
    subset.push_back(tmp);
    for(int i = pos; i < original.size(); i++){
        tmp.push_back(original[i]);
        dequy(subset, original, i + 1, tmp);
        tmp.pop_back();
    }
}

int main(){
    vector<int>tmp;
    vector<vector<int>>subset;
    vector<int>original;
    original.push_back(1);
    original.push_back(2);
    original.push_back(3);

    dequy(subset, original, 0, tmp);
    for(int i = 0; i < subset.size(); i++){
        cout << "subset " << i + 1 << ": ";
        for(int j = 0; j < subset[i].size(); j++){
            cout << subset[i][j] << " ";
        }
        cout << endl;
    }
    Infantry infatry = new ...
    
    return 0;
}
