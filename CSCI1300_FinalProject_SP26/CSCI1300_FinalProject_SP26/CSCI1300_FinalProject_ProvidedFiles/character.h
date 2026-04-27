/* TODO: Write character.h, a header file for the character class */
class Character
{

    private:
        int Number;
        string Name;
        int Agility;
        int Focus;
        int Luck;

    public:
        int getNumber()
        {
            return Number;
        }
        string getName()
        {
            return Name;
        }
        int getAgility()
        {
            return Agility;
        }
        int getFocus()
        {
            return Focus;
        }
        int getLuck()
        {
            return Luck;
        }
};
