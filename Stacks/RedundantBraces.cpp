int Solution::braces(string A) {
    
    stack<char> eq;
    // int count = 0;
    stack<char> brac;
    int n = A.size();
    int i=0;
    while(i<n){
        
        if(A[i] == '+'||A[i] == '-'||A[i] == '*'||A[i] == '/' || A[i] =='('){
            // count++;
            eq.push(A[i]);
        }else if(A[i] == ')'){
            if(eq.top() == '('){
                return 1;
            }
            // count --;
            while(!eq.empty() && eq.top() != '('){
                eq.pop();
            }
            if(!eq.empty())
                eq.pop();
        }
        i++;
    }
    return 0;
}
