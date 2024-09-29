#include <iostream>
#include <vector>


class BubbleSort {
    std::vector<int> listage;

public:
    BubbleSort(std::vector<int> listage) {
        this->listage = listage;
    }

    std::vector<int> apply() {
        int lenght = this->listage.size();

        for (int i = 0; i < lenght; i++) {
            for (int j = 0; j < lenght -i -1; j++) {
                if (this->listage[j] > this->listage[j + 1]) {
                    int var_aux;
                    var_aux = this->listage[j];
                    this->listage[j] = this->listage[j + 1];
                    this->listage[j + 1] = var_aux;
                }
            }
        }
        return this->listage;
    }
};

int main(int argc, char** argv) {
    std::vector<int> listage = { 4, 8, 87, 54, 12, 3, 65, 99, 30, 43 };

    BubbleSort BS(listage);
    std::vector<int> newListage = BS.apply();

    for (int num : newListage) {
        std::cout << num << "\n";
    }
}