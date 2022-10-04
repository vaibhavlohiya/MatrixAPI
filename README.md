# MatrixAPI
A martix API class for fixed number of dimensions.

# How it works

### 1. Include all the necessary header files such as Scaler.h, Vector.h, Matrix.h . 

       #include "Scaler.h"
       #include "Vector.h"
       #include "Matrix.h"
       
### 2. Create a scaler by creating an object of class scaler as given below.

       Scaler x(5.2), y(1.9). z(2.1);
       
### 3. After that, you can create a vector by 2 methods which are given as

#### a). Method 1 (by using scalers)

       Vector v({x, y, z});
       
#### b). Method 2 (by directly putting values in it)

       Vector v({3.1, 6.7, 5.2});

### 4. Some Vector functions.
 
       v.size();
       v1.Add(v2);
       v1.Subtract(v2);
       v1.DotProduct(v2);
       v1.CrossProduct(v2);

### 5. Some vector operations.

       v[index];
       v_add = v1 + v2;
       v_sub = v1 - v2;
       v_dot = v1 * v2;
       
