/*
 * This file is loading the irep
 * Ruby GEM code.
 *
 * IMPORTANT:
 *   This file was generated!
 *   All manual changes will get lost.
 */
#include <stdlib.h>
#include <mruby.h>
#include <mruby/irep.h>
/* dumped in little endian order.
   use `mrbc -E` option for big endian CPU. */
#include <stdint.h>
const uint8_t
#if defined __GNUC__
__attribute__((aligned(4)))
#elif defined _MSC_VER
__declspec(align(4))
#endif
gem_mrblib_irep_mruby_file_stat[] = {
0x45,0x54,0x49,0x52,0x30,0x30,0x30,0x33,0x3b,0x7d,0x00,0x00,0x06,0x4a,0x4d,0x41,
0x54,0x5a,0x30,0x30,0x30,0x30,0x49,0x52,0x45,0x50,0x00,0x00,0x05,0xb2,0x30,0x30,
0x30,0x30,0x00,0x00,0x00,0x45,0x00,0x01,0x00,0x03,0x00,0x02,0x00,0x00,0x00,0x09,
0x05,0x00,0x80,0x00,0x05,0x00,0x00,0x01,0x43,0x00,0x80,0x00,0x45,0x00,0x80,0x00,
0x05,0x00,0x80,0x00,0x05,0x00,0x00,0x01,0x43,0x00,0x80,0x00,0xc5,0x00,0x80,0x00,
0x4a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x46,0x69,
0x6c,0x65,0x00,0x00,0x00,0x00,0x39,0x00,0x01,0x00,0x02,0x00,0x01,0x00,0x00,0x00,
0x06,0x00,0x00,0x00,0x06,0x00,0x80,0x00,0x47,0x40,0x80,0x00,0xc0,0x00,0x00,0x01,
0x46,0x00,0x80,0x00,0x04,0x00,0x80,0x00,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x01,0x00,0x04,0x73,0x74,0x61,0x74,0x00,0x00,0x00,0x00,0x46,0x00,
0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x26,0x00,0x00,0x02,
0x91,0x00,0x80,0x01,0x13,0x00,0x80,0x01,0x01,0x40,0x00,0x02,0xa0,0x80,0x80,0x01,
0x29,0x00,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x04,0x53,0x74,
0x61,0x74,0x00,0x00,0x04,0x46,0x69,0x6c,0x65,0x00,0x00,0x03,0x6e,0x65,0x77,0x00,
0x00,0x00,0x00,0x35,0x00,0x01,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x05,0x00,0x00,
0x05,0x00,0x80,0x00,0x05,0x00,0x00,0x01,0x43,0x00,0x80,0x00,0x45,0x00,0x80,0x00,
0x29,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x53,0x74,
0x61,0x74,0x00,0x00,0x00,0x00,0x95,0x00,0x01,0x00,0x04,0x00,0x04,0x00,0x00,0x00,
0x11,0x00,0x00,0x00,0x06,0x00,0x80,0x00,0x91,0x00,0x00,0x01,0xa0,0x00,0x80,0x00,
0x48,0x00,0x80,0x00,0xc0,0x00,0x00,0x01,0x46,0x80,0x80,0x00,0x48,0x00,0x80,0x00,
0xc0,0x02,0x00,0x01,0x46,0xc0,0x80,0x00,0x48,0x00,0x80,0x00,0xc0,0x04,0x00,0x01,
0x46,0x00,0x81,0x00,0x48,0x00,0x80,0x00,0xc0,0x06,0x00,0x01,0x46,0x40,0x81,0x00,
0x84,0x02,0x80,0x00,0x29,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,
0x00,0x07,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x00,0x00,0x0a,0x43,0x6f,0x6d,0x70,
0x61,0x72,0x61,0x62,0x6c,0x65,0x00,0x00,0x03,0x3c,0x3d,0x3e,0x00,0x00,0x07,0x69,
0x6e,0x73,0x70,0x65,0x63,0x74,0x00,0x00,0x05,0x73,0x69,0x7a,0x65,0x3f,0x00,0x00,
0x05,0x7a,0x65,0x72,0x6f,0x3f,0x00,0x00,0x00,0x00,0x73,0x00,0x03,0x00,0x06,0x00,
0x00,0x00,0x00,0x00,0x0e,0x00,0x00,0x00,0x26,0x00,0x00,0x02,0x01,0x40,0x80,0x01,
0x06,0x00,0x00,0x02,0x20,0x40,0x00,0x02,0xa0,0x00,0x80,0x01,0x19,0x03,0xc0,0x01,
0x06,0x00,0x80,0x01,0x20,0x80,0x80,0x01,0x01,0x40,0x00,0x02,0x20,0x80,0x00,0x02,
0xa0,0xc0,0x80,0x01,0x97,0x00,0x40,0x00,0x05,0x00,0x80,0x01,0x29,0x00,0x80,0x01,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x08,0x6b,0x69,0x6e,0x64,0x5f,0x6f,
0x66,0x3f,0x00,0x00,0x05,0x63,0x6c,0x61,0x73,0x73,0x00,0x00,0x05,0x6d,0x74,0x69,
0x6d,0x65,0x00,0x00,0x03,0x3c,0x3d,0x3e,0x00,0x00,0x00,0x02,0xe4,0x00,0x06,0x00,
0x21,0x00,0x01,0x00,0x00,0x00,0x64,0x00,0x26,0x00,0x00,0x00,0x06,0x00,0x00,0x03,
0x20,0x00,0x00,0x03,0x01,0x80,0x01,0x01,0x11,0x01,0x80,0x03,0xa0,0x40,0x00,0x03,
0x19,0x03,0x40,0x03,0x3d,0x00,0x00,0x03,0x01,0x80,0x80,0x03,0x83,0x07,0x40,0x04,
0xa0,0xc0,0x80,0x03,0x3e,0xc0,0x01,0x03,0x01,0x80,0x01,0x01,0x06,0x00,0x00,0x03,
0x20,0x00,0x01,0x03,0x01,0x80,0x81,0x01,0x11,0x01,0x80,0x03,0xa0,0x40,0x00,0x03,
0x19,0x03,0x40,0x03,0x3d,0x01,0x00,0x03,0x01,0xc0,0x80,0x03,0x83,0x03,0x40,0x04,
0xa0,0xc0,0x80,0x03,0x3e,0xc0,0x01,0x03,0x01,0x80,0x81,0x01,0x06,0x00,0x00,0x03,
0x20,0x40,0x01,0x03,0x01,0x80,0x01,0x02,0x11,0x01,0x80,0x03,0xa0,0x40,0x00,0x03,
0x19,0x03,0x40,0x03,0x3d,0x00,0x00,0x03,0x01,0x00,0x81,0x03,0x83,0x07,0x40,0x04,
0xa0,0xc0,0x80,0x03,0x3e,0xc0,0x01,0x03,0x01,0x80,0x01,0x02,0xbd,0x01,0x00,0x03,
0x01,0x80,0x80,0x03,0x3d,0x02,0x00,0x04,0x06,0x00,0x80,0x04,0x20,0x80,0x81,0x04,
0xbd,0x02,0x00,0x05,0x01,0xc0,0x80,0x05,0x3d,0x03,0x00,0x06,0x06,0x00,0x80,0x06,
0x20,0xc0,0x81,0x06,0xbd,0x03,0x00,0x07,0x06,0x00,0x80,0x07,0x20,0x00,0x82,0x07,
0x3d,0x04,0x00,0x08,0x06,0x00,0x80,0x08,0x20,0x40,0x82,0x08,0xbd,0x04,0x00,0x09,
0x01,0x00,0x81,0x09,0x3d,0x05,0x00,0x0a,0x06,0x00,0x80,0x0a,0x20,0x80,0x82,0x0a,
0xbd,0x05,0x00,0x0b,0x06,0x00,0x80,0x0b,0x20,0xc0,0x82,0x0b,0x3d,0x06,0x00,0x0c,
0x06,0x00,0x80,0x0c,0x20,0x00,0x83,0x0c,0xbd,0x06,0x00,0x0d,0x06,0x00,0x80,0x0d,
0x20,0x40,0x83,0x0d,0x3d,0x07,0x00,0x0e,0x06,0x00,0x80,0x0e,0x20,0x80,0x83,0x0e,
0xbd,0x07,0x00,0x0f,0x06,0x00,0x80,0x0f,0x20,0xc0,0x83,0x0f,0xbf,0x86,0x81,0x02,
0x06,0x00,0x00,0x03,0x84,0x08,0x80,0x03,0xa0,0x00,0x04,0x03,0x19,0x03,0x40,0x03,
0x06,0x00,0x00,0x03,0x20,0x40,0x04,0x03,0x01,0x40,0x81,0x03,0x3d,0x08,0x00,0x04,
0x01,0x80,0x81,0x04,0x20,0x81,0x84,0x03,0xbd,0x08,0x00,0x03,0x06,0x00,0x80,0x03,
0x20,0xc0,0x84,0x03,0x20,0xc0,0x80,0x03,0x3e,0xc0,0x01,0x03,0x3d,0x09,0x80,0x03,
0x3e,0xc0,0x01,0x03,0x01,0x40,0x81,0x03,0x40,0x01,0x00,0x04,0x21,0x00,0x85,0x03,
0xbd,0x09,0x00,0x04,0xa0,0x40,0x85,0x03,0x3e,0xc0,0x01,0x03,0x3d,0x0a,0x80,0x03,
0x3e,0xc0,0x01,0x03,0x29,0x00,0x00,0x03,0x00,0x00,0x00,0x15,0x00,0x00,0x02,0x30,
0x78,0x00,0x00,0x00,0x00,0x00,0x01,0x30,0x00,0x00,0x03,0x64,0x65,0x76,0x00,0x00,
0x03,0x69,0x6e,0x6f,0x00,0x00,0x04,0x6d,0x6f,0x64,0x65,0x00,0x00,0x05,0x6e,0x6c,
0x69,0x6e,0x6b,0x00,0x00,0x03,0x75,0x69,0x64,0x00,0x00,0x03,0x67,0x69,0x64,0x00,
0x00,0x04,0x72,0x64,0x65,0x76,0x00,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,0x07,
0x62,0x6c,0x6b,0x73,0x69,0x7a,0x65,0x00,0x00,0x06,0x62,0x6c,0x6f,0x63,0x6b,0x73,
0x00,0x00,0x05,0x61,0x74,0x69,0x6d,0x65,0x00,0x00,0x05,0x6d,0x74,0x69,0x6d,0x65,
0x00,0x00,0x05,0x63,0x74,0x69,0x6d,0x65,0x00,0x00,0x09,0x62,0x69,0x72,0x74,0x68,
0x74,0x69,0x6d,0x65,0x00,0x00,0x02,0x23,0x3c,0x00,0x00,0x01,0x20,0x00,0x00,0x02,
0x2c,0x20,0x00,0x00,0x01,0x3e,0x00,0x00,0x00,0x16,0x00,0x03,0x64,0x65,0x76,0x00,
0x00,0x08,0x6b,0x69,0x6e,0x64,0x5f,0x6f,0x66,0x3f,0x00,0x00,0x06,0x46,0x69,0x78,
0x6e,0x75,0x6d,0x00,0x00,0x04,0x74,0x6f,0x5f,0x73,0x00,0x00,0x04,0x6d,0x6f,0x64,
0x65,0x00,0x00,0x04,0x72,0x64,0x65,0x76,0x00,0x00,0x03,0x69,0x6e,0x6f,0x00,0x00,
0x05,0x6e,0x6c,0x69,0x6e,0x6b,0x00,0x00,0x03,0x75,0x69,0x64,0x00,0x00,0x03,0x67,
0x69,0x64,0x00,0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,0x07,0x62,0x6c,0x6b,0x73,
0x69,0x7a,0x65,0x00,0x00,0x06,0x62,0x6c,0x6f,0x63,0x6b,0x73,0x00,0x00,0x05,0x61,
0x74,0x69,0x6d,0x65,0x00,0x00,0x05,0x6d,0x74,0x69,0x6d,0x65,0x00,0x00,0x05,0x63,
0x74,0x69,0x6d,0x65,0x00,0x00,0x0b,0x72,0x65,0x73,0x70,0x6f,0x6e,0x64,0x5f,0x74,
0x6f,0x3f,0x00,0x00,0x09,0x62,0x69,0x72,0x74,0x68,0x74,0x69,0x6d,0x65,0x00,0x00,
0x03,0x5b,0x5d,0x3d,0x00,0x00,0x05,0x63,0x6c,0x61,0x73,0x73,0x00,0x00,0x03,0x6d,
0x61,0x70,0x00,0x00,0x04,0x6a,0x6f,0x69,0x6e,0x00,0x00,0x00,0x00,0x45,0x00,0x04,
0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x09,0x26,0x00,0x00,0x04,0x3d,0x00,0x00,0x02,
0x01,0x40,0x80,0x02,0x3e,0x40,0x01,0x02,0xbd,0x00,0x80,0x02,0x3e,0x40,0x01,0x02,
0x01,0x80,0x80,0x02,0x3e,0x40,0x01,0x02,0x29,0x00,0x00,0x02,0x00,0x00,0x00,0x02,
0x00,0x00,0x00,0x00,0x00,0x01,0x3d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x52,0x00,
0x03,0x00,0x06,0x00,0x00,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x26,0x00,0x00,0x00,
0x06,0x00,0x80,0x01,0x20,0x00,0x80,0x01,0x01,0xc0,0x00,0x01,0x83,0xff,0x3f,0x02,
0xb2,0x40,0x80,0x01,0x19,0x01,0xc0,0x01,0x05,0x00,0x80,0x01,0x97,0x00,0x40,0x00,
0x01,0x80,0x80,0x01,0x29,0x00,0x80,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,
0x00,0x04,0x73,0x69,0x7a,0x65,0x00,0x00,0x02,0x3d,0x3d,0x00,0x00,0x00,0x00,0x3e,
0x00,0x02,0x00,0x05,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x26,0x00,0x00,0x00,
0x06,0x00,0x00,0x01,0x20,0x00,0x00,0x01,0x83,0xff,0xbf,0x01,0xb2,0x40,0x00,0x01,
0x29,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x04,0x73,0x69,
0x7a,0x65,0x00,0x00,0x02,0x3d,0x3d,0x00,0x4c,0x56,0x41,0x52,0x00,0x00,0x00,0x7a,
0x00,0x00,0x00,0x09,0x00,0x05,0x66,0x6e,0x61,0x6d,0x65,0x00,0x05,0x6f,0x74,0x68,
0x65,0x72,0x00,0x04,0x5f,0x64,0x65,0x76,0x00,0x05,0x5f,0x6d,0x6f,0x64,0x65,0x00,
0x05,0x5f,0x72,0x64,0x65,0x76,0x00,0x05,0x73,0x74,0x61,0x74,0x73,0x00,0x01,0x6b,
0x00,0x01,0x76,0x00,0x01,0x73,0x00,0x00,0x00,0x01,0xff,0xff,0x00,0x00,0x00,0x01,
0x00,0x01,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x03,
0x00,0x03,0x00,0x04,0x00,0x04,0x00,0x05,0x00,0x05,0x00,0x06,0x00,0x01,0x00,0x07,
0x00,0x02,0xff,0xff,0x00,0x00,0xff,0xff,0x00,0x00,0x00,0x08,0x00,0x02,0xff,0xff,
0x00,0x00,0x45,0x4e,0x44,0x00,0x00,0x00,0x00,0x08,
};
void mrb_mruby_file_stat_gem_init(mrb_state *mrb);
void mrb_mruby_file_stat_gem_final(mrb_state *mrb);

void GENERATED_TMP_mrb_mruby_file_stat_gem_init(mrb_state *mrb) {
  int ai = mrb_gc_arena_save(mrb);
  mrb_mruby_file_stat_gem_init(mrb);
  mrb_load_irep(mrb, gem_mrblib_irep_mruby_file_stat);
  if (mrb->exc) {
    mrb_print_error(mrb);
    exit(EXIT_FAILURE);
  }
  mrb_gc_arena_restore(mrb, ai);
}

void GENERATED_TMP_mrb_mruby_file_stat_gem_final(mrb_state *mrb) {
  mrb_mruby_file_stat_gem_final(mrb);
}