// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tbitfield.cpp - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Битовое поле

#include "tbitfield.h"
TBitField::TBitField(int len)
{

}

TBitField::TBitField(const TBitField& bf) // конструктор копирования
{

}

TBitField::~TBitField()
{

}

int TBitField::GetMemIndex(const int n) const // индекс Мем для бита n
{

}

TELEM TBitField::GetMemMask(const int n) const // битовая маска для бита n
{

}

// доступ к битам битового поля

int TBitField::GetLength(void) const // получить длину (к-во битов)
{

}

int TBitField::GetMemLen() const
{

}

void TBitField::SetBit(const int n) // установить бит
{

}

void TBitField::ClrBit(const int n) // очистить бит
{

}

int TBitField::GetBit(const int n) const // получить значение бита
{

}

// битовые операции

TBitField& TBitField::operator=(const TBitField& bf) // присваивание
{

}

int TBitField::operator==(const TBitField& bf) const // сравнение
{

}

int TBitField::operator!=(const TBitField& bf) const // сравнение
{

}

TBitField TBitField::operator|(const TBitField& bf) // операция "или"
{

}

TBitField TBitField::operator&(const TBitField& bf) // операция "и"
{
	
}

TBitField TBitField::operator~(void) // отрицание
{
	TBitField mask(BitLen);
	for (int i = 0; i < mask.GetLength(); i++)
	{
		mask.SetBit(i);
	}
	for (int i = 0; i < (*this).GetMemLen(); i++)
	{
		(*this).pMem[i] = ~pMem[i];
		(*this).pMem[i] = (*this).pMem[i] & mask.pMem[i];
	}

	return (*this);
}

// ввод/вывод

istream& operator>>(istream& istr, TBitField& bf) // ввод
{

}

ostream& operator<<(ostream& ostr, const TBitField& bf) // вывод
{

}