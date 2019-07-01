/etc/supervisor/conf.d/supervisord.conf

[supervisord]
nodaemon=true

[program:nginx]
priority=10
command=/usr/sbin/nginx
stdout_events_enabled=true
stderr_events_enabled=true

[program:core]
priority=30
command=%(ENV_PWD)s/smartDeviceLinkCore
stdout_logfile=/dev/stdout




ps -A

# lsof -i
COMMAND   PID USER   FD   TYPE DEVICE SIZE/OFF NODE NAME
nginx      18 root    6u  IPv4 452890      0t0  TCP *:http-alt (LISTEN)
nginx      18 root    7u  IPv4 452891      0t0  TCP *:3001 (LISTEN)
MainThrea  19 root    7u  IPv4 443356      0t0  TCP *:12345 (LISTEN)
MainThrea  19 root    8u  IPv4 443359      0t0  TCP ad85d9334b14:8087 (LISTEN)
MainThrea  19 root   10u  IPv4 443360      0t0  TCP ad85d9334b14:45418->ad85d9334b14:8087 (ESTABLISHED)
MainThrea  19 root   11u  IPv4 454684      0t0  TCP ad85d9334b14:8090 (LISTEN)
MainThrea  19 root   12u  IPv4 452899      0t0  TCP ad85d9334b14:8087->ad85d9334b14:45418 (ESTABLISHED)
nginx      20 root    6u  IPv4 452890      0t0  TCP *:http-alt (LISTEN)
nginx      20 root    7u  IPv4 452891      0t0  TCP *:3001 (LISTEN)

kill 19
