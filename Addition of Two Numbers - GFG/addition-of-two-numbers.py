#User function Template for python3
class Solution:
    def addition (ob,A,B):
        # code here 
        ob=A+B
        return ob

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input())
    for _ in range (t):
        
        A,B=map(int,input().strip().split(" "))

        ob = Solution()
        print(ob.addition(A,B))
# } Driver Code Ends