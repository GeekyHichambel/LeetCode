class Solution {
public:
    string interpret(string command) {
     string ans="";
     for (int i=0;i<command.size();i++){
         if (command[i]=='(' and command[i+1]==')'){
             ans+="o";
             i++;
         }
         else if (command[i]=='(' and command[i+1]!=')'){
             ans+="al";
             i+=3;
         }
         else{
             ans+="G";
         }
     }
     return ans;   
    }
};
