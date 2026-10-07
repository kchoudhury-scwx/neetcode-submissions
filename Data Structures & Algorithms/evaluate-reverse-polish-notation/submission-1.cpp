class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> rpn;
       static const unordered_set<string> operators = {"+", "-", "*", "/"};
       for(string& t:tokens)
       {
        if(operators.find(t)!=operators.end())
        {
            int a=rpn.top();
            rpn.pop();
            int b=rpn.top();
            rpn.pop();
            int res;
            if(t=="+")
            res=a+b;
            else if(t=="-")
            res=b-a;
            else if(t=="*")
            res=a*b;
            else
            res=b/a;
            rpn.push(res);
        }
        else
        {
            rpn.push(stoi(t));
        }
       }
       return rpn.top();
    }
};
