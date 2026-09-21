class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        int n1,n2,n3;
        string str="";
        while(i>=0 && j>=0)
        {
            n1=num1[i]-'0';
            n2=num2[j]-'0';
            n3=n1+n2+carry;
            str+=(n3%10)+'0';
            carry=n3/10;
            i--,j--;
        }
        while(i>=0)
        {
            n3=num1[i]-'0'+carry;
            str+=(n3%10)+'0';
            carry=n3/10;
            i--;
        }
        while(j>=0)
        {
            n3=num2[j]-'0'+carry;
            str+=(n3%10)+'0';
            carry=n3/10;
            j--;
        }
       // str.reverse(str.begin(),str.end());
       if(carry>0)
       str+=carry+'0';
       int l=0;
       int r=str.size()-1;
       while(l<r)
       {
        swap(str[l],str[r]);
        l++,r--;
       }
        return str;
    }
};