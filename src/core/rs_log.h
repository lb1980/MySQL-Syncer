#ifndef _RS_LOG_H_INCLUDED_
#define _RS_LOG_H_INCLUDED_


#include <rs_config.h>
#include <rs_core.h>

#define RS_MAX_ERROR_STR        2048

#define RS_LOG_LEVEL_ERR        0
#define RS_LOG_LEVEL_INFO       1    
#define RS_LOG_LEVEL_DEBUG      2
#define RS_LOG_LEVEL_MASTER     3
#define RS_LOG_LEVEL_SLAVE      4
#define RS_LOG_LEVEL_CORE       5 

#define RS_LOG_LEVEL_MAX        5

#define RS_LOG_LEVEL_ERR_STR    "[ERROR] "
#define RS_LOG_LEVEL_INFO_STR   "[INFO]  "
#define RS_LOG_LEVEL_DEBUG_STR  "[DEBUG] "
#define RS_LOG_LEVEL_MASTER_STR "[MASTER]" 
#define RS_LOG_LEVEL_SLAVE_STR  "[SLAVE]" 
#define RS_LOG_LEVEL_CORE_STR   "[CORE]"

int rs_log_init(char *name, int flags);

void rs_log_err(rs_err_t err, const char *fmt, ...);
void rs_log_debug(rs_err_t err, const char *fmt, ...);
void rs_log_master(rs_err_t err, const char *fmt, ...);
void rs_log_slave(rs_err_t err, const char *fmt, ...);
void rs_log_core(rs_err_t err, const char *fmt, ...);
void rs_log_stderr(rs_err_t err, const char *fmt, ...);
void rs_log_info(const char *fmt, ...);

#endif
