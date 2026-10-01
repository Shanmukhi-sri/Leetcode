class Solution {
public:
    bool prime(int n){
        if( n==0 || n==1) return 0;
        if(n%2==0) return 0;
        if( n==3 || n==2) return 1;
        for( int i=2;i*i<=n;i++){
            if( n%i==0) return 0;
        }
        return 1;
    }
    int make(int n){
        string a = to_string(n);
        string b = a;
         if(b.size() >1)b.pop_back();
        reverse(b.begin(), b.end());
       
        return stoi(a+b);
    }
    int primePalindrome(int n) {
        if(n<=2) return 2;
        if( n<=3) return 3;
        if(n<=5) return 5;
        if( n<=7) return 7;
        if( n<=11) return 11;
        for( int i=1;;i++){
            int pre = make(i);
        cout << pre << " ";
            if( pre >=n && prime(pre))
            {
                return pre;
            }
        }
        return -1;
    }
};