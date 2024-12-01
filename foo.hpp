#pragma once

#include "Human.hpp"
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& humans)
{
    std::vector< char > result;

    for (auto& human : humans) {
        human.birthday();


        if (human.isMonster()) {
            result.push_back('n');
        }
        else {
            result.push_back('y'); 
        }
    }

    // Odwracamy kolejno�� element�w w wektorze
    std::reverse(result.begin(), result.end());

    return result;
}
