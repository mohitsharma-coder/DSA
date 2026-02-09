class Solution {
public:
    string removeOccurrences(string s, string part) {

         while (s.find(part) != string::npos)//npos(no position) means value not found 
         {
            s.erase(s.find(part),part.length());
         }
         return s;
    }
};
//s.find(part) return the first occurence position where number found
//s.erase(strt,end) kha se kha tak value delete karna hai 