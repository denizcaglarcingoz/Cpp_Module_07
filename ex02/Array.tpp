#ifndef ARRAY_TPP
#define ARRAY_TPP

template<typename T>
Array<T>::Array()
{
	array = new T[0]();
	arrayLen = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	array = new T[n]();
	arrayLen = n;
}

template<typename T>
Array<T>::Array(const Array<T>& copy)
{
	arrayLen = copy.arrayLen;
	array = new T[arrayLen]();
	for (size_t i = 0; i < arrayLen; i++)
	{
		array[i] = copy.array[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] array;
		arrayLen = other.arrayLen;
		array = new T[arrayLen]();
		for (size_t i = 0; i < arrayLen; i++)
		{
			array[i] = other.array[i];
		}
	}
	return *this;
}


template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= arrayLen)
		throw std::out_of_range("Index out of bounds");
	
	return array[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= arrayLen)
		throw std::out_of_range("Index out of bounds");
	
	return array[index];
}

template<typename T>
size_t		Array<T>::size() const
{
	return arrayLen;
}

template<typename T>
Array<T>::~Array()
{
	delete[] array;
}


#endif