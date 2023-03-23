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

//std::random_device randomDevice;
//
//std::mt19937 generator(randomDevice());
//
//std::uniform_int_distribution<int> intDistro(start, end);
//
//int pivotIndex = intDistro(generator);


int main() {
    fio

    string arr[]{"kahled", "waleed", "a", "c", "b"};
//
//    int arr[]{10,9,8,7,6,5,4,3,2,1,-50,-44,5854};
//
    sortlib::quickSort(arr, 0, sizeof arr/ sizeof(arr[0]) - 1);

    for(auto & i : arr)
        cout << i << newline;

    return 0;
}