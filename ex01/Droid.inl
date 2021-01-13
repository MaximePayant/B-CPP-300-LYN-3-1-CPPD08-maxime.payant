/*
** EPITECH PROJECT, 2021
** CPP_D07M
** File description:
** Droid.inl
*/

inline void Droid::operator=(const Droid& droid)
{
    m_id = droid.m_id;
    m_energy = droid.m_energy;
    delete(m_status);
    m_status = new std::string(*droid.m_status);
}

inline bool Droid::operator==(const Droid& droid)
{
    if (m_status == droid.m_status)
        return (true);
    return (false);
}

inline bool Droid::operator!=(const Droid& droid)
{
    if (m_status == droid.m_status)
        return (false);
    return (true);
}

inline void Droid::operator<<(size_t& energyTank)
{
    size_t dif = 100 - m_energy;

    dif = (dif > energyTank ? energyTank : dif);
    m_energy += dif;
    energyTank -= dif;
}

inline std::ostream& operator<<(std::ostream& os, const Droid& droid)
{
    os << "Droid '"
        << droid.getId()
        << "', "
        << *droid.getStatus()
        << ", "
        << droid.getEnergy();
    return (os);
}