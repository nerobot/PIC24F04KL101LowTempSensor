
#include <xc.h>
#include "mcp9808.h"
#include "i2c1.h"


uint8_t initMCP(){
    if (i2cRead16Bit(MCP9808_I2CADDR_DEFAULT, MCP9808_REG_MANUF_ID) != 0x0054) return 0;
    if (i2cRead16Bit(MCP9808_I2CADDR_DEFAULT, MCP9808_REG_DEVICE_ID) != 0x0400) return 0;
    
    i2cWrite16Bit(MCP9808_I2CADDR_DEFAULT, MCP9808_REG_CONFIG, 0x0);
    return 1;
}