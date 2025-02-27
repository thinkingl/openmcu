/*
 * PLEASE NOTE: 
 * 
 * This file is automatically generated by tag_dll.awk.
 * It contains tag_typedef_t for tag references.
 * 
 * Do not, repeat, do not edit this file. Edit 'nta_tag.c' instead.
 * 
 */

#include "config.h"

#include <sofia-sip/su_tag_class.h>

#if defined _WIN32 || defined HAVE_OPEN_C
#define EXPORT __declspec(dllexport)
#else
#define EXPORT
#endif

#include <stddef.h>

#undef TAG_NAMESPACE
#define TAG_NAMESPACE "nta"

extern tag_typedef_t ntatag_mclass;
EXPORT tag_typedef_t ntatag_mclass_ref = 
  REFTAG_TYPEDEF(ntatag_mclass);
extern tag_typedef_t ntatag_bad_req_mask;
EXPORT tag_typedef_t ntatag_bad_req_mask_ref = 
  REFTAG_TYPEDEF(ntatag_bad_req_mask);
extern tag_typedef_t ntatag_bad_resp_mask;
EXPORT tag_typedef_t ntatag_bad_resp_mask_ref = 
  REFTAG_TYPEDEF(ntatag_bad_resp_mask);
extern tag_typedef_t ntatag_default_proxy;
EXPORT tag_typedef_t ntatag_default_proxy_ref = 
  REFTAG_TYPEDEF(ntatag_default_proxy);
extern tag_typedef_t ntatag_contact;
EXPORT tag_typedef_t ntatag_contact_ref = 
  REFTAG_TYPEDEF(ntatag_contact);
extern tag_typedef_t ntatag_target;
EXPORT tag_typedef_t ntatag_target_ref = 
  REFTAG_TYPEDEF(ntatag_target);
extern tag_typedef_t ntatag_aliases;
EXPORT tag_typedef_t ntatag_aliases_ref = 
  REFTAG_TYPEDEF(ntatag_aliases);
extern tag_typedef_t ntatag_method;
EXPORT tag_typedef_t ntatag_method_ref = 
  REFTAG_TYPEDEF(ntatag_method);
extern tag_typedef_t ntatag_branch_key;
EXPORT tag_typedef_t ntatag_branch_key_ref = 
  REFTAG_TYPEDEF(ntatag_branch_key);
extern tag_typedef_t ntatag_ack_branch;
EXPORT tag_typedef_t ntatag_ack_branch_ref = 
  REFTAG_TYPEDEF(ntatag_ack_branch);
extern tag_typedef_t ntatag_comp;
EXPORT tag_typedef_t ntatag_comp_ref = 
  REFTAG_TYPEDEF(ntatag_comp);
extern tag_typedef_t ntatag_msg;
EXPORT tag_typedef_t ntatag_msg_ref = 
  REFTAG_TYPEDEF(ntatag_msg);
extern tag_typedef_t ntatag_tport;
EXPORT tag_typedef_t ntatag_tport_ref = 
  REFTAG_TYPEDEF(ntatag_tport);
extern tag_typedef_t ntatag_smime;
EXPORT tag_typedef_t ntatag_smime_ref = 
  REFTAG_TYPEDEF(ntatag_smime);
extern tag_typedef_t ntatag_remote_cseq;
EXPORT tag_typedef_t ntatag_remote_cseq_ref = 
  REFTAG_TYPEDEF(ntatag_remote_cseq);
extern tag_typedef_t ntatag_maxsize;
EXPORT tag_typedef_t ntatag_maxsize_ref = 
  REFTAG_TYPEDEF(ntatag_maxsize);
extern tag_typedef_t ntatag_max_proceeding;
EXPORT tag_typedef_t ntatag_max_proceeding_ref = 
  REFTAG_TYPEDEF(ntatag_max_proceeding);
extern tag_typedef_t ntatag_udp_mtu;
EXPORT tag_typedef_t ntatag_udp_mtu_ref = 
  REFTAG_TYPEDEF(ntatag_udp_mtu);
