template <int n, int m>
Matrix<n,m>::Matrix() {
    arr = new float*[n]; 

    // Combine allocation and initialization for efficiency and correctness
    for (int i = 0; i < n; i++) {
        arr[i] = new float[m];
        
        // Initialize values for this row
        for(int j = 0; j < m; j++) {
            arr[i][j] = 0.0f;
        }
    }
}

template <int n, int m>
Matrix<n,m>::Matrix(float ** mat1) {
    arr = mat1;
}

template<int n,int m>
Matrix<n,m>::Matrix(const Matrix<n,m> &mat) {
    arr = new float*[n];

    //creating the new array
    for (int i = 0; i < n, i++) {
        arr[i] = new float[m];
    }


    //Deep copying the array
    for (int i = 0; i < n, i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = mat[i][j];
        }
    }
}

template<int n, int m>
Matrix<n,m>::~Matrix() {
    for (int i = 0; i < n, i++) {
        delete[] arr [i];
    }

    delete[] arr;
    arr = nullptr;
}

template<int n, int m>
Matrix<n,m>& Matrix<n,m>::operator=(const Matrix<n,m>& mat) {
    if (this == &mat) {
        return *this;
    }

    // Deallocate existing memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    // Allocate new memory
    arr = new float*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new float[m];
    }

    // Deep copy the values
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = mat[i][j];
        }
    }
    return *this;
}

template<int n, int m>
template<int a>
Matrix<n,a> Matrix<n,m>::operator*(const Matrix<m,a> mat) const{
    //Create new matrix to store result in
    Matrix<n,a> res;
    //Matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a; j ++) {
            for (int k = 0; k < m; k++) {
                res[i][j] += arr[i][k] * mat[k][j];
            }
        }
    }
    return res;            
}

template<int n, int m>
// template<int a>
Matrix<n,m> Matrix<n,m>::operator*(const float s) const {
    Matrix<n,m> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i][j] = arr[i][j] * s;
        }
    }
    return res;
}

template<int n, int m>
Matrix<n,m> Matrix<n,m>::operator+(const Matrix<n,m> mat) const {
    Matrix<n,m> res;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            res[i][j] = arr[i][j] + mat[i][j];
        }
    }
    return res;
}