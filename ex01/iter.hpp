#ifndef ITER_HPP
#define ITER_HPP

template<typename T, typename F>
void iter(T* arrayAdress, int lenArray, F func)
{
	for (int i = 0; i < lenArray; ++i)
	{
		func(arrayAdress[i]);
	}
}


#endif