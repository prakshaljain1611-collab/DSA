class Solution {
public:
     int pre(char ch){
            if(ch=='+' || ch=='-')return 1;
            if(ch=='*' || ch=='/')return 2;
            return 0;
        }
        void solve(stack<int>&nums,stack<char>&op){
            int b=nums.top();
            nums.pop();
            int a=nums.top();
            nums.pop();
            char ope=op.top();
            op.pop();
            if(ope=='+'){
                nums.push(a+b);
            }
            else if(ope=='-'){
                nums.push(a-b);
            }
            else if(ope=='*'){
                nums.push(a*b);
            }
            else {
                nums.push(a/b);
            }
        }
    int calculate(string s) {
        stack<char>op;
        stack<int>nums;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                continue;
            }
            if(isdigit(s[i])){
                int num=0;
                while(i<s.size() && isdigit(s[i])){
                    num=num*10+(s[i]-'0');
                    i++;
                }
                nums.push(num);
                i--;
            }
            else{
                while(!op.empty() && pre(op.top())>=pre(s[i])){
                    solve(nums,op);
                }
                op.push(s[i]);
            }
        }
         while (!op.empty()) {
            solve(nums, op);
        }

        return nums.top();
    }
};