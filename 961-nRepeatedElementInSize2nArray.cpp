#include <vector>
#include <iostream>
using namespace std;

int repeatedNTimes(vector<int>& nums);

int main() {
    vector<int> numeros {2, 1, 2, 5, 3, 2};
    int numeroBuscado = repeatedNTimes(numeros);
    cout << "El numero que aparece N veces es: " << numeroBuscado;
    return 0;
}

int repeatedNTimes(vector<int>& nums) {
    int numeroActual {0};
    for (size_t i {0}; i < nums.size(); i++) {
        numeroActual = nums[i];
        int numApariciones {0};
        
        for (size_t j {i + 1}; j < nums.size(); j++) {
            if (numeroActual == nums[j]) {
                numApariciones++;
            }
        }

        if (numApariciones == nums.size() / 2) {
            return numeroActual;
        }
        
    }
    return numeroActual;
}