extern tag_typedef_t ntatag_max_forwards;
EXPORT tag_typedef_t ntatag_max_forwards_ref = 
  REFTAG_TYPEDEF(ntatag_max_forwards);
extern tag_typedef_t ntatag_sip_t1;
EXPORT tag_typedef_t ntatag_sip_t1_ref = 
  REFTAG_TYPEDEF(ntatag_sip_t1);
extern tag_typedef_t ntatag_sip_t1x64;
EXPORT tag_typedef_t ntatag_sip_t1x64_ref = 
  REFTAG_TYPEDEF(ntatag_sip_t1x64);
extern tag_typedef_t ntatag_sip_t2;
EXPORT tag_typedef_t ntatag_sip_t2_ref = 
  REFTAG_TYPEDEF(ntatag_sip_t2);
extern tag_typedef_t ntatag_sip_t4;
EXPORT tag_typedef_t ntatag_sip_t4_ref = 
  REFTAG_TYPEDEF(ntatag_sip_t4);
extern tag_typedef_t ntatag_progress;
EXPORT tag_typedef_t ntatag_progress_ref = 
  REFTAG_TYPEDEF(ntatag_progress);
extern tag_typedef_t ntatag_timer_c;
EXPORT tag_typedef_t ntatag_timer_c_ref = 
  REFTAG_TYPEDEF(ntatag_timer_c);
extern tag_typedef_t ntatag_graylist;
EXPORT tag_typedef_t ntatag_graylist_ref = 
  REFTAG_TYPEDEF(ntatag_graylist);
extern tag_typedef_t ntatag_blacklist;
EXPORT tag_typedef_t ntatag_blacklist_ref = 
  REFTAG_TYPEDEF(ntatag_blacklist);
extern tag_typedef_t ntatag_debug_drop_prob;
EXPORT tag_typedef_t ntatag_debug_drop_prob_ref = 
  REFTAG_TYPEDEF(ntatag_debug_drop_prob);
extern tag_typedef_t ntatag_sigcomp_options;
EXPORT tag_typedef_t ntatag_sigcomp_options_ref = 
  REFTAG_TYPEDEF(ntatag_sigcomp_options);
extern tag_typedef_t ntatag_sigcomp_close;
EXPORT tag_typedef_t ntatag_sigcomp_close_ref = 
  REFTAG_TYPEDEF(ntatag_sigcomp_close);
extern tag_typedef_t ntatag_sigcomp_aware;
EXPORT tag_typedef_t ntatag_sigcomp_aware_ref = 
  REFTAG_TYPEDEF(ntatag_sigcomp_aware);
extern tag_typedef_t ntatag_sigcomp_algorithm;
EXPORT tag_typedef_t ntatag_sigcomp_algorithm_ref = 
  REFTAG_TYPEDEF(ntatag_sigcomp_algorithm);
extern tag_typedef_t ntatag_ua;
EXPORT tag_typedef_t ntatag_ua_ref = 
  REFTAG_TYPEDEF(ntatag_ua);
extern tag_typedef_t ntatag_stateless;
EXPORT tag_typedef_t ntatag_stateless_ref = 
  REFTAG_TYPEDEF(ntatag_stateless);
extern tag_typedef_t ntatag_user_via;
EXPORT tag_typedef_t ntatag_user_via_ref = 
  REFTAG_TYPEDEF(ntatag_user_via);
extern tag_typedef_t ntatag_pass_100;
EXPORT tag_typedef_t ntatag_pass_100_ref = 
  REFTAG_TYPEDEF(ntatag_pass_100);
extern tag_typedef_t ntatag_extra_100;
EXPORT tag_typedef_t ntatag_extra_100_ref = 
  REFTAG_TYPEDEF(ntatag_extra_100);
extern tag_typedef_t ntatag_timeout_408;
EXPORT tag_typedef_t ntatag_timeout_408_ref = 
  REFTAG_TYPEDEF(ntatag_timeout_408);
extern tag_typedef_t ntatag_pass_408;
EXPORT tag_typedef_t ntatag_pass_408_ref = 
  REFTAG_TYPEDEF(ntatag_pass_408);
