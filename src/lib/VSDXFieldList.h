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

#ifndef __VSDXFIELDLIST_H__
#define __VSDXFIELDLIST_H__

#include <vector>
#include <map>
#include <libwpd/libwpd.h>
#include "VSDXDocumentStructure.h"
#include "VSDXTypes.h"

namespace libvisio
{

class VSDXCollector;

class VSDXFieldListElement
{
public:
  VSDXFieldListElement() {}
  virtual ~VSDXFieldListElement() {}
  virtual void handle(VSDXCollector *collector) = 0;
  virtual VSDXFieldListElement *clone() = 0;
  virtual WPXString getString(const std::map<unsigned, WPXString>&) = 0;
  virtual void setNameId(int) = 0;
  virtual void setFormat(unsigned short) = 0;
  virtual void setValue(double) = 0;
};

class VSDXTextField : public VSDXFieldListElement
{
public:
  VSDXTextField(unsigned id, unsigned level, int nameId, int formatStringId)
    : m_id(id),
      m_level(level),
      m_nameId(nameId),
      m_formatStringId(formatStringId) {}
  ~VSDXTextField() {}
  void handle(VSDXCollector *collector);
  VSDXFieldListElement *clone();
  WPXString getString(const std::map<unsigned, WPXString> &strVec);
  void setNameId(int nameId);
  void setFormat(unsigned short) {}
  void setValue(double) {}
private:
  unsigned m_id, m_level;
  int m_nameId, m_formatStringId;
};

class VSDXNumericField : public VSDXFieldListElement
{
public:
  VSDXNumericField(unsigned id, unsigned level, unsigned short format, double number, int formatStringId)
    : m_id(id),
      m_level(level),
      m_format(format),
      m_number(number),
      m_formatStringId(formatStringId) {}
  ~VSDXNumericField() {}
  void handle(VSDXCollector *collector);
  VSDXFieldListElement *clone();
  WPXString getString(const std::map<unsigned, WPXString> &);
  void setNameId(int) {}
  void setFormat(unsigned short format);
  void setValue(double number);
private:
  WPXString datetimeToString(const char *format, double datetime);
  unsigned m_id, m_level;
  unsigned short m_format;
  double m_number;
  int m_formatStringId;
};

class VSDXFieldList
{
public:
  VSDXFieldList();
  VSDXFieldList(const VSDXFieldList &fieldList);
  ~VSDXFieldList();
  VSDXFieldList &operator=(const VSDXFieldList &fieldList);
  void setElementsOrder(const std::vector<unsigned> &m_elementsOrder);
  void addFieldList(unsigned id, unsigned level);
  void addTextField(unsigned id, unsigned level, int nameId, int formatStringId);
  void addNumericField(unsigned id, unsigned level, unsigned short format, double number, int formatStringId);
  void addClonedField(unsigned id);
  void handle(VSDXCollector *collector);
  void clear();
  unsigned long size() const
  {
    return (unsigned long)m_elements.size();
  }
  bool empty() const
  {
    return (m_elements.empty());
  }
  VSDXFieldListElement *getElement(unsigned index);
private:
  std::map<unsigned, VSDXFieldListElement *> m_elements;
  std::vector<unsigned> m_elementsOrder;
  unsigned m_id, m_level;
};

} // namespace libvisio

#endif // __VSDXFIELDLIST_H__
/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
