class Solution {
public:
    string interpret(string command) {
        string ans="";
        for(int i=0;i<command.length();i++){
            if(command[i]=='(' and command[i+1]==')'){
                ans+='o';
                i++;
            }
            else if(command[i]=='(' and command[i+1]=='a' and command[i+2]=='l' and command[i+3]==')'){
                ans+='a';
                ans+='l';
                i=i+2;
            }
            else if(command[i]=='G'){
                ans+='G';
            }
        }
        return ans;
    }
};