/*
 * Copyright (C) 2012 Kolibre
 *
 * This file is part of kolibre-daisyonline.
 *
 * Kolibre-daisyonline is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2.1 of the License, or
 * (at your option) any later version.
 *
 * Kolibre-daisyonline is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HILITESTART_H_
#define HILITESTART_H_

#include "BookmarkBase.h"

namespace kdo
{

class HiliteStart: public kdo::BookmarkBase
{
public:
    HiliteStart();
    HiliteStart(std::string ncxRef, std::string URI);
    HiliteStart(std::string ncxRef, std::string URI, std::string timeOffset);
    HiliteStart(std::string ncxRef, std::string URI, int charOffset);
    HiliteStart(std::string ncxRef, std::string URI, std::string timeOffset, int charOffset);
    HiliteStart(kdo::BookmarkBase base);
    virtual ~HiliteStart();
};

} /* namespace kdo */
#endif /* HILITESTART_H_ */