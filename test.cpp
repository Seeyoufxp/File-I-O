#include <iostream>
#include <fstream>
#include <string>

void test01()
{
    std::ofstream ofs;
    ofs.open("test01.txt",std::ios::out);
    ofs << "man" << std::endl;
    ofs << "laoaba" << std::endl;
    ofs.close();

    std::ifstream ifs;
    ifs.open("test01.txt",std::ios::in);
    if(!ifs.is_open())
    {
        std::cout << "Error" << std::endl;
        return;
    }

    // char buf[1024] = {0};
    // while(ifs>>buf)
    // {
    //     std::cout << buf << std::endl;
    // }

    // char buf[1024] = {0};
    // while(ifs.getline(buf,sizeof(buf)))
    // {
    //     std::cout << buf << std::endl;
    // }

    // std::string buf;
    // while (getline(ifs,buf))
    // {
    //     std::cout << buf << std::endl;
    // }

    // char c;
    // while((c=ifs.get())!=EOF)   //EOF end of file
    // {
    //     std::cout << c;
    // }
    // std::cout<<std::endl;

    ofs.close();
}

class Person
{
public:
    char m_Name[64];
    int m_Age;
};

void test02()
{
    std::ofstream ofs;
    ofs.open("test02.txt", std::ios::out | std::ios::binary);
    Person p = {"laoba", 18};
    ofs.write((const char *)&p, sizeof(Person));
    ofs.close();

    std::ifstream ifs;
    ifs.open("test02.txt", std::ios::in | std::ios::binary);
    if(!ifs.is_open())
    {
        std::cout << "Error" << std::endl;
    }
    ifs.read((char *)&p, sizeof(Person));
    std::cout << p.m_Name << " " << p.m_Age << " " << std::endl;
    ifs.close();
}  

int main()
{
    test01();
    test02();

    system("pause");
    return 0;
}