
#include "movement/move_manager.hpp"

extern "C" {
    #include "esp_console.h"
    #include "argtable3/argtable3.h"
    #include "esp_log.h"
}

#ifndef CMD_INTERFACE_HPP
#define CMD_INTERFACE_HPP

class cmd_interface
{
private:

    void register_servo_move_cmd(void);
    // cmd_interface(){};
    void register_cmds(void);
    int servo_move_cmd(void* context, int argc, char **argv);

public:
    cmd_interface(void){};
    void set_move_man(const move_manager& _move_man){move_man = _move_man;};
    move_manager move_man;
    void start_console(void);
};

#endif