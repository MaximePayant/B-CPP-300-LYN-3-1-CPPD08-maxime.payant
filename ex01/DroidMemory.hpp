/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** DroidMemory.hpp
*/

#ifndef DROID_MEMORY_HPP
#define DROID_MEMORY_HPP

#include "iostream"

class DroidMemory
{

    private:
        std::size_t m_fingerPrint;
        std::size_t m_exp;

    public:
        DroidMemory();
        ~DroidMemory();

        const std::size_t& getFingerprint() const;
        const std::size_t& getExp() const;
        void setFingerprint(const std::size_t& newFingerPrint);
        void setExp(const std::size_t& newExp);

        DroidMemory& operator<<(const DroidMemory& right);
        DroidMemory& operator>>(DroidMemory& right);
        DroidMemory& operator+=(const DroidMemory& right);
        DroidMemory& operator+=(const std::size_t& right);

};

#include "DroidMemory.inl"

#endif // DROID_MEMORY_HPP