/* Automatically generated by utils/generate-command-help.rb, do not edit. */

#ifndef __DISQUE_HELP_H
#define __DISQUE_HELP_H

static char *commandGroups[] = {
    "connection",   /* 0 */
    "server",       /* 1 */
    "cluster",      /* 2 */
    "queues",       /* 3 */
    "jobs"          /* 4 */
};

struct commandHelp {
  char *name;
  char *params;
  char *summary;
  int group;
  char *since;
} commandHelp[] = {
    { "AUTH", "password", "Authenticate to the server", 0, "1.0.0" },
    { "PING", "-", "Ping the server", 0, "1.0.0" },
    { "INFO", "[section]", "Get information and statistics about the server", 1, "1.0.0" },
    { "SHUTDOWN", "[NOSAVE] [SAVE]", "Synchronously save the dataset to disk and then shut down the server", 1, "1.0.0" },
    { "MONITOR", "-", "Listen for all requests received by the server in real time", 0, "1.0.0" },
    { "CLUSTER", "<subcommand> [OPTIONS...]", "Cluster management command", 2, "1.0.0" },
    { "CLIENT GETNAME", "-", "Get the current connection name", 0, "1.0.0" },
    { "CLIENT KILL", "ip:port", "Kill the connection of a client", 0, "1.0.0" },
    { "CLIENT LIST", "-", "Get the list of client connections", 0, "1.0.0" },
    { "CLIENT PAUSE", "timeout", "Stop processing commands from clients for some time", 0, "1.0.0" },
    { "CLIENT SETNAME", "connection-name", "Set the current connection name", 0, "1.0.0" },
    { "CONFIG GET", "parameter", "Get the value of a configuration parameter", 1, "1.0.0" },
    { "CONFIG RESETSTAT", "-", "Reset the stats returned by INFO", 1, "1.0.0" },
    { "CONFIG REWRITE", "-", "Rewrite the configuration file with the in memory configuration", 1, "1.0.0" },
    { "CONFIG SET", "parameter value", "Set a configuration parameter to the given value", 1, "1.0.0" },
    { "BGREWRITEAOF", "-", "Asynchronously rewrite the append-only file", 1, "1.0.0" },
    { "DEBUG SEGFAULT", "-", "Make the server crash", 1, "1.0.0" },
    { "DEBUG FLUSHALL", "-", "Delete all jobs and queues", 1, "1.0.0" },
    { "QUIT", "-", "Close the connection", 0, "1.0.0" },
    { "LATENCY", "<subcommnad>]", "Latency monitoring", 1, "1.0.0" },
    { "HELLO", "-", "Get list of nodes for clients connection management", 2, "1.0.0" },
    { "ADDJOB", "<queue> <job> <ms-timeout> [REPLICATE <count>] [DELAY <sec>] [RETRY <sec>] [TTL <sec>] [MAXLEN <count>] [ASYNC]", "Create a new job", 4, "1.0.0" },
    { "GETJOB", "[NOHANG] [TIMEOUT <ms-timeout>] [COUNT <count>] [WITHCOUNTERS] FROM queue1 queue2 ... queueN", "Fetch jobs from queues", 4, "1.0.0" },
    { "ACKJOB", "<jobid> [<jobid> <jobid> ...]", "Acknowledge jobs as delivered", 4, "1.0.0" },
    { "FASTACK", "<jobid> [<jobid> <jobid> ...]", "Acknowledge jobs as delivered deleting the job from the reachable nodes ASAP", 4, "1.0.0" },
    { "WORKING", "<jobid>", "Attempt to postpone next delivery of the specified job", 4, "1.0.0" },
    { "NACK", "<jobid> [<jobid> <jobid> ...]", "Negative acknowledge: increment the NACK counter for the job and ask for a next delivery ASAP", 4, "1.0.0" },
    { "QLEN", "<queue>", "Return number of queued jobs in the specified queue in the local node", 3, "1.0.0" },
    { "GLOBALQLEN", "<queue>", "Return number of queued jobs in the specified queue across the cluster - it's cached for a second", 3, "1.0.0" },
    { "QSTAT", "<queue>", "Return local node queue statistics", 3, "1.0.0" },
    { "QPEEK", "<queue> <count>", "Inspect jobs into a queue without actually fetching them", 3, "1.0.0" },
    { "ENQUEUE", "<jobid> [<jobid> <jobid> ...]", "Force local node to put the specified jobs back into the queue", 3, "1.0.0" },
    { "DEQUEUE", "<jobid> [<jobid> <jobid> ...]", "Force local node to remove the specified jobs out of the queue", 3, "1.0.0" },
    { "DELJOB", "<jobid> [<jobid> <jobid> ...]", "Remove job from local node", 4, "1.0.0" },
    { "SHOW", "<jobid>", "Show info about the specified job", 4, "1.0.0" },
    { "QSCAN", "[COUNT <count>] [BUSYLOOP] [MINLEN <len>] [MAXLEN <len>] [IMPORTRATE <rate>]", "Iterate local node queues", 3, "1.0.0" },
    { "JSCAN", "[<cursor>] [COUNT <count>] [BUSYLOOP] [QUEUE <queue>] [STATE <state1> STATE <state2> ... STATE <stateN>] [REPLY all|id]", "Iterate local node jobs", 4, "1.0.0" },
    { "PAUSE", "<queue> option1 [option2 ... optionN]", "Change queue paused state", 3, "1.0.0" }
};

#endif
