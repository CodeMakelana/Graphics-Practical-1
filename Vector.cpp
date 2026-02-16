template<int n>
Vector<n>::Vector() {
    arr = new float[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0.0f;
    }
}

template<int n>
Vector<n>::Vector(std::initializer_list<float> list) {
    arr = new float[n];
    int i = 0;
    for (float val : list) {
        if (i >= n) break; // n is the size of the vector(the array), so we should not exceed it
        arr[i++] = val;
    }
    for (; i < n; i++) {
        arr[i] = 0.0f;
    }
}

template<int n>
Vector<n>::Vector(float *arr1) {
    arr = arr1;
}

template<int n>
Vector<n>::~Vector() {
    delete[] arr;
}

template<int n>
Vector<n>::Vector(const Vector<n> &v) {}