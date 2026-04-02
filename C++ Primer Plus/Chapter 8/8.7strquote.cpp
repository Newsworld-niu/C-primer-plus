// strquote.cpp -- different designs
#include <iostream>
#include <string>
std::string version1(const std::string & s1, const std::string & s2);
const std::string & version2(std::string & s1, const std::string & s2);
const std::string & version3(std::string & s1, const std::string & s2);

int main()
{
    std::string input;
    std::string copy;
    std::string result;

    std::cout << "Enter a string: ";
    getline(std::cin, input);
    copy = input;
    std::cout << "Your string as entered: " << input << std::endl;
    result = version1(input, "***");
    std::cout << "Your string enhanced: " << result << std::endl;
    std::cout << "Your original string: " << input << std::endl;

    result = version2(input, "###");
    std::cout << "Your string enhanced: " << result << std::endl;
    std::cout << "Your original string: " << input << std::endl;

    std::cout << "Resetting original string.\n";
    input = copy;
    result = version3(input, "@@@");
    std::cout << "Your string enhanced: " << result << std::endl;
    std::cout << "Your original string: " << input << std::endl;

    return 0;
}

std::string version1(const std::string & s1, const std::string & s2)
{
    std::string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const std::string & version2(std::string & s1, const std::string & s2)
{
    s1 = s2 + s1 + s2;
// safe to return reference passed to function
    return s1;
}

const std::string & version3(std::string & s1, const std::string & s2)
{
    std::string temp;

    temp = s2 + s1 + s2;
// unsafe to return reference to local variable
    return temp;
}