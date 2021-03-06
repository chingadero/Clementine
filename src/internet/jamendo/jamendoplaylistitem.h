/* This file is part of Clementine.
   Copyright 2010, David Sansome <davidsansome@gmail.com>
   Copyright 2014, Krzysztof Sobiecki <sobkas@gmail.com>
   Copyright 2014, John Maguire <john.maguire@gmail.com>

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef INTERNET_JAMENDO_JAMENDOPLAYLISTITEM_H_
#define INTERNET_JAMENDO_JAMENDOPLAYLISTITEM_H_

#include "library/libraryplaylistitem.h"

class JamendoPlaylistItem : public LibraryPlaylistItem {
 public:
  explicit JamendoPlaylistItem(const QString& type);
  explicit JamendoPlaylistItem(const Song& song);

  bool InitFromQuery(const SqlRow& query);

  QUrl Url() const;
};

#endif  // INTERNET_JAMENDO_JAMENDOPLAYLISTITEM_H_
