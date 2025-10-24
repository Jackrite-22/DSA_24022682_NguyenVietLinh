#ifndef SYMBOLTABLE_H_INCLUDED
#define SYMBOLTABLE_H_INCLUDED

#include <iostream>

using namespace std;

struct Node{
    string key;
    int value;
    Node *next;
};

struct SymbolTableL{
    string key[100];
    int value[100];
    int sizze;

    SymbolTableL(){
        sizze = 0;
    }

    void put(string k, int v){
        for(int i = 0; i < sizze; i++){
            if(key[i] == k){
                value[i] = v;
                return;
            }
        }
        int pos = 0;
        while(pos < sizze && key[pos] < k){
            pos++;
        }

        for(int i = sizze; i > pos; i--){
            key[i] = key[i-1];
            value[i] = value[i-1];
        }
        key[pos] = k;
        value[pos] = v;
        sizze++;
    }

    string keyMin(){
        if(sizze == 0){
            return "";
        } else {
            return key[0];
        }
    }

    string keyMax(){
        if(sizze == 0){
            return "";
        } else {
            return key[sizze-1];
        }
    }

    int rank(string k){
        int lo = 0, hi = sizze - 1;
        while(lo <= hi){
            int mid = (lo + hi) / 2;
            if(key[mid] < k){
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return lo;
    }

    string floor(string k){
        int r = rank(k);
        if(r < sizze && key[r] == k){
            return key[r];
        } else if(r == 0){
            return "Khong ton tai!";
        } else {
            return key[r-1];
        }
    }

    string ceiling(string k){
        int r = rank(k);
        if(r == sizze){
            return "Khong ton tai!";
        } else {
            return key[r];
        }
    }

    string select(string k){
        int r = rank(k);
        if(r < 0 || r >= sizze){
            return "";
        } else {
            return key[r];
        }
    }

    void deleteMin(){
        if(sizze == 0){
            return;
        } else {
            for(int i = 1; i < sizze; i++){
                key[i-1] = key[i];
                value[i-1] = value[i];
            }
            sizze--;
        }
    }

    void deleteMax(){
        if(sizze == 0){
            return;
        } else {
            sizze--;
        }
    }

    int size(string kLo, string kHi){
        if(kLo > kHi){
            return 0;
        } else {
            int rLo = rank(kLo);
            int rHi = rank(kHi);
            int n = rHi - rLo;
            if(rHi < sizze && key[rHi] == kHi){
                n = n + 1;
            }
            return n;
        }
    }
};

#endif // SYMBOLTABLE_H_INCLUDED
