/*
 *  Copyright (C) 1997-2015 JDE Developers Team
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *  Authors :
 *       Victor Arribas Raigadas <.varribas.urjc@gmail.com>
 */

#ifndef JDEROBOT_CONFIG_LOADER_H
#define JDEROBOT_CONFIG_LOADER_H

#include <iostream>
#include <string>
#include <jderobot/config/stdutils.hpp>
#include <yaml-cpp/yaml.h>
#include <yaml-cpp/exceptions.h>
#include <jderobot/config/hardcodedlocations.h>


namespace jderobotconfig {
namespace loader {


/**
 * @brief Find filename into all defined search paths.
 * Order is:
 * 1. current dir
 * 2. jderobot paths (*)
 *
 * @return empty if file was not found.
 */
std::string findConfigFile(const std::string& filename);

/**
 * @brief Loads File configuration from passed file.
 *
 * @return new YAML:Node or passed one.
 */
YAML::Node load(std::string filename);



}}//NS


#endif // JDEROBOT_CONFIG_LOADER_H
