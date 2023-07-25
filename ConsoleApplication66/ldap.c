
#define LDAP_OPT_SUCCESS 2

static int ldap_userinfo_ext()
{

	int ret = 1;

	if (ret != LDAP_OPT_SUCCESS) {
		goto err_ldap_options;
	}

	err_ldap_no_entries:
	err_ldap_search:
	err_ldap_options:
		return ret;
}

