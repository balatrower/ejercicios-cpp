#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main() {
    vector<int> numeros {2, 7, 11, 15};
    int objetivo {18};
    vector<int> resultados = twoSum(numeros, objetivo);
    cout << "Indices: " << resultados[0] << " y " << resultados[1] << " para objetivo: " << objetivo;
}
    
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> results {0, 0};
    for (size_t i {0}; i < nums.size(); i++) {
        for (size_t j {i + 1}; j < nums.size(); j++) {
            int firstNum = nums[i];
            int secondNum = nums[j];
            if (firstNum + secondNum == target) {
                results[0] = (int) i;
                results[1] = (int) j;
                return results;
            }
        }
    }
    return results;
}