extern tag_typedef_t ntatag_merge_482;
EXPORT tag_typedef_t ntatag_merge_482_ref = 
  REFTAG_TYPEDEF(ntatag_merge_482);
extern tag_typedef_t ntatag_cancel_2543;
EXPORT tag_typedef_t ntatag_cancel_2543_ref = 
  REFTAG_TYPEDEF(ntatag_cancel_2543);
extern tag_typedef_t ntatag_cancel_408;
EXPORT tag_typedef_t ntatag_cancel_408_ref = 
  REFTAG_TYPEDEF(ntatag_cancel_408);
extern tag_typedef_t ntatag_cancel_487;
EXPORT tag_typedef_t ntatag_cancel_487_ref = 
  REFTAG_TYPEDEF(ntatag_cancel_487);
extern tag_typedef_t ntatag_tag_3261;
EXPORT tag_typedef_t ntatag_tag_3261_ref = 
  REFTAG_TYPEDEF(ntatag_tag_3261);
extern tag_typedef_t ntatag_rel100;
EXPORT tag_typedef_t ntatag_rel100_ref = 
  REFTAG_TYPEDEF(ntatag_rel100);
extern tag_typedef_t ntatag_no_dialog;
EXPORT tag_typedef_t ntatag_no_dialog_ref = 
  REFTAG_TYPEDEF(ntatag_no_dialog);
extern tag_typedef_t ntatag_use_timestamp;
EXPORT tag_typedef_t ntatag_use_timestamp_ref = 
  REFTAG_TYPEDEF(ntatag_use_timestamp);
extern tag_typedef_t ntatag_sipflags;
EXPORT tag_typedef_t ntatag_sipflags_ref = 
  REFTAG_TYPEDEF(ntatag_sipflags);
extern tag_typedef_t ntatag_client_rport;
EXPORT tag_typedef_t ntatag_client_rport_ref = 
  REFTAG_TYPEDEF(ntatag_client_rport);
extern tag_typedef_t ntatag_server_rport;
EXPORT tag_typedef_t ntatag_server_rport_ref = 
  REFTAG_TYPEDEF(ntatag_server_rport);
extern tag_typedef_t ntatag_tcp_rport;
EXPORT tag_typedef_t ntatag_tcp_rport_ref = 
  REFTAG_TYPEDEF(ntatag_tcp_rport);
extern tag_typedef_t ntatag_tls_rport;
EXPORT tag_typedef_t ntatag_tls_rport_ref = 
  REFTAG_TYPEDEF(ntatag_tls_rport);
extern tag_typedef_t ntatag_preload;
EXPORT tag_typedef_t ntatag_preload_ref = 
  REFTAG_TYPEDEF(ntatag_preload);
extern tag_typedef_t ntatag_use_naptr;
EXPORT tag_typedef_t ntatag_use_naptr_ref = 
  REFTAG_TYPEDEF(ntatag_use_naptr);
extern tag_typedef_t ntatag_use_srv;
EXPORT tag_typedef_t ntatag_use_srv_ref = 
  REFTAG_TYPEDEF(ntatag_use_srv);
extern tag_typedef_t ntatag_rseq;
EXPORT tag_typedef_t ntatag_rseq_ref = 
  REFTAG_TYPEDEF(ntatag_rseq);
extern tag_typedef_t ntatag_s_irq_hash;
EXPORT tag_typedef_t ntatag_s_irq_hash_ref = 
  REFTAG_TYPEDEF(ntatag_s_irq_hash);
extern tag_typedef_t ntatag_s_orq_hash;
EXPORT tag_typedef_t ntatag_s_orq_hash_ref = 
  REFTAG_TYPEDEF(ntatag_s_orq_hash);
extern tag_typedef_t ntatag_s_leg_hash;
EXPORT tag_typedef_t ntatag_s_leg_hash_ref = 
  REFTAG_TYPEDEF(ntatag_s_leg_hash);
extern tag_typedef_t ntatag_s_irq_hash_used;
EXPORT tag_typedef_t ntatag_s_irq_hash_used_ref = 
  REFTAG_TYPEDEF(ntatag_s_irq_hash_used);
