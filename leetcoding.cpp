class Solution {
public:
    int reverse(int x) {
     
         int ans=0, rem;
         while(x!=0){
             rem = x%10;
             x/=10;
             if(ans>INT_MAX/10 || ans<INT_MIN/10)
             return 0;
             ans = ans*10+rem;
         }
          return ans; 
    }
};

.............................................

lass Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<1)
        return 0;
        while(n!=1)
        {
            if(n%2==1)
            return 0;
            n=n/2;
        }
        return 1;
    }
};

......................................................
  class Solution {
public:
    int bitwiseComplement(int n) {
      if(n==0)
      return 1;
      int ans=0, rem, mul=1;
      while(n)
      {
          rem=n%2;
          rem=rem^1;
          n/=2;
          ans=ans+rem*mul;
          mul*=2;
      }
      return ans;
    }
};
......................................................................
  nim game
    class Solution {
public:
    bool canWinNim(int n) {
    if(n%4==0)
    return 0;
    else
    return 1;    
    }
};
