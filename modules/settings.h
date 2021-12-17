#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>
struct Settings
{
        // APP SETTINGS
      bool  ENABLE_CUSTOM_TITLE_BAR = true;
      int  MENU_WIDTH = 240;
      int  LEFT_BOX_WIDTH = 240;
      int RIGHT_BOX_WIDTH = 240;
      int TIME_ANIMATION = 500;

        // BTNS LEFT AND RIGHT BOX COLORS
      QString BTN_LEFT_BOX_COLOR = "background-color: rgb(44, 49, 58);";
      QString BTN_RIGHT_BOX_COLOR = "background-color: #ff79c6;";

        // MENU SELECTED STYLESHEET
      QString MENU_SELECTED_STYLESHEET = R"(
        border-left: 22px solid qlineargradient(spread:pad, x1:0.034, y1:0, x2:0.216, y2:0, stop:0.499 rgba(255, 121, 198, 255), stop:0.5 rgba(85, 170, 255, 0));
        background-color: rgb(40, 44, 52);
        )";
};

#endif // SETTINGS_H