extern tag_typedef_t ntatag_s_orq_hash_used;
EXPORT tag_typedef_t ntatag_s_orq_hash_used_ref = 
  REFTAG_TYPEDEF(ntatag_s_orq_hash_used);
extern tag_typedef_t ntatag_s_leg_hash_used;
EXPORT tag_typedef_t ntatag_s_leg_hash_used_ref = 
  REFTAG_TYPEDEF(ntatag_s_leg_hash_used);
extern tag_typedef_t ntatag_s_recv_msg;
EXPORT tag_typedef_t ntatag_s_recv_msg_ref = 
  REFTAG_TYPEDEF(ntatag_s_recv_msg);
extern tag_typedef_t ntatag_s_recv_request;
EXPORT tag_typedef_t ntatag_s_recv_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_recv_request);
extern tag_typedef_t ntatag_s_recv_response;
EXPORT tag_typedef_t ntatag_s_recv_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_recv_response);
extern tag_typedef_t ntatag_s_bad_message;
EXPORT tag_typedef_t ntatag_s_bad_message_ref = 
  REFTAG_TYPEDEF(ntatag_s_bad_message);
extern tag_typedef_t ntatag_s_bad_request;
EXPORT tag_typedef_t ntatag_s_bad_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_bad_request);
extern tag_typedef_t ntatag_s_bad_response;
EXPORT tag_typedef_t ntatag_s_bad_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_bad_response);
extern tag_typedef_t ntatag_s_drop_request;
EXPORT tag_typedef_t ntatag_s_drop_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_drop_request);
extern tag_typedef_t ntatag_s_drop_response;
EXPORT tag_typedef_t ntatag_s_drop_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_drop_response);
extern tag_typedef_t ntatag_s_client_tr;
EXPORT tag_typedef_t ntatag_s_client_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_client_tr);
extern tag_typedef_t ntatag_s_server_tr;
EXPORT tag_typedef_t ntatag_s_server_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_server_tr);
extern tag_typedef_t ntatag_s_dialog_tr;
EXPORT tag_typedef_t ntatag_s_dialog_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_dialog_tr);
extern tag_typedef_t ntatag_s_acked_tr;
EXPORT tag_typedef_t ntatag_s_acked_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_acked_tr);
extern tag_typedef_t ntatag_s_canceled_tr;
EXPORT tag_typedef_t ntatag_s_canceled_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_canceled_tr);
extern tag_typedef_t ntatag_s_trless_request;
EXPORT tag_typedef_t ntatag_s_trless_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_trless_request);
extern tag_typedef_t ntatag_s_trless_to_tr;
EXPORT tag_typedef_t ntatag_s_trless_to_tr_ref = 
  REFTAG_TYPEDEF(ntatag_s_trless_to_tr);
extern tag_typedef_t ntatag_s_trless_response;
EXPORT tag_typedef_t ntatag_s_trless_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_trless_response);
extern tag_typedef_t ntatag_s_trless_200;
EXPORT tag_typedef_t ntatag_s_trless_200_ref = 
  REFTAG_TYPEDEF(ntatag_s_trless_200);
extern tag_typedef_t ntatag_s_merged_request;
EXPORT tag_typedef_t ntatag_s_merged_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_merged_request);
extern tag_typedef_t ntatag_s_sent_msg;
EXPORT tag_typedef_t ntatag_s_sent_msg_ref = 
  REFTAG_TYPEDEF(ntatag_s_sent_msg);
extern tag_typedef_t ntatag_s_sent_request;
EXPORT tag_typedef_t ntatag_s_sent_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_sent_request);
extern tag_typedef_t ntatag_s_sent_response;
EXPORT tag_typedef_t ntatag_s_sent_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_sent_response);
extern tag_typedef_t ntatag_s_retry_request;
EXPORT tag_typedef_t ntatag_s_retry_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_retry_request);
extern tag_typedef_t ntatag_s_retry_response;
EXPORT tag_typedef_t ntatag_s_retry_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_retry_response);
extern tag_typedef_t ntatag_s_recv_retry;
EXPORT tag_typedef_t ntatag_s_recv_retry_ref = 
  REFTAG_TYPEDEF(ntatag_s_recv_retry);
