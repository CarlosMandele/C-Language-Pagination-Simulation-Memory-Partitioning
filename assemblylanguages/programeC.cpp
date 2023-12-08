//gcd(a,b) = max[k, tal que k é divisor de a e k divisor de b]
unsigned int gcd (unsigned int a, unsigned int b) {
    if(a==0 && b==0)
       b = 1;
    else if(b==0)
          b = a;
    else if(a!=0)
           while (a!=b)
             if (a<b) b -= a;
             else
                 a -= b;
    return b;  
}