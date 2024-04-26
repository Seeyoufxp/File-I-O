#include <iostream>
#include <fstream>
#include <string>

void test01()
{
    std::ofstream ofs;
    ofs.open("text.txt",std::ios::out);
    ofs << "man" << std::endl;
    ofs << "laoaba" << std::endl;
    ofs.close();

    std::ifstream ifs;
    ifs.open("text.txt",std::ios::in);
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

int main()
{
    test01();

    system("pause");
    return 0;
}