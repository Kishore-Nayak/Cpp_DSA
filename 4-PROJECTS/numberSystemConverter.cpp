#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
class AnyToDec{
public:
    long binToDec(long bin){
        long result = 0;
        int i = 0;
        while(bin){
            result += (bin%10)*pow(2,i);
            bin /= 10;
            i++;
        }
        return result;
    }
    long octToDec(long oct){
        long result = 0;
        int i = 0;
        while(oct){
            result += (oct%10)*pow(8,i);
            oct /= 10;
            i++;
        }
        return result;
    }
    long hexToDec(string hex){
        long result = 0;
        int i = hex.size()-1;
        int j = 0;
        while(i >= 0){
            if(hex[i] - '0' < 10) result += (hex[i] - '0')*pow(16,j);
            else result += (hex[i]+10-'A')*pow(16,j);
            j++;
            i--;
        }
        return result;
    }
};
class DecToAny{
public:
    long decToBin(long dec){
        long result = 0;
        while(dec){
            result = result*10+dec%2;
            dec /= 2;
        }
        string str = to_string(result);
        reverse(str.begin(),str.end());
        result = stoi(str);
        return result;
    }
    long decToOct(long dec){
        long result = 0;
        while(dec){
            result = result*10+dec%8;
            dec /= 8;
        }
        string str = to_string(result);
        reverse(str.begin(),str.end());
        result = stoi(str);
        return result;
    }
    string decToHex(long dec){
        string result = "";
        while(dec){
            int temp = dec%16;
            if(temp < 10) result += to_string(temp);
            else result += (char)(temp-10 + 'A');
            dec /= 16;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
int main(){
    AnyToDec a1;
    DecToAny b1;
    long long bin,oct,dec;
    string hex;
    int x,y;
    cout<<"Enter the number system for the number you have : "<<endl;
    cout<<"1 : Binary"<<endl;
    cout<<"2 : Octal"<<endl;
    cout<<"3 : Decimal"<<endl;
    cout<<"4 : Hexadecimal"<<endl;
    cin>>x;
    switch(x){
        case 1:cout<<"Enter the number : ";
            cin>>bin;
            dec = a1.binToDec(bin);
            break;
        case 2:cout<<"Enter the number : ";
            cin>>oct;
            dec = a1.octToDec(oct);
            break;
        case 3:cout<<"Enter the number : ";
            cin>>dec;
            break;
        case 4:cout<<"Enter the number : ";
            cin>>hex;
            dec = a1.hexToDec(hex);
            break;
        default:cout<<"Invalid"<<endl;
    }
    long long binAns,octAns,decAns;
    string hexAns;
    cout<<"Enter the desired number system for conversion : "<<endl;
    cout<<"1 : Binary"<<endl;
    cout<<"2 : Octal"<<endl;
    cout<<"3 : Decimal"<<endl;
    cout<<"4 : Hexadecimal"<<endl;
    cin>>y;
    switch(y){
        case 1:binAns = b1.decToBin(dec);
            cout<<"Result : "<<binAns<<endl;
            break;
        case 2:octAns = b1.decToOct(dec);
            cout<<"Result : "<<octAns<<endl;
            break;
        case 3:decAns = dec;
            cout<<"Result : "<<decAns<<endl;
            break;
        case 4:hexAns = b1.decToHex(dec);
            cout<<"Result : "<<hexAns<<endl;
            break;
        default:cout<<"Invalid"<<endl;
    }
    return 0;
}