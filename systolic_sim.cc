#include "mpi.h"

class SystolicCell {
    public:
        float* lut
        SystolicCell(float* lookup_table, int k) {
            lut = lookup_table
        }
};

class SystolicArray {
    public:
        int w;
        int c;
        SystolicCell** cell_array;
        SystolicArray(int num_weights, int num_subspaces, int k) {
            w = num_weights;
            c = num_subspaces;

            cell_array = new SystolicCell*[w];
            for(int row = 0; row < w; row++) {
                cell_array[row] = new SystolicCell[c];
            }
        }
};

int main() {
    return 0;
}