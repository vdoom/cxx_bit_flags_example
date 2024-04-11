#include <iostream>

enum class EFlagValue
{
    FLAG_1 = 1 << 0, // 1
    FLAG_2 = 1 << 1, // 2
    FALG_3 = 1 << 2, // 4
    FLAG_4 = 1 << 3, // 8
    FLAG_5 = 1 << 4, // 16
    FLAG_6 = 1 << 5, // 32
    FLAG_7 = 1 << 6, // 64
    FLAG_8 = 1 << 7  // 128
};

struct BitFlag
{
    //TODO: Try to use unsigned char
    uint8_t m_flagValue = 0;

    void SetFlags(EFlagValue t_flag)
    {
        m_flagValue |= (int)t_flag;
    }

    void UnsetFlag(EFlagValue t_flag)
    {
        m_flagValue &= ~(int)t_flag;
    }

    void FlipFlag(EFlagValue t_flag)
    {
        m_flagValue ^= (int)t_flag;
    }

    bool HasFlag(EFlagValue t_flag)
    {
        return (m_flagValue & (int)t_flag) == (int)flag;
    }

    bool HasAnyFlag(EFlagValue t_multiFlags)
    {
        return (m_flagValue & (int)t_multiFlags) != 0;
    }
};

int main()
{
	std::cout<<"FuckThisShit\n";
	return 0;
}
