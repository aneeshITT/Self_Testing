#include <iostream>
#include <string>
 
bool isDigit(char c)
{
    return c >= '0' && c <= '9';
}
 
void skipSpaces(const std::string& s, int& i)
{
    while (i < (int)s.size() && s[i] == ' ')
    {
        i++;
    }
}
 
double pow10(int e)
{
    double x = 1.0;
 
    while (e > 0)
    {
        x *= 10.0;
        e--;
    }
 
    while (e < 0)
    {
        x /= 10.0;
        e++;
    }
 
    return x;
}
 
double readDigits(const std::string& s, int& i, bool& found)
{
    double val = 0.0;
    found = false;
 
    while (i < (int)s.size() && isDigit(s[i]))
    {
        found = true;
        val = val * 10.0 + (s[i] - '0');
        i++;
    }
 
    return val;
}
 
double parseNumber(const std::string& s, int& i)
{
    bool hasWhole = false;
    bool hasFrac = false;
 
    double whole = readDigits(s, i, hasWhole);
    double frac = 0.0;
    double scale = 1.0;
 
    if (i < (int)s.size() && s[i] == '.')
    {
        i++;
 
        while (i < (int)s.size() && isDigit(s[i]))
        {
            hasFrac = true;
            frac = frac * 10.0 + (s[i] - '0');
            scale *= 10.0;
            i++;
        }
    }
 
    if (!hasWhole && !hasFrac)
    {
        return 0.0;
    }
 
    double val = whole + frac / scale;
 
    if (i < (int)s.size() && (s[i] == 'e' || s[i] == 'E'))
    {
        int save = i;
        i++;
 
        bool negExp = false;
 
        if (i < (int)s.size() && (s[i] == '+' || s[i] == '-'))
        {
            negExp = (s[i] == '-');
            i++;
        }
 
        bool hasExp = false;
        int exp = (int)readDigits(s, i, hasExp);
 
        if (hasExp)
        {
            if (negExp)
            {
                exp = -exp;
            }
 
            val *= pow10(exp);
        }
        else
        {
            i = save;
        }
    }
 
    return val;
}
 
double myAtof(const std::string& s)
{
    int i = 0;
    skipSpaces(s, i);
 
    if (i >= (int)s.size())
    {
        return 0.0;
    }
 
    bool neg = false;
 
    if (s[i] == '+' || s[i] == '-')
    {
        neg = (s[i] == '-');
        i++;
    }
 
    double val = parseNumber(s, i);
 
    if (neg)
    {
        val = -val;
    }
 
    return val;
}
 
void readLine(std::string& s)
{
    s = "";
    char ch;
 
    while (std::cin.get(ch))
    {
        if (ch == '\n')
        {
            break;
        }
 
        s += ch;
    }
}
 
char readChoice()
{
    std::string s;
 
    while (true)
    {
        std::cout << "\nDo you want to enter another value? (y/n): ";
        readLine(s);
 
        if (s.size() == 1 &&
            (s[0] == 'y' || s[0] == 'Y' || s[0] == 'n' || s[0] == 'N'))
        {
            return s[0];
        }
 
        std::cout << "Please enter only y or n.\n";
    }
}
 
int main()
{
    char choice = 'y';
 
    do
    {
        std::string input;
 
        std::cout << "Enter a floating-point value: ";
        readLine(input);
 
        double ans = myAtof(input);
 
        std::cout << "Input entered   : " << input << '\n';
        std::cout << "Converted value : " << ans << '\n';
 
        choice = readChoice();
 
    } while (choice == 'y' || choice == 'Y');
 
    return 0;
}