#include<iostream> 
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
if (cin.fail()) { cout << " Fail" << endl;
cin.clear();
cin.ignore();
cout << " Enter once more = ";
cin >> k;
}
if (k == 0) cout << " There is nothing to sum";
else {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
sum_k += number; i++;
}
while (i <= k) {
cout << " The total sum of " << k << " integers is: "  << sum_k;
}
return 0;
}
