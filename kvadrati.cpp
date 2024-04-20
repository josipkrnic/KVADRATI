#include <iostream>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    std::list<int> lista;
    int s = 0;
    for (int i = 1; i < 40000; i++) {
        s = i*(i-1);
        lista.push_back(s);
        s = 0;
    }
    for (int k = 1; k < 1000; k++) {
        int c = k*(k-1);
        int l = round(1.41421356237*k)+1;
        for (int y1 = k+1; y1 <= l; y1++) {
            int m = y1*(y1-1);
            int A1 = 2*c - m;
            auto it1 = std::find(lista.begin(),lista.end(),A1);
            if (it1 != lista.end()) {
                for (int y2 = k+1; y2 < l; y2++) {
                    int n = y2*(y2-1);
                    if (y1 > y2) {
                        int A2 = 2*c - n;
                        int A3 = m - n + c;
                        int A4 = n + c - m;
                        int A5 = m + n - c;
                        int A6 = 3*c - m - n;
                        if (A6 > 0) {
                            auto it2 = std::find(lista.begin(),lista.end(),A2);
                            if (it2 != lista.end()) {
                                auto it3 = std::find(lista.begin(),lista.end(),A3);
                                auto it4 = std::find(lista.begin(),lista.end(),A4);
                                auto it5 = std::find(lista.begin(),lista.end(),A5);
                                auto it6 = std::find(lista.begin(),lista.end(),A6);
                                if (it4 != lista.end()) {
                                    std::cout << "AJDEEEE!!!!" << k << "," << y1 << "," << y2 << std::endl;
                                }
                                if (it3 != lista.end()) {
                                    std::cout << "TOOOOO JE TOOOOO!!!" << k << "," << y1 << "," << y2 << std::endl;
                                } 
                                if(it6 != lista.end()) {
                                    std::cout << "AJMOOOOOOOOO!!!" << k << "," << y1 << "," << y2 << std::endl;
                                }
                                if(it5 != lista.end()) {
                                        std::cout << "RESSSSSSIIII!!!" << k << "," << y1 << "," << y2 << std::endl;
                                }
                                
                            }
                        } else {
                            continue;
                        }
                    }
                }
            } else {
                continue;
            }  
        }
    }
   return 0;
}