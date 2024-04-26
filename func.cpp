// #include "head.h"

// Computer::Computer(CPU *cpu, VideoCard *vc, Memory *mem)
// {
//     m_cpu = cpu;
//     m_vc = vc;
//     m_mem = mem;
// }
// Computer::~Computer()
// {
//     if(m_cpu!=NULL)
//     {
//         delete m_cpu;
//         m_cpu = NULL;
//     }
//     if(m_vc!=NULL)
//     {
//         delete m_vc;
//         m_vc = NULL;
//     }
//     if(m_mem!=NULL)
//     {
//         delete m_mem;
//         m_mem = NULL;
//     }
// }
// void Computer::work()
// {
//     m_cpu->calculator();
//     m_vc->display();
//     m_mem->storage();
// }

// void IntelCpu::calculator()
// {
//     std::cout << "Intel的cpu开始计算" << std::endl;
// }
// void IntelVideoCard::display()
// {
//     std::cout << "Intel的显卡开始显示" << std::endl;
// }
// void IntelMemory::storage()
// {
//     std::cout << "Intel的内存条开始存储了" << std::endl;
// }

// void LenovoCpu::calculator()
// {
//     std::cout << "Lenovo的cpu开始计算" << std::endl;
// }
// void LenovoVideoCard::display()
// {
//     std::cout << "Lenovo的显卡开始显示" << std::endl;
// }
// void LenovoMemory::storage()
// {
//     std::cout << "Lenovo的内存条开始存储了" << std::endl;
// }

// void test01()
// {
    
//     CPU *intelCpu = new IntelCpu;
//     VideoCard *intelCard = new IntelVideoCard;
//     Memory *intelMem = new IntelMemory;

//     Computer *computer = new Computer(intelCpu, intelCard, intelMem);
//     computer->work();
//     delete computer;
// }