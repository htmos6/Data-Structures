#include "main.h"



int main()  {
    Stack<int> st;
    st.push(4);
    st.push(6);
    st.push(7);
    st.push(5);
    cout << "Empty: " << st.stack_empty() << " " << "Full: " << st.stack_full() << endl;
    st.push(24);
    st.push(42);
    cout << "Empty: " << st.stack_empty() << " " << "Full: " << st.stack_full() << endl;
    st.pop();
    st.peek();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << "Empty: " << st.stack_empty() << " " << "Full: " << st.stack_full() << endl;
    st.pop();
    cout << "Empty: " << st.stack_empty() << " " << "Full: " << st.stack_full() << endl;

    cout << "Display Stack: ";
    st.display_stack();

    return 0;
}
