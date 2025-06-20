#ifndef ARRAY_HPP
#define ARRAY_HPP


template <typename T>
class Array
{
	private:
		T*			array;
		size_t		arrayLen;

	public:
					Array();
					Array(unsigned int n);
					Array(const Array<T>& copyConstructor);
					~Array();


		Array<T>&	operator=(const Array<T>& other);
		T& 			operator[](unsigned int index);
		const T& 	operator[](unsigned int index) const;

		size_t		size() const;

};


#include "Array.tpp"
#endif