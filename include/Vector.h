// Vector.H
// Class representing Vector
//
//
//
//-------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef VECTOR_H
#define VECTOR_H

//-------------------------------------------------------------------------------------------------------------------------------------------------//

#include <string>

//-------------------------------------------------------------------------------------------------------------------------------------------------//

/**
 * @class Vector
 * @brief Vector of template t is a data structure used to store any types of elements
 *
 * @author Anu Anton Pradeep
 * @version 01
 * @date 12/10/2021 Anu AP
 *
 * @bug My program has no bugs.
 */
template <class T>
class Vector
{
public:

    Vector();
    ~Vector();
    Vector(const Vector& other);
    Vector<T>& operator = (const Vector &rhs);
    unsigned int GetSize() const;
    unsigned int GetCapacity() const;
    bool push_back(T &data);
    bool pop_back();
    bool copy(const Vector &rhs);
    bool GetElement(unsigned p, T& data);

private:

    T* vect;
    unsigned int capacity = 0;
    unsigned int size = 0;
    bool grow();

};

#endif

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Constructor for vector
template <class T>
Vector<T>::Vector()
{
    size = 0;
    capacity = 1;
    vect = new T[capacity];
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Destructor for vector
template <class T>
Vector<T>::~Vector()
{
    delete [] vect;
    vect = nullptr;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Copy constructor for vector
template <class T>
bool Vector<T>::copy(const Vector &rhs)
{
    if(rhs.vect != nullptr)
    {
        size = rhs.GetSize();
        capacity = rhs.GetCapacity();

        vect = new T[capacity];
        for(unsigned i = 0; i < size; i++)
        {
            vect[i] = rhs.vect[i];
        }
        return true;
    }
    else
    {
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Overloaded assignment operator
template <class T>
Vector<T>& Vector<T>::operator = (const Vector &rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    else
    {
        copy(rhs);
        return *this;
    }
    return *this;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for size
template <class T>
unsigned int Vector<T>::GetSize() const
{
    return size;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Getter for capacity
template <class T>
unsigned int Vector<T>::GetCapacity() const
{
    return capacity;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Overloaded copy constructor
template <class T>
Vector<T>::Vector(const Vector& other)
{
    copy(other);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function that grows the size of the vector once it has reached its capacity
template <class T>
bool Vector<T>::grow()
{
    bool yes = false;

    capacity = capacity*2;
    if(T* newVect= new T[capacity])
    {
        yes =  true;
        for(unsigned int i = 0; i < size ; i++)
        {
            newVect[i] = vect[i];
        }
        delete [] vect;
        vect = newVect;
    }
    return yes;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to add elements into the vector
template <class T>
bool Vector<T>::push_back(T &data)
{
    bool success = true;
    if(size >= capacity)
    {
        if(!grow())
        {
            success = false;
        }
    }
    else
    {
        try
        {
            vect[size] = data;
            size++;
        }
        catch(...)
        {
            success = false;
        }
    }
    return success;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to remove the last element from the vector and reduces the size of the vector
template <class T>
bool Vector<T>::pop_back()
{

    try
    {
        if(size!=0)
        {
            size--;
            return true;
        }
        else
        {
            return false;
        }
    }
    catch(...)
    {
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// Function to get element at a particular index of the vector
template <class T>
bool Vector<T>::GetElement( unsigned p, T& data)
{
    if(p <= size)
    {
        data = vect[p];
        return true;
    }
    else
    {
        return false;
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------//
// End of class
