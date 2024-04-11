#include <iostream>

enum class EFlagValue
{
    FLAG_1 = 1 << 0, // 1
    FLAG_2 = 1 << 1, // 2
    FLAG_3 = 1 << 2, // 4
    FLAG_4 = 1 << 3, // 8
    FLAG_5 = 1 << 4, // 16
    FLAG_6 = 1 << 5, // 32
    FLAG_7 = 1 << 6, // 64
    FLAG_8 = 1 << 7  // 128
};

struct BitFlag
{
    //TODO: Try to use unsigned char
    //uint8_t m_flagValue = 0;
    unsigned char m_flagValue = 0;

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
        return (m_flagValue & (int)t_flag) == (int)t_flag;
    }

    bool HasAnyFlag(EFlagValue t_multiFlags)
    {
        return (m_flagValue & (int)t_multiFlags) != 0;
    }
};

int main()
{
	std::cout<<"FuckThisShit\n";
    BitFlag ttt;

    ttt.SetFlags(EFlagValue::FLAG_1);
    ttt.SetFlags(EFlagValue::FLAG_2);

    std::cout<<"Flag_1: "<<ttt.HasFlag(EFlagValue::FLAG_1)<<std::endl;
    std::cout<<"Flag_2: "<<ttt.HasFlag(EFlagValue::FLAG_2)<<std::endl;
    std::cout<<"Flag_3: "<<ttt.HasFlag(EFlagValue::FLAG_3)<<std::endl;
    ttt.UnsetFlag(EFlagValue::FLAG_2);
    std::cout<<"Flag_1: "<<ttt.HasFlag(EFlagValue::FLAG_1)<<std::endl;
    std::cout<<"Flag_2: "<<ttt.HasFlag(EFlagValue::FLAG_2)<<std::endl;
    std::cout<<"Flag_3: "<<ttt.HasFlag(EFlagValue::FLAG_3)<<std::endl;

	return 0;
}
