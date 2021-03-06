#pragma once

#include "common.hpp"

POLYBAR_NS

namespace signals {
  namespace eventloop {
    struct process_quit;
    struct process_update;
    struct process_input;
    struct process_check;

    struct enqueue_event;
    struct enqueue_quit;
    struct enqueue_update;
    struct enqueue_input;
    struct enqueue_check;
  }
  namespace ipc {
    struct process_command;
    struct process_hook;
    struct process_action;
  }
  namespace ui {
    struct button_press;
    struct visibility_change;
    struct dim_window;
  }
  namespace parser {
    struct change_background;
    struct change_foreground;
    struct change_underline;
    struct change_overline;
    struct change_font;
    struct change_alignment;
    struct offset_pixel;
    struct attribute_set;
    struct attribute_unset;
    struct attribute_toggle;
    struct action_begin;
    struct action_end;
    struct write_text_ascii;
    struct write_text_unicode;
    struct write_text_string;
  }
}

POLYBAR_NS_END
