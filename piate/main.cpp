bool isSorted(const int* array, int size) {
    bool rosnaco = true;
    bool malejaco = true;

    for (int i = 1; i < size; ++i) {
        if (array[i - 1] > array[i]) {
            rosnaco = false;
        }
        if (array[i - 1] < array[i]) {
            malejaco = false;
        }
    }

    return rosnaco || malejaco;
}