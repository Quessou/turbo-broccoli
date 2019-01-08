#include "CoucouBrocoliReturner.h"

CoucouBrocoliReturner::CoucouBrocoliReturner() : m_i(0)
{}

CoucouBrocoliReturner::CoucouBrocoliReturner(int i): m_i(i)
{}

CoucouBrocoliReturner::CoucouBrocoliReturner(const CoucouBrocoliReturner &returner) : m_i(returner.m_i)
{}

std::string CoucouBrocoliReturner::returnCoucouBrocoli() const
{
    return std::string("Coucou turbo brocoli !");
}

std::string CoucouBrocoliReturner::returnCoucouBrocolo() const
{
    return std::string("Coucou turbo brocolo !");
}
