#ifndef SEND_PACK_H
#define SEND_PACK_H

struct send_pack_args {
	const char *url;
	unsigned verbose:1,
		quiet:1,
		porcelain:1,
		progress:1,
		send_mirror:1,
		force_update:1,
		use_thin_pack:1,
		use_ofs_delta:1,
		dry_run:1,
		push_cert:1,
		stateless_rpc:1;
};

int send_pack(struct send_pack_args *args,
	      int fd[], struct child_process *conn,
	      struct ref *remote_refs, struct sha1_array *extra_have);

#endif
