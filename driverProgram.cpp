// أبدأ بسم الله مستعينا        راض به مُدّبر معينا         
// و بعد إني باليقين أشهد    شهادة الإخلاص أن لا يُعبد     
// بالحق مألوه سوى الرحمن    من جل عن عيب و عن نقصان   
// و أن خير خلقه محمد        من جائنا بالبينات و الهدى 

// Bismillah Al Rahman Al Rahim

// Author           : Khaled Waleed
// File Created on  : 23/Mar/2023 on 11:47:10
// University       : Cairo University - Faculty Of Computers and Artificial Intelligence
// LinkedIn         : https://www.linkedin.com/in/khaled-waleed-salah/
// Telegram         : https://t.me/SuperNova74_K
// FEEL free to contact me for any help :P


#include<bits/stdc++.h>
#include "Sorting_Algorithms.cpp"

#define ll long long
#define spacebar " "
#define newline '\n'
#define YES "YES"
#define NO "NO"
#define fio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ones_in_binary(x) __builtin_popcount(x)


using namespace std;
typedef vector<ll> vll;
typedef vector<int> vint;



int main() {
    fio

    int arr[]{3,2,6,8,9,7,1,2,8,4,6,8,49687,1};
    sortlib::selectionSort(arr);

    for(auto & i : arr)
        cout << i << newline;

    return 0;
}