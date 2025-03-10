/* - DownZemAll! - Copyright (C) 2019-present Sebastien Vavassori
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BIG_INTEGER_H
#define BIG_INTEGER_H

#include <QtCore/QMetaType>

struct BigInteger
{
    explicit BigInteger() : value(0) {}
    explicit BigInteger(qsizetype _value) : value(_value) {}
    qsizetype value;
};

Q_DECLARE_METATYPE(BigInteger)

#endif // BIG_INTEGER_H
