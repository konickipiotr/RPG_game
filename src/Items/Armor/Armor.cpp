#include "Armor.hpp"

Armor::Armor(std::string _name, std::string _description, int _price, int _armor)
	:IArmor(_name, _description, _price, _armor)
{
	armorType = ArmorType::Breastplate;
}
