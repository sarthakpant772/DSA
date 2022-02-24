// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    struct MinHeapNode* buildHuffmanTree(string s,vector<int> data,int size){
        struct MinHeap * minHeap=createAndBuildMinHeap(s,data,)
    }
    vector<string> huffmanCodes(string S, vector<int> f, int N)
    {
        // Code here
        struct MinHeapNode* root=buildHuffmanTree(s,f,N);

    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string S;
        cin >> S;
        int N = S.length();
        vector<int> f(N);
        for (int i = 0; i < N; i++)
        {
            cin >> f[i];
        }
        Solution ob;
        vector<string> ans = ob.huffmanCodes(S, f, N);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends