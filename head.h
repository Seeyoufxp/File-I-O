// #pragma once
// #include <iostream>
// #include <string>

// class CPU
// {
// public:
//     virtual void calculator() = 0;
// };
// class VideoCard
// {
// public:
//     virtual void display() = 0;
// };
// class Memory
// {
// public:
//     virtual void storage() = 0;
// };

// class Computer 
// {
// public:
//     Computer(CPU *cpu, VideoCard *vc, Memory *mem);
//     void work();
//     ~Computer();
// private:
//     CPU *m_cpu;
//     VideoCard *m_vc;
//     Memory *m_mem;
// };

// class IntelCpu : public CPU
// {
// public:
//     virtual void calculator();
// };
// class IntelVideoCard : public VideoCard
// {
// public:
//     virtual void display();
// };
// class IntelMemory : public Memory
// {
// public:
//     virtual void storage();
// };
// class LenovoCpu : public CPU
// {
// public:
//     virtual void calculator();
// };
// class LenovoVideoCard : public VideoCard
// {
// public:
//     virtual void display();
// };
// class LenovoMemory : public Memory
// {
// public:
//     virtual void storage();
// };

// void test01();