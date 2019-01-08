#include "CoucouBrocoliReturner.h"

CoucouBrocoliReturner::CoucouBrocoliReturner() : m_i(0)
{}

CoucouBrocoliReturner::CoucouBrocoliReturner(int i): m_i(i)
{}

CoucouBrocoliReturner::CoucouBrocoliReturner(const CoucouBrocoliReturner &returner) : CoucouBrocoliReturner(returner.m_i)
{}

std::string CoucouBrocoliReturner::returnCoucouBrocoli() const
{
    auto string = std::string("Coucou turbo brocoli !");
    return string;
}

std::string CoucouBrocoliReturner::returnCoucouBrocolo() const
{
    return std::string("Coucou turbo brocolo !");
}

std::string CoucouBrocoliReturner::returnCoucouBrocoli(bool orBrocolo) const
{
    std::string string;
    if(orBrocolo) {
        string = returnCoucouBrocolo();
    } else {
        string = returnCoucouBrocoli();
    }
    return string;
}
