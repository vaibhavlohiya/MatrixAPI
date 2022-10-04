
#include "Scaler.h"
#include "Vector.h"


// Class Constructors

Vector::Vector(const std::array<Scaler, m_Size>& Components)
	: m_VectorArray(Components)
{}

// Class Methods 

const size_t Vector::size() const { return m_Size; }

Vector Vector::Add(const Vector& other)
{
	Vector V = {};

	for (size_t i = 0; i < m_Size; i++)
		V.m_VectorArray[i] = m_VectorArray[i] + other.m_VectorArray[i];

	return Vector(V.m_VectorArray);
}

Vector Vector::Subtract(const Vector& other)
{
	Vector V = {};

	for (size_t i = 0; i < m_Size; i++)
		V.m_VectorArray[i] = m_VectorArray[i] - other.m_VectorArray[i];

	return Vector(V.m_VectorArray);
}

Scaler Vector::DotProduct(const Vector& other)
{
	Scaler S = {};

	for (size_t i = 0; i < m_Size; i++)
		S += m_VectorArray[i]*other.m_VectorArray[i];

	return Scaler(S.Data());
}

Vector Vector::CrossProduct(const Vector& other)
{
	Vector V = {};

	if (m_Size == 3)
	{
		V.m_VectorArray[0] = m_VectorArray[1] * other.m_VectorArray[2] - m_VectorArray[2] * other.m_VectorArray[1];
		V.m_VectorArray[1] = m_VectorArray[2] * other.m_VectorArray[0] - m_VectorArray[0] * other.m_VectorArray[2];
		V.m_VectorArray[2] = m_VectorArray[0] * other.m_VectorArray[1] - m_VectorArray[1] * other.m_VectorArray[0];
	}

	return Vector(V.m_VectorArray);
}

// Class Operator Overloads

Vector Vector::operator+(const Vector& other) { return Add(other); }
Vector Vector::operator-(const Vector& other) { return Subtract(other); }
Scaler Vector::operator*(const Vector& other) { return DotProduct(other); }

Scaler& Vector::operator[](size_t& index) { return m_VectorArray[index]; }
const Scaler& Vector::operator[](size_t& index) const { return m_VectorArray[index]; }

std::ostream& operator<<(std::ostream& stream, const Vector& V_out)
{
	for (size_t i = 0; i < V_out.size(); i++)
		stream << V_out[i].Data() << " ";

	return stream;
}

