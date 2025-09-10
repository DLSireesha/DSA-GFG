class MyStack {
    int top=-1;
    int oper[100];
  public:
    void push(int x) {
        top++;
        oper[top]=x;
    }

    int pop() {
        if(top==-1) return -1;
        int y=oper[top];
        top--;
        return y;
        // code here
    }
};