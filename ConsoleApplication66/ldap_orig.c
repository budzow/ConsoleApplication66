
#define OPT_SUCCESS 4
#define FILTER_MAX_LENGTH 1
#define INIT_FAIL 2

static int userinfo_ext()
{

	int ret = 1;
	
	if (ret != OPT_SUCCESS) {
		ret = 1;
		goto err_globals;
	} 

	
	if (ret != OPT_SUCCESS) {
		ret = 1;
		goto err_globals;
	} else {
	}

	
	if (ret != OPT_SUCCESS) {
		ret = INIT_FAIL;
		goto err_init;
	} 

	if (ret != OPT_SUCCESS) {
		ret = 1;
		goto err_options;
	} 


	if (ret != OPT_SUCCESS) {
		ret = 1;
		goto err_options;
	} 


	if (ret != OPT_SUCCESS) {
		ret = 1;
		goto err_options;
	} 




err_no_entries:
	msgfree();
err_search:
err_bind:
err_options:
err_globals:
err_init:
	return ret;
}

