#include <chapter8/chapter8.hpp>
#include <iostream>
#include <map>
#pragma pack(push, 1)
void chapter8()
{
    std::cout << "Chapter 8" << std::endl;
}
struct large_size
{
    bool a;
    int b;
    char c;
    long d;
    double e;
    long double f;
};
struct small_size
{
    bool a;
    char b;
    int c;
    long d;
    double e;
    long double f;
};
void size_of_structs()
{
    std::cout << "Size of large_size: " << sizeof(large_size) << std::endl;
    std::cout << "Size of small_size: " << sizeof(small_size) << std::endl;
}
enum class Season
{
    spring,
    summer,
    autumn,
    winter
};
enum class seasonInDanish
{
    forår,
    sommer,
    efterår,
    vinter
};
Season operator++(Season &s,int)
{
    static const std::map<Season,Season> next = {
        {Season::spring, Season::summer},
        {Season::summer, Season::autumn},
        {Season::autumn, Season::winter},
        {Season::winter, Season::spring}
    };
    s = next.at(s);
    return s;
}
Season operator--(Season &s,int)
{
    static const std::map<Season,Season> prev = {
        {Season::spring, Season::winter},
        {Season::summer, Season::spring},
        {Season::autumn, Season::summer},
        {Season::winter, Season::autumn}
    };
    s = prev.at(s);
    return s;
}
std::ostream &operator<<(std::ostream &os,const Season &s)
{
    static const std::map<Season,std::string> danishNames = {
        {Season::spring, "Forår"},
        {Season::summer, "Sommer"},
        {Season::autumn, "Efterår"},
        {Season::winter, "Vinter"}
    };
    os << danishNames.at(s);
    return os;
}
std::istream &operator>>(std::istream &is,Season &s){
    std::string input;
    is >> input;
    static const std::map<std::string,Season> englishNames = {
        {"spring", Season::spring},
        {"summer", Season::summer},
        {"autumn", Season::autumn},
        {"winter", Season::winter}
    };
    s = englishNames.at(input);
    return is;
}
