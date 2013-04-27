/* AUTOMATICALLY GENERATED - DO NOT EDIT - see ../irr_util/README */

#include "scan.h"

char *obj_template[IRR_MAX_CLASS_KEYS] = {
"aut-num:      [mandatory]   [single]     [primary/look-up key]\n"
"as-name:      [mandatory]   [single]     [ ]\n"
"descr:        [mandatory]   [single]     [ ]\n"
"member-of:    [optional]    [multiple]   [ ]\n"
"import:       [optional]    [multiple]   [ ]\n"
"mp-import:    [optional]    [multiple]   [ ]\n"
"export:       [optional]    [multiple]   [ ]\n"
"mp-export:    [optional]    [multiple]   [ ]\n"
"default:      [optional]    [multiple]   [ ]\n"
"mp-default:   [optional]    [multiple]   [ ]\n"
"admin-c:      [mandatory]   [multiple]   [ ]\n"
"tech-c:       [mandatory]   [multiple]   [ ]\n"
"remarks:      [optional]    [multiple]   [ ]\n"
"notify:       [optional]    [multiple]   [ ]\n"
"mnt-by:       [mandatory]   [multiple]   [ ]\n"
"changed:      [mandatory]   [multiple]   [ ]\n"
"source:       [mandatory]   [single]     [ ]\n",

"as-set:        [mandatory]   [single]     [primary/look-up key]\n"
"descr:         [mandatory]   [single]     [ ]\n"
"members:       [optional]    [multiple]   [ ]\n"
"mbrs-by-ref:   [optional]    [multiple]   [ ]\n"
"admin-c:       [optional]    [multiple]   [ ]\n"
"tech-c:        [optional]    [multiple]   [ ]\n"
"remarks:       [optional]    [multiple]   [ ]\n"
"notify:        [optional]    [multiple]   [ ]\n"
"mnt-by:        [mandatory]   [multiple]   [ ]\n"
"changed:       [mandatory]   [multiple]   [ ]\n"
"source:        [mandatory]   [single]     [ ]\n",

"mntner:    [mandatory]   [single]     [primary/look-up key]\n"
"descr:     [mandatory]   [single]     [ ]\n"
"admin-c:   [mandatory]   [multiple]   [ ]\n"
"tech-c:    [optional]    [multiple]   [ ]\n"
"upd-to:    [mandatory]   [multiple]   [ ]\n"
"mnt-nfy:   [optional]    [multiple]   [ ]\n"
"auth:      [mandatory]   [multiple]   [ ]\n"
"remarks:   [optional]    [multiple]   [ ]\n"
"notify:    [optional]    [multiple]   [ ]\n"
"mnt-by:    [mandatory]   [multiple]   [ ]\n"
"changed:   [mandatory]   [multiple]   [ ]\n"
"source:    [mandatory]   [single]     [ ]\n",

"route:          [mandatory]   [single]     [primary/look-up key]\n"
"descr:          [mandatory]   [single]     [ ]\n"
"origin:         [mandatory]   [single]     [primary key]\n"
"holes:          [optional]    [multiple]   [ ]\n"
"member-of:      [optional]    [multiple]   [ ]\n"
"inject:         [optional]    [multiple]   [ ]\n"
"aggr-bndry:     [optional]    [single]     [ ]\n"
"aggr-mtd:       [optional]    [single]     [ ]\n"
"export-comps:   [optional]    [single]     [ ]\n"
"components:     [optional]    [single]     [ ]\n"
"admin-c:        [optional]    [multiple]   [ ]\n"
"tech-c:         [optional]    [multiple]   [ ]\n"
"geoidx:         [optional]    [multiple]   [ ]\n"
"roa-uri:        [optional]    [single]     [ ]\n"
"remarks:        [optional]    [multiple]   [ ]\n"
"notify:         [optional]    [multiple]   [ ]\n"
"mnt-by:         [mandatory]   [multiple]   [ ]\n"
"changed:        [mandatory]   [multiple]   [ ]\n"
"source:         [mandatory]   [single]     [ ]\n",

"route6:         [mandatory]   [single]     [primary/look-up key]\n"
"descr:          [mandatory]   [single]     [ ]\n"
"origin:         [mandatory]   [single]     [primary key]\n"
"holes:          [optional]    [multiple]   [ ]\n"
"member-of:      [optional]    [multiple]   [ ]\n"
"inject:         [optional]    [multiple]   [ ]\n"
"aggr-bndry:     [optional]    [single]     [ ]\n"
"aggr-mtd:       [optional]    [single]     [ ]\n"
"export-comps:   [optional]    [single]     [ ]\n"
"components:     [optional]    [single]     [ ]\n"
"admin-c:        [optional]    [multiple]   [ ]\n"
"tech-c:         [optional]    [multiple]   [ ]\n"
"geoidx:         [optional]    [multiple]   [ ]\n"
"roa-uri:        [optional]    [single]     [ ]\n"
"remarks:        [optional]    [multiple]   [ ]\n"
"notify:         [optional]    [multiple]   [ ]\n"
"mnt-by:         [mandatory]   [multiple]   [ ]\n"
"changed:        [mandatory]   [multiple]   [ ]\n"
"source:         [mandatory]   [single]     [ ]\n",

"route-set:     [mandatory]   [single]     [primary/look-up key]\n"
"members:       [optional]    [multiple]   [ ]\n"
"mp-members:    [optional]    [multiple]   [ ]\n"
"mbrs-by-ref:   [optional]    [multiple]   [ ]\n"
"descr:         [mandatory]   [single]     [ ]\n"
"admin-c:       [optional]    [multiple]   [ ]\n"
"tech-c:        [optional]    [multiple]   [ ]\n"
"remarks:       [optional]    [multiple]   [ ]\n"
"notify:        [optional]    [multiple]   [ ]\n"
"mnt-by:        [mandatory]   [multiple]   [ ]\n"
"changed:       [mandatory]   [multiple]   [ ]\n"
"source:        [mandatory]   [single]     [ ]\n",

"inet-rtr:    [mandatory]   [single]     [primary/look-up key]\n"
"descr:       [optional]    [single]     [ ]\n"
"alias:       [optional]    [multiple]   [ ]\n"
"local-as:    [mandatory]   [single]     [ ]\n"
"ifaddr:      [optional]    [multiple]   [ ]\n"
"interface:   [optional]    [multiple]   [ ]\n"
"peer:        [optional]    [multiple]   [ ]\n"
"mp-peer:     [optional]    [multiple]   [ ]\n"
"member-of:   [optional]    [multiple]   [ ]\n"
"rs-in:       [optional]    [single]     [ ]\n"
"rs-out:      [optional]    [single]     [ ]\n"
"admin-c:     [optional]    [multiple]   [ ]\n"
"tech-c:      [optional]    [multiple]   [ ]\n"
"remarks:     [optional]    [multiple]   [ ]\n"
"notify:      [optional]    [multiple]   [ ]\n"
"mnt-by:      [mandatory]   [multiple]   [ ]\n"
"changed:     [mandatory]   [multiple]   [ ]\n"
"source:      [mandatory]   [single]     [ ]\n",

"rtr-set:       [mandatory]   [single]     [primary/look-up key]\n"
"descr:         [mandatory]   [single]     [ ]\n"
"members:       [optional]    [multiple]   [ ]\n"
"mp-members:    [optional]    [multiple]   [ ]\n"
"mbrs-by-ref:   [optional]    [multiple]   [ ]\n"
"admin-c:       [optional]    [multiple]   [ ]\n"
"tech-c:        [optional]    [multiple]   [ ]\n"
"remarks:       [optional]    [multiple]   [ ]\n"
"notify:        [optional]    [multiple]   [ ]\n"
"mnt-by:        [mandatory]   [multiple]   [ ]\n"
"changed:       [mandatory]   [multiple]   [ ]\n"
"source:        [mandatory]   [single]     [ ]\n",

"person:    [mandatory]   [single]     [look-up key]\n"
"address:   [mandatory]   [multiple]   [ ]\n"
"phone:     [mandatory]   [multiple]   [ ]\n"
"fax-no:    [optional]    [multiple]   [ ]\n"
"e-mail:    [mandatory]   [multiple]   [ ]\n"
"nic-hdl:   [mandatory]   [single]     [primary/look-up key]\n"
"remarks:   [optional]    [multiple]   [ ]\n"
"notify:    [optional]    [multiple]   [ ]\n"
"mnt-by:    [mandatory]   [multiple]   [ ]\n"
"changed:   [mandatory]   [multiple]   [ ]\n"
"source:    [mandatory]   [single]     [ ]\n",

"role:      [mandatory]   [single]     [look-up key]\n"
"trouble:   [optional]    [multiple]   [ ]\n"
"address:   [mandatory]   [multiple]   [ ]\n"
"phone:     [mandatory]   [multiple]   [ ]\n"
"fax-no:    [optional]    [multiple]   [ ]\n"
"e-mail:    [mandatory]   [multiple]   [ ]\n"
"admin-c:   [optional]    [multiple]   [ ]\n"
"tech-c:    [optional]    [multiple]   [ ]\n"
"nic-hdl:   [mandatory]   [single]     [primary/look-up key]\n"
"remarks:   [optional]    [multiple]   [ ]\n"
"notify:    [optional]    [multiple]   [ ]\n"
"mnt-by:    [mandatory]   [multiple]   [ ]\n"
"changed:   [mandatory]   [multiple]   [ ]\n"
"source:    [mandatory]   [single]     [ ]\n",

"filter-set:   [mandatory]   [single]     [primary/look-up key]\n"
"descr:        [mandatory]   [single]     [ ]\n"
"filter:       [mandatory]   [single]     [ ]\n"
"mp-filter:    [optional]    [single]     [ ]\n"
"admin-c:      [optional]    [multiple]   [ ]\n"
"tech-c:       [optional]    [multiple]   [ ]\n"
"remarks:      [optional]    [multiple]   [ ]\n"
"notify:       [optional]    [multiple]   [ ]\n"
"mnt-by:       [mandatory]   [multiple]   [ ]\n"
"changed:      [mandatory]   [multiple]   [ ]\n"
"source:       [mandatory]   [single]     [ ]\n",

"peering-set:   [mandatory]   [single]     [primary/look-up key]\n"
"descr:         [mandatory]   [single]     [ ]\n"
"peering:       [optional]    [multiple]   [ ]\n"
"mp-peering:    [optional]    [multiple]   [ ]\n"
"admin-c:       [optional]    [multiple]   [ ]\n"
"tech-c:        [optional]    [multiple]   [ ]\n"
"remarks:       [optional]    [multiple]   [ ]\n"
"notify:        [optional]    [multiple]   [ ]\n"
"mnt-by:        [mandatory]   [multiple]   [ ]\n"
"changed:       [mandatory]   [multiple]   [ ]\n"
"source:        [mandatory]   [single]     [ ]\n",

"key-cert:   [mandatory]   [single]     [primary/look-up key]\n"
"method:     [generated]   [single]     [ ]\n"
"owner:      [generated]   [multiple]   [ ]\n"
"fingerpr:   [generated]   [single]     [ ]\n"
"certif:     [mandatory]   [single]     [ ]\n"
"remarks:    [optional]    [multiple]   [ ]\n"
"notify:     [optional]    [multiple]   [ ]\n"
"mnt-by:     [mandatory]   [multiple]   [ ]\n"
"changed:    [mandatory]   [multiple]   [ ]\n"
"source:     [mandatory]   [single]     [ ]\n",

"dictionary:     [mandatory]   [single]     [primary/look-up key]\n"
"descr:          [mandatory]   [single]     [ ]\n"
"admin-c:        [optional]    [multiple]   [ ]\n"
"tech-c:         [optional]    [multiple]   [ ]\n"
"typedef:        [optional]    [multiple]   [ ]\n"
"rp-attribute:   [optional]    [multiple]   [ ]\n"
"protocol:       [optional]    [multiple]   [ ]\n"
"afi:            [optional]    [multiple]   [ ]\n"
"remarks:        [optional]    [multiple]   [ ]\n"
"notify:         [optional]    [multiple]   [ ]\n"
"mnt-by:         [mandatory]   [multiple]   [ ]\n"
"changed:        [mandatory]   [multiple]   [ ]\n"
"source:         [mandatory]   [single]     [ ]\n",

"repository:           [mandatory]   [single]     [primary/look-up key]\n"
"query-address:        [mandatory]   [multiple]   [ ]\n"
"response-auth-type:   [mandatory]   [multiple]   [ ]\n"
"submit-address:       [mandatory]   [multiple]   [ ]\n"
"submit-auth-type:     [mandatory]   [multiple]   [ ]\n"
"repository-cert:      [mandatory]   [multiple]   [ ]\n"
"expire:               [mandatory]   [single]     [ ]\n"
"heartbeat-interval:   [mandatory]   [single]     [ ]\n"
"descr:                [optional]    [single]     [ ]\n"
"admin-c:              [mandatory]   [multiple]   [ ]\n"
"tech-c:               [mandatory]   [multiple]   [ ]\n"
"remarks:              [optional]    [multiple]   [ ]\n"
"notify:               [optional]    [multiple]   [ ]\n"
"mnt-by:               [mandatory]   [multiple]   [ ]\n"
"changed:              [mandatory]   [multiple]   [ ]\n"
"source:               [mandatory]   [single]     [ ]\n",

"inetnum:   [mandatory]   [single]     [primary/look-up key]\n"
"netname:   [mandatory]   [single]     [ ]\n"
"descr:     [mandatory]   [single]     [ ]\n"
"country:   [mandatory]   [multiple]   [ ]\n"
"admin-c:   [mandatory]   [multiple]   [ ]\n"
"tech-c:    [mandatory]   [multiple]   [ ]\n"
"rev-srv:   [optional]    [multiple]   [ ]\n"
"status:    [mandatory]   [single]     [ ]\n"
"remarks:   [optional]    [multiple]   [ ]\n"
"notify:    [optional]    [multiple]   [ ]\n"
"mnt-by:    [mandatory]   [multiple]   [ ]\n"
"changed:   [mandatory]   [multiple]   [ ]\n"
"source:    [mandatory]   [single]     [ ]\n",

"inet6num:   [mandatory]   [single]     [primary/look-up key]\n"
"netname:    [mandatory]   [single]     [ ]\n"
"descr:      [mandatory]   [single]     [ ]\n"
"country:    [mandatory]   [multiple]   [ ]\n"
"admin-c:    [mandatory]   [multiple]   [ ]\n"
"tech-c:     [mandatory]   [multiple]   [ ]\n"
"rev-srv:    [optional]    [multiple]   [ ]\n"
"status:     [mandatory]   [single]     [ ]\n"
"remarks:    [optional]    [multiple]   [ ]\n"
"notify:     [optional]    [multiple]   [ ]\n"
"mnt-by:     [mandatory]   [multiple]   [ ]\n"
"changed:    [mandatory]   [multiple]   [ ]\n"
"source:     [mandatory]   [single]     [ ]\n",

"as-block:   [mandatory]   [single]     [primary/look-up key]\n"
"descr:      [mandatory]   [multiple]   [ ]\n"
"admin-c:    [mandatory]   [multiple]   [ ]\n"
"tech-c:     [mandatory]   [multiple]   [ ]\n"
"remarks:    [optional]    [multiple]   [ ]\n"
"notify:     [optional]    [multiple]   [ ]\n"
"mnt-by:     [mandatory]   [multiple]   [ ]\n"
"changed:    [mandatory]   [multiple]   [ ]\n"
"source:     [mandatory]   [single]     [ ]\n",

"domain:    [mandatory]   [single]     [primary/look-up key]\n"
"descr:     [mandatory]   [single]     [ ]\n"
"admin-c:   [mandatory]   [multiple]   [ ]\n"
"tech-c:    [mandatory]   [multiple]   [ ]\n"
"zone-c:    [mandatory]   [multiple]   [ ]\n"
"nserver:   [optional]    [multiple]   [ ]\n"
"sub-dom:   [optional]    [multiple]   [ ]\n"
"dom-net:   [optional]    [multiple]   [ ]\n"
"refer:     [optional]    [single]     [ ]\n"
"remarks:   [optional]    [multiple]   [ ]\n"
"notify:    [optional]    [multiple]   [ ]\n"
"mnt-by:    [optional]    [multiple]   [ ]\n"
"changed:   [mandatory]   [multiple]   [ ]\n"
"source:    [mandatory]   [single]     [ ]\n",

"limerick:   [mandatory]   [single]     [primary/look-up key]\n"
"descr:      [optional]    [multiple]   [ ]\n"
"text:       [mandatory]   [multiple]   [ ]\n"
"admin-c:    [mandatory]   [multiple]   [ ]\n"
"author:     [mandatory]   [multiple]   [ ]\n"
"remarks:    [optional]    [multiple]   [ ]\n"
"notify:     [optional]    [multiple]   [ ]\n"
"mnt-by:     [mandatory]   [multiple]   [ ]\n"
"changed:    [mandatory]   [multiple]   [ ]\n"
"source:     [mandatory]   [single]     [ ]\n",

"ipv6-site:     [mandatory]   [single]     [primary/look-up key]\n"
"origin:        [mandatory]   [single]     [ ]\n"
"descr:         [mandatory]   [multiple]   [ ]\n"
"location:      [optional]    [multiple]   [ ]\n"
"country:       [optional]    [multiple]   [ ]\n"
"prefix:        [optional]    [multiple]   [look-up key]\n"
"application:   [optional]    [multiple]   [ ]\n"
"tunnel:        [optional]    [multiple]   [ ]\n"
"contact:       [mandatory]   [multiple]   [ ]\n"
"url:           [optional]    [multiple]   [ ]\n"
"remarks:       [optional]    [multiple]   [ ]\n"
"notify:        [optional]    [multiple]   [ ]\n"
"mnt-by:        [mandatory]   [multiple]   [ ]\n"
"changed:       [mandatory]   [multiple]   [ ]\n"
"source:        [mandatory]   [single]     [ ]\n",

};
/* number of objects (21) */
