class Solution {
public:
    double myPower(double x, long n) {
        if(n==0) return 1.0;
        
        if(n==1) return x;
        if(n<0) return myPower(1/x,-n);
        double result=myPower(x*x,n/2);
        if(n%2) 
        result*=x;
        return result;
        }
    
    double myPow(double x, int n){
        return myPower(x,n);
    }
            
    
};