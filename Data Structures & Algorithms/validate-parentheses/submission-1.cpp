class Solution {
public:
    bool isValid(string s) {
        stack<char> mem;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                mem.push(s[i]);
            }
            else{
                //check out if mem is empty
                if(mem.empty()) {
                    return false;
                }

                char last_elem = mem.top();
                mem.pop();
                if(s[i] == ')'){
                    if(last_elem != '('){
                        return false;
                    }
                }
                else if(s[i] == '}'){
                    if(last_elem != '{'){
                        return false;
                    }
                }//last_elem == ']'
                else{
                    if(last_elem != '['){
                        return false;
                    }
                }
            }
        }
        return mem.empty();
    }
};
