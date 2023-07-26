#include "Array.h"
#include <iostream>
#include <cassert>

using namespace std;

ary::array::array() {
	cout << "ary::array::array";
}

ary::array::array(const std::initializer_list<int>& ilist)
{
	size_t i = 0;
	for (auto iter = ilist.begin(); iter != ilist.end(); iter++)
	{
		m_elements[i] = *iter;
		i++;
	}
}

int& ary::array::operator[](size_t position) {
	return m_elements[position];
}

const int& ary::array::operator[](size_t position) const{
	return m_elements[position];
}

int& ary::array::at(size_t position) {
	assert(position >= 0 && position < m_size);

	return m_elements[position];
}

const int& ary::array::at(size_t position) const {
	assert(position >= 0 && position < m_size);

	return m_elements[position];
}

int& ary::array::front() {
	return m_elements[0];
}

int& ary::array::back() {
	return m_elements[m_size-1];
}

int* ary::array::data() {
	return &m_elements[0];
	return m_elements;
}

void ary::array::fill(int value) {
	for (int i = 0; i < m_size; i++) {
		m_elements[i] = value;
	}
}

void ary::array::swap(array& other) {
	for (int i = 0; i < m_size; i++) {
		int tmp = m_elements[i];

		m_elements[i] = other.m_elements[i];
		other.m_elements[i] = tmp;
	}
}

bool ary::array::empty() const {
	if (m_size == 0) {
		return true;
	}
	else {
		return false;
	}
}

size_t ary::array::size() const{
	return m_size;
}