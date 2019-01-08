#include <string>

class CoucouBrocoliReturner {
public:
    CoucouBrocoliReturner();
    CoucouBrocoliReturner(int i);
    CoucouBrocoliReturner(const CoucouBrocoliReturner& returner);
    std::string returnCoucouBrocoli() const;
    std::string returnCoucouBrocolo() const;
    std::string returnCoucouBrocoli(bool orBrocolo) const;

    int m_i = -1;

};
