#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    T *temp = new T [mSize](); // new pointer pointing to new memory
    // this will not be cleared after the function is terminated



    for(int i=0;i<mSize;++i) temp[i]=mData[i];
    mCap=mSize;
    

    // prevent memory leak from old array
    delete [] mData;
    mData = temp;
}

#endif
