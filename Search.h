#ifndef SEARCH_H
#define SEARCH_H

#include <iostream>
#include <string>
using namespace std;

class Episode; // Forward declaration

class Search {
public:
    virtual ~Search() = default;
    virtual bool matches(const Episode* episode) const = 0;
    virtual void print(ostream& ost) const = 0;

    // Polymorphic stream insertion operator
    friend ostream& operator<<(ostream& ost, const Search& search) {
        search.print(ost);
        return ost;
    }
};

class H_Search : virtual public Search {
protected:
    string host;

public:
    H_Search(const string& h);
    bool matches(const Episode* episode) const override;
    void print(ostream& ost) const override;
};

class C_Search : virtual public Search {
protected:
    string category;

public:
    C_Search(const string& cat);
    bool matches(const Episode* episode) const override;
    void print(ostream& ost) const override;
};

class HorC_Search : public H_Search, public C_Search {
public:
    HorC_Search(const string& host, const string& category);
    bool matches(const Episode* episode) const override;
    void print(ostream& ost) const override;
};

#endif // SEARCH_H