#User function Template for python3

class Solution:
    def jugglerSequence(self, n):
        sequence = [n]
        while n != 1:
            n = int(n ** 0.5) if n % 2 == 0 else int((n ** 3) ** 0.5)
            sequence.append(n)
        return sequence


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())

        ob = Solution()
        arr = ob.jugglerSequence(n)
        for i in (arr):
            print(i, end=" ")
        print()

# } Driver Code Ends