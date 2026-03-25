# 1
prototype
definition
variable

# 2
a.void igor()
b.float tofu(intn)
c.double mpg(double n, double m)
d.long summation(long [], int n)
e.double doctor(const char [])
f.void ofcourse(boss bo)
g.std::string plot(map * pt)

# 3
void set_ay(int ay[], int size, int n)
{
    for (int i = 0; i < size; ++i)
        ay[i] = n;
}

# 4
void set_ay(int * begin, int * end, int n)
{
    for (int i = 0; i < (end - begin + 1); ++i)
        * begin[i] = n;
}

# 5
double max_ay(const double ay[], int n)
{
    max_ay =0;
    for (int i = 0; i < n; ++i)
        {
            if ay[i] >= max_ay
                max_ay = ar[i];
        }
    return max_ay;
}

# 6
because fundamental types are copies

# 7
char[]
cahr *
cstring

# 8
int replace(char * str, char c1, char c2)
{
    count = 0;
    int i = 0;
    while (str[i] != '\n')
    {
        if str[i] = c1
        {
            str[i] = c2;
            ++count;
        }
        ++i;
    }
    return count;
}

# 9
*"pizza" = p;
"taco"[2] = c;

# 10
value: struct 
address: struct *
trade-off: value can protect , address can modify the value of struct

# 11 
int judge(int * pt(const char *))

# 12
void show(applicant str)
{
    std::cout << "name: " << str.name << std::endl;
    std::cout << "credit_rating: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << str.credit_rating[i] << std::endl;
}

void show(applicant * app)
{
    std::cout << "name: " << app->name << std::endl;
    std::cout << "credit_rating: " << std::endl;
    for (int i = 0; i < 3; ++i)
        std::cout << app->credit_rating[i] << std::endl;
}

# 13
void *p1(applicant * a) = f1;
const char *(*p2)(const applicant * a1, const applicant * a2);
void *ap[5](applicant * a);
const char *(*pa[10])(const applicant * a1, const applicant * a2);
typedef void * (applicant) app1;
app1 ap[5];
typedef const char ** (const applicant * a1, const applicant * a2) app2
app2 pa[10]