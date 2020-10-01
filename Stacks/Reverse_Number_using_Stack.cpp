void push_digits(int number) 
{ 
    while (number != 0)  
    { 
        st.push(number % 10); 
        number = number / 10; 
    } 
}
int reverse_number(int number) 
{
    push_digits(number); 
    int reverse = 0; 
    int i = 1;
    while (!st.empty())  
    { 
        reverse = reverse + (st.top() * i); 
        st.pop(); 
        i = i * 10; 
    }
    return reverse; 
} 
