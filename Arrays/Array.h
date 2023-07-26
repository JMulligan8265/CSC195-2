#pragma once
#include <initializer_list>
namespace ary
{
	class array
	{
	public:
		array();
		array(const std::initializer_list<int>& ilist);
		int& operator [] (size_t position);
		const int& operator [] (size_t position) const;
		int& at(size_t position);
		const int& at(size_t position) const;
		int& front();
		int& back();
		int* data();
		void fill(int value);
		void swap(array& other);
		bool empty() const;
		size_t size() const;
	private:
		static const int m_size = 10;
		int m_elements[m_size]{};
	};
}