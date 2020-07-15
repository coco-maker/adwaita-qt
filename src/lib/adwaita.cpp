
/*************************************************************************
 * Copyright (C) 2020 Jan Grulich <jgrulich@redhat.com>                  *
 *                                                                       *
 * This program is free software; you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation; either version 2 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program; if not, write to the                         *
 * Free Software Foundation, Inc.,                                       *
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA .        *
 *************************************************************************/

#include "adwaita.h"
#include "animations/adwaitaanimations.h"

namespace Adwaita
{

class StyleOptionsPrivate
{
public:
    explicit StyleOptionsPrivate(const QPalette &palette)
        : m_palette(palette)
    { }
    virtual ~StyleOptionsPrivate()
    { }

    QPalette m_palette;
    QPalette::ColorGroup m_colorGroup = QPalette::ColorGroup::Normal;
    QPalette::ColorRole m_colorRole = QPalette::ColorRole::Base;
    ColorVariant m_colorVariant = ColorVariant::Adwaita;
    bool m_active = false;
    bool m_focus = false;
    bool m_mouseHover = false;
    qreal m_opacity = AnimationData::OpacityInvalid;
    AnimationMode m_animationMode = AnimationNone;
    CheckBoxState m_checkboxState = CheckOff;
    QStyle::State m_state = QStyle::State_None;
    bool m_inMenu = false;
    bool m_sunken = false;
};

StyleOptions::StyleOptions(const QPalette &palette)
    : d_ptr(new StyleOptionsPrivate(palette))
{
}

StyleOptions::~StyleOptions()
{
}

QPalette StyleOptions::palette() const
{
    Q_D(const StyleOptions);

    return d->m_palette;
}

void StyleOptions::setColorGroup(QPalette::ColorGroup group)
{
    Q_D(StyleOptions);

    d->m_colorGroup = group;
}

QPalette::ColorGroup StyleOptions::colorGroup() const
{
    Q_D(const StyleOptions);

    return d->m_colorGroup;
}

void StyleOptions::setColorRole(QPalette::ColorRole role)
{
    Q_D(StyleOptions);

    d->m_colorRole = role;
}

QPalette::ColorRole StyleOptions::colorRole() const
{
    Q_D(const StyleOptions);

    return d->m_colorRole;
}

void StyleOptions::setColorVariant(ColorVariant variant)
{
    Q_D(StyleOptions);

    d->m_colorVariant = variant;
}

ColorVariant StyleOptions::colorVariant() const
{
    Q_D(const StyleOptions);

    return d->m_colorVariant;
}

void StyleOptions::setActive(bool active)
{
    Q_D(StyleOptions);

    d->m_active = active;
}

bool StyleOptions::active() const
{
    Q_D(const StyleOptions);

    return d->m_active;
}

void StyleOptions::setHasFocus(bool focus)
{
    Q_D(StyleOptions);

    d->m_focus = focus;
}

bool StyleOptions::hasFocus() const
{
    Q_D(const StyleOptions);

    return d->m_focus;
}

void StyleOptions::setMouseOver(bool mouseOver)
{
    Q_D(StyleOptions);

    d->m_mouseHover = mouseOver;
}

bool StyleOptions::mouseOver() const
{
    Q_D(const StyleOptions);

    return d->m_mouseHover;
}

void StyleOptions::setOpacity(qreal opacity)
{
    Q_D(StyleOptions);

    d->m_opacity = opacity;
}

qreal StyleOptions::opacity() const
{
    Q_D(const StyleOptions);

    return d->m_opacity;
}

void StyleOptions::setAnimationMode(AnimationMode mode)
{
    Q_D(StyleOptions);

    d->m_animationMode = mode;
}

AnimationMode StyleOptions::animationMode() const
{
    Q_D(const StyleOptions);

    return d->m_animationMode;
}

void StyleOptions::setCheckboxState(CheckBoxState state)
{
    Q_D(StyleOptions);

    d->m_checkboxState = state;
}

CheckBoxState StyleOptions::checkboxState() const
{
    Q_D(const StyleOptions);

    return d->m_checkboxState;
}

void StyleOptions::setState(QStyle::State state)
{
    Q_D(StyleOptions);

    d->m_state = state;
}

QStyle::State StyleOptions::state() const
{
    Q_D(const StyleOptions);

    return d->m_state;
}

void StyleOptions::setInMenu(bool inMenu)
{
    Q_D(StyleOptions);

    d->m_inMenu = inMenu;
}

bool StyleOptions::inMenu() const
{
    Q_D(const StyleOptions);

    return d->m_inMenu;
}

void StyleOptions::setSunken(bool sunken)
{
    Q_D(StyleOptions);

    d->m_sunken = sunken;
}

bool StyleOptions::sunken() const
{
    Q_D(const StyleOptions);

    return d->m_sunken;
}

} // namespace Adwaita
