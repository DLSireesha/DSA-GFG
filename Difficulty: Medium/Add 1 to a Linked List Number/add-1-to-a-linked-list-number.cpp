//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data % 10;
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
// User function template for C++

/*

struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* cur=head;
        while(cur!=NULL){
            Node* forw=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forw;
        }
        return prev;
    }
    Node* incr(Node* head){
        Node* last=NULL,*ptr=head;
        int carry=0;
        bool first=true;
        while(ptr!=NULL){
            int s=0;
            if(first){
                s=ptr->data+1;
                first=false;
            }
            else{
                s=ptr->data+carry;
            }
            if(s>=10){
                carry=1;
                s=s%10;
            }
            else{
                carry=0;
            }
            ptr->data=s;
            last=ptr;
            ptr=ptr->next;
        }
        if(carry){
            Node* n=new Node(carry);
            last->next=n;
        }
        return head;
    }
    Node* addOne(Node* head) {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        head=incr(head);
        head=reverse(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }

        int data = arr[0];
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends