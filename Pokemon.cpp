#include "Pokemon.h"

Pokemon::Pokemon()
    :Pokemon("Unnamed", 0, 0, "None", "None")
{

}

Pokemon::Pokemon(const std::string& name, int num, int gen, std::string type, std::string specialTag) {

}

Pokemon::~Pokemon() {
    delete evolutions;
    evolutions = nullptr;
}

bool Pokemon::operator==(const Pokemon& otherPokemon) const
{
    return (this->number == otherPokemon.number)
        && (this->gen == otherPokemon.gen);
}

std::ostream& operator<<(std::ostream &outs, const Pokemon &monster)
{
    monster.display(outs);
    return outs;

}
void Pokemon::display(std::ostream &outs) const
{
    outs << "Name: " << getName() << "\n"
    << "Number: " << getNumber() << "\n"
    << "Type: " << getType() << "\n"
    << "Gen: " << getGen() << "\n"
    << "Tag: " << getSpecialTag() << "\n";
    //something to out the trivia
}


