/*
 * WTEngine Demo
 * By:  Matthew Evans
 * File:  wte_demo.hpp
 *
 * See LICENSE.txt for copyright information
 *
 * Header file for the wte_demo object
 */

#ifndef WTEDEMO_WTE_DEMO_HPP
#define WTEDEMO_WTE_DEMO_HPP

#include <wtengine/wtengine.hpp>

class wte_demo final : public wte::engine {
    public:
        wte_demo(int argc, char **argv);
        ~wte_demo();

    private:
        //  Define this to load all systems to be used by the game
        void load_systems(void) override;
        //  Define what gets loaded when a game starts
        void new_game(void) override;
        //  Define what happens at the end of a game
        void end_game(void) override;
        //  On menu open
        void on_menu_open(void) override;
        //  On menu close
        void on_menu_close(void) override;

        struct player_pols {
            inline static float x = 0.0f;
            inline static float y = 0.0f;
            inline static void reset(void) { x = y = 0.0f; };
        };
};

#endif
