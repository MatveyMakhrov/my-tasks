#include <iostream>

class Rational {
public:
    Rational() = default;
    Rational(const Rational&) = default;
    Rational(const int num, const int denum);
    ~Rational() = default;
    bool operator==(const Rational& rhs) const;
    bool operator!=(const Rational& rhs) const;
    bool operator>(const Rational& rhs) const;
    Rational& operator+=(const Rational& rhs);
    Rational& operator+=(const int rhs) { return operator+=(Rational(rhs)); }
    Rational& operator-=(const Rational& rhs);
    Rational& operator-=(const int rhs) { return operator-=(Rational(rhs)); }
    Rational& operator*=(const Rational& rhs);
    Rational& operator*=(const int rhs);
    Rational& operator/=(const Rational& rhs);
    Rational& operator/=(const int rhs);
    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);
    Rational& divider(const Rational& rhs);
    Rational& LCD();

private:
    int32_t num_{ 0 };
    int32_t denum_{ 1 };
};


inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs) {
    return rhs.writeTo(ostrm);
}
std::ostream& Rational::writeTo(std::ostream& ostrm) const {
    ostrm << num_ << "/" << denum_;
}

Rational& Rational::operator*=(const Rational& rhs) {
    num_ *= rhs.num_;
    denum_ *= rhs.denum_;
    return *this;
}

Rational& Rational::operator/=(const Rational rhs) {
    num_ *= rhs.denum_;
    denum_ *= rhs.num_;
    return *this;
}

Rational& Rational::LCD(const Rational& rhs) {
    int lcd(0);
    if (denum_ % rhs.denum_ == 0) {
        lcd = denum_;
    }
    else if (rhs.denum_ % denum_ == 0) {
        lcd = rhs.denum_;
    }
    else {
        lcd = denum_ * rhs.denum_;
    }
    return lcd;
}

Rational& Rational::operator+=(const Rational& rhs) {
    this->LCD(rhs);
    num_ *= lcd / denum_;

}

int32_t NOD(int32_t a, int32_t b) {
    if (a == 0 || b == 0)
        return a + b;
    if (a > b)
        return NOD(a - b, b);
    else return NOD(a, b - a);
}