extern tag_typedef_t ntatag_s_tout_request;
EXPORT tag_typedef_t ntatag_s_tout_request_ref = 
  REFTAG_TYPEDEF(ntatag_s_tout_request);
extern tag_typedef_t ntatag_s_tout_response;
EXPORT tag_typedef_t ntatag_s_tout_response_ref = 
  REFTAG_TYPEDEF(ntatag_s_tout_response);
extern tag_typedef_t ntatag_delay_sending;
EXPORT tag_typedef_t ntatag_delay_sending_ref = 
  REFTAG_TYPEDEF(ntatag_delay_sending);
extern tag_typedef_t ntatag_incomplete;
EXPORT tag_typedef_t ntatag_incomplete_ref = 
  REFTAG_TYPEDEF(ntatag_incomplete);

EXPORT tag_type_t nta_tag_list[] =
{
  ntatag_s_bad_message,
  ntatag_tcp_rport,
  ntatag_s_trless_to_tr,
  ntatag_pass_408,
  ntatag_stateless,
  ntatag_contact,
  ntatag_s_retry_request,
  ntatag_s_trless_response,
  ntatag_smime,
  ntatag_comp,
  ntatag_s_sent_request,
  ntatag_maxsize,
  ntatag_merge_482,
  ntatag_pass_100,
  ntatag_target,
  ntatag_s_leg_hash_used,
  ntatag_graylist,
  ntatag_s_recv_response,
  ntatag_rel100,
  ntatag_method,
  ntatag_extra_100,
  ntatag_s_client_tr,
  ntatag_timeout_408,
  ntatag_server_rport,
  ntatag_delay_sending,
  ntatag_sipflags,
  ntatag_sigcomp_close,
  ntatag_s_sent_msg,
  ntatag_s_server_tr,
  ntatag_ua,
  ntatag_sip_t4,
  ntatag_bad_resp_mask,
  ntatag_s_trless_200,
  ntatag_progress,
  ntatag_s_acked_tr,
  ntatag_s_drop_request,
  ntatag_tls_rport,
  ntatag_s_sent_response,
  ntatag_s_dialog_tr,
  ntatag_use_naptr,
  ntatag_preload,
  ntatag_no_dialog,
  ntatag_aliases,
  ntatag_s_irq_hash_used,
  ntatag_sigcomp_aware,
  ntatag_remote_cseq,
  ntatag_mclass,
  ntatag_user_via,
  ntatag_use_timestamp,
  ntatag_udp_mtu,
  ntatag_s_irq_hash,
  ntatag_cancel_408,
  ntatag_incomplete,
  ntatag_s_orq_hash_used,
  ntatag_s_orq_hash,
  ntatag_debug_drop_prob,
  ntatag_sip_t1x64,
  ntatag_ack_branch,
  ntatag_client_rport,
  ntatag_tag_3261,
  ntatag_branch_key,
  ntatag_s_recv_retry,
  ntatag_s_trless_request,
  ntatag_blacklist,
  ntatag_max_forwards,
  ntatag_s_leg_hash,
  ntatag_s_canceled_tr,
  ntatag_sigcomp_algorithm,
  ntatag_s_bad_request,
  ntatag_sigcomp_options,
  ntatag_s_tout_request,
  ntatag_s_recv_msg,
  ntatag_use_srv,
  ntatag_msg,
  ntatag_s_retry_response,
  ntatag_s_bad_response,
  ntatag_s_merged_request,
  ntatag_cancel_487,
  ntatag_default_proxy,
  ntatag_s_tout_response,
  ntatag_sip_t1,
  ntatag_s_drop_response,
  ntatag_rseq,
  ntatag_s_recv_request,
  ntatag_max_proceeding,
  ntatag_tport,
  ntatag_sip_t2,
  ntatag_cancel_2543,
  ntatag_timer_c,
  ntatag_bad_req_mask,
  NULL
};
