/* vocabulary-window.h
 *
 * Copyright 2021 Jakub Czartek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gtk/gtk.h>
#include <adwaita.h>

G_BEGIN_DECLS

#define VOCABULARY_TYPE_WINDOW (vocabulary_window_get_type())

G_DECLARE_FINAL_TYPE (VocabularyWindow, vocabulary_window, VOCABULARY, WINDOW, AdwApplicationWindow)

G_END_DECLS
