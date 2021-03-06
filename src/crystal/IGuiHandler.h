//
// Created by twome on 30/05/2020.
//

#ifndef CRYSTALUI_IGUIHANDLER_H
#define CRYSTALUI_IGUIHANDLER_H


#include <string>
#include <glm/fwd.hpp>
#include "enums/Cursor.h"
#include "gl/Texture.h"

namespace crystal {
    class IGuiHandler {
    public:
        virtual void set_cursor(Cursor cursor) = 0;

        virtual Texture *load_texture(const std::string &path) = 0;

        virtual glm::vec2 get_viewport_size() = 0;

        // Some events that may be useful //
        virtual void on_screen_shown(Screen *screen) {
        }

        virtual void on_screen_closed() {
        }

        virtual void on_dialog_shown(Dialog *dialog) {
        }

        virtual void on_dialog_closed() {
        }

    };
}

#endif //CRYSTALUI_IGUIHANDLER_H
