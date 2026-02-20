template<int n>
Square<n>::Square(const Vector<n>& center, float height, float width) {
    float halfWidth =  width / 2.0;
    float halfHeight = height / 2.0;
    
    //Corner calcs
    this->tl = Vector<n>();  
    this->tl[0] = center[0] - halfWidth;   // x: go LEFT from center
    this->tl[1] = center[1] + halfHeight;  // y: go UP from center
    
    // Copy all remaining dimensions from center
    for (int i = 2; i < n; i++) {
        this->tl[i] = center[i];
    }

    this->tr = Vector<n>();  
    this->tr[0] = center[0] + halfWidth;   // x: go RIGHT from center
    this->tr[1] = center[1] + halfHeight;  // y: go UP from center
    
    // Copy all remaining dimensions from center
    for (int i = 2; i < n; i++) {
        this->tr[i] = center[i];
    }

    this->br = Vector<n>();  
    this->br[0] = center[0] + halfWidth;   // x: go RIGHT from center
    this->br[1] = center[1] - halfHeight;  // y: go DOWN from center
    
    // Copy all remaining dimensions from center
    for (int i = 2; i < n; i++) {
        this->br[i] = center[i];
    }

    this->bl = Vector<n>();  
    this->bl[0] = center[0] - halfWidth;   // x: go LEFT from center
    this->bl[1] = center[1] - halfHeight;  // y: go DOWN from center
    
    // Copy all remaining dimensions from center
    for (int i = 2; i < n; i++) {
        this->bl[i] = center[i];
    }
}

template<int n>
Square<n>::Square(const Vector<n>& tl, const Vector<n>& tr, const Vector<n>& br, const Vector<n>& bl) {
    this->tl = tl;
    this->tr = tr;
    this->br = br;
    this->bl = bl;
}

template<int n>
Square<n>::Square(const Square<n>& other) {
    tl = other.tl;
    tr = other.tr;
    br = other.br;
    bl = other.bl;
}

// template <int n>
// Square<n>& Square::operator*=(const Matrix<n,n>& other) {
//     Square<n> arr
// }
