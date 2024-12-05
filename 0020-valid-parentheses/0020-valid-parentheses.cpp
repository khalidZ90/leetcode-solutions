class Solution {
public:
    bool isValid(string word) {
        std::stack<char> letter;
for (int i=0;i<word.length();i++){
        if (word[i]=='('||word[i]=='{'||word[i]=='['){
            letter.push(word[i]);
        }
else if (word[i]==')'||word[i]=='}'||word[i]==']'){
    if(letter.empty()){
return false;
    }
else if (word[i]==')'&&letter.top()=='('){
    
letter.pop();
}
else if (word[i]==']'&&letter.top()=='['){
    
letter.pop();
}
else if (word[i]=='}'&&letter.top()=='{'){
    
letter.pop();
}
else{
   
return false;

}
}

}
if(letter.empty()){
return true;
}

else 
return false;
}

    
};