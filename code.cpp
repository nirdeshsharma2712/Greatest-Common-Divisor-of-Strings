class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i = 0 ,j = 0 ;
        string check = "";
        vector<string> arr(1001,"");
        while(i<str1.size() && j<str2.size()){
            if(str1[i]==str2[j]){
                check += str1[i];
            }
            else return "";
            string temp1 = "" , temp2 = "";
            while(temp1.size()<str1.size()){
                temp1 += check;
            }
            while(temp2.size()<str2.size()){
                temp2 += check;
            }
            if(temp1==str1 && temp2==str2){
                arr[check.size()-1] = check;
            }
            i++;
            j++;
        }
        for(int i=1000;i>=0;i--){
            if(arr[i]!="") return arr[i];
        }
        return "";
    }
};
