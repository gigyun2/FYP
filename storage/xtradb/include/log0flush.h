/************************************************************//**
@return	end lsn of the log record, zero if did not succeed */
void
flusher(
/*=======================*/
	void);

mysql_cond_t proj_cond;
mysql_mutex_t mutex;