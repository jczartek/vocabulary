/* vocabulary-window.c
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

#include "vocabulary-config.h"
#include "vocabulary-window.h"

struct _VocabularyWindow
{
  AdwApplicationWindow  parent_instance;
};

G_DEFINE_TYPE (VocabularyWindow, vocabulary_window, ADW_TYPE_APPLICATION_WINDOW)

static void
vocabulary_window_class_init (VocabularyWindowClass *klass)
{
  GtkWidgetClass *widget_class = GTK_WIDGET_CLASS (klass);

  gtk_widget_class_set_template_from_resource (widget_class, "/github/com/jczartek/Vocabulary/vocabulary-window.ui");
}

static void
vocabulary_window_init (VocabularyWindow *self)
{
  gtk_widget_init_template (GTK_WIDGET (self));
}
