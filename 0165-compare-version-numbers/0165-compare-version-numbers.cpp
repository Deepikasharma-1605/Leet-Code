class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        string part1;
        vector<int> arr1;
        while(getline(ss1 , part1 , '.')){
            int x = stoi(part1);
            arr1.push_back(x);
        }
        stringstream ss2(version2);
        string part2;
        vector<int> arr2;
        while(getline(ss2 , part2 , '.')){
            int x = stoi(part2);
            arr2.push_back(x);
        }
        int i = 0;
        int j = 0;
        while(i < arr1.size() || j < arr2.size()){
            int x = 0;
            int y = 0;
            if(i < arr1.size()){
                x = arr1[i];
            }
            if(j < arr2.size()){
                y = arr2[i];
            }
            if(x < y){
                return -1;
                break;
            }else if(x > y){
                return 1;
                break;
            }
            i++;
            j++;
        }
        return 0;
    }
};