
int cnode_listen(int port);
int cnode_connect(char *ip_addr, char *hostname, char *nodename, char *fullnodename, char *cookie);
void cnode_process(int fd);
static void process_gen_call(int fd, ETERM *from, ETERM *msg);
void print_usage();
static void erl_mem_manager_report();
int foo(int p);
