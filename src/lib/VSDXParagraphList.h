/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/* libvisio
 * Version: MPL 1.1 / GPLv2+ / LGPLv2+
 *
 * The contents of this file are subject to the Mozilla Public License Version
 * 1.1 (the "License"); you may not use this file except in compliance with
 * the License or as specified alternatively below. You may obtain a copy of
 * the License at http://www.mozilla.org/MPL/
 *
 * Software distributed under the License is distributed on an "AS IS" basis,
 * WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
 * for the specific language governing rights and limitations under the
 * License.
 *
 * Major Contributor(s):
 * Copyright (C) 2011 Fridrich Strba <fridrich.strba@bluewin.ch>
 * Copyright (C) 2011 Eilidh McAdam <tibbylickle@gmail.com>
 *
 *
 * All Rights Reserved.
 *
 * For minor contributions see the git repository.
 *
 * Alternatively, the contents of this file may be used under the terms of
 * either the GNU General Public License Version 2 or later (the "GPLv2+"), or
 * the GNU Lesser General Public License Version 2 or later (the "LGPLv2+"),
 * in which case the provisions of the GPLv2+ or the LGPLv2+ are applicable
 * instead of those above.
 */

#ifndef __VSDXPARAGRAPHLIST_H__
#define __VSDXPARAGRAPHLIST_H__

#include <vector>
#include <map>

namespace libvisio
{

class VSDXParagraphListElement;
class VSDXCollector;

class VSDXParagraphList
{
public:
  VSDXParagraphList();
  VSDXParagraphList(const VSDXParagraphList &paraList);
  ~VSDXParagraphList();
  VSDXParagraphList &operator=(const VSDXParagraphList &paraList);
  void addParaIX(unsigned id, unsigned level, unsigned charCount, double indFirst, double indLeft, double indRight,
                 double spLine, double spBefore, double spAfter, unsigned char align, unsigned flags);

  void setElementsOrder(const std::vector<unsigned> &m_elementsOrder);
  void handle(VSDXCollector *collector);
  void clear();
  bool empty() const
  {
    return (m_elements.empty());
  }
private:
  std::map<unsigned, VSDXParagraphListElement *> m_elements;
  std::vector<unsigned> m_elementsOrder;
};

} // namespace libvisio

#endif // __VSDXPARAGRAPHLIST_H__
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
