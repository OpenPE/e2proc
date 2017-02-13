/*
 * Persian Empire e2proc by Persian Prince
 * https://pe4k.com
 */

/*
 * Description:
 *  |
 * progress
 *  |
 * bus
 *  |
 *  ----------- nim_sockets
 *  |
 * stb
 *  |
 *  ---- info    
 *  |     |---- info/board_revision
 *  |     |---- info/boxmode
 *  |     |---- info/boxtype
 *  |     |---- info/chipset
 *  |     |---- info/hwmodel
 *  |     |---- info/micomver
 *  |     |---- info/model
 *  |     |---- info/subtype
 *  |     |---- info/version
 *  ---- frontend
 *  |     |---- frontend/0
 *  |     |---- frontend/0/tone_amplitude
 *  |     |---- frontend/0/min_delay_base
 *  |     |---- frontend/0/static_current_limiting_choices
 *  |     |---- frontend/0/static_current_limiting
 *  |     |---- frontend/1
 *  |     |---- frontend/1/tone_amplitude
 *  |     |---- frontend/1/min_delay_base
 *  |     |---- frontend/1/static_current_limiting_choices
 *  |     |---- frontend/1/static_current_limiting
 *  |     |---- frontend/0/lnb_sense
 *  |     |---- frontend/0/rf_switch
 *  |     |---- frontend/0/mode
 *  |     |---- frontend/1/lnb_sense
 *  |     |---- frontend/1/rf_switch
 *  |     |---- frontend/1/mode
 *  ---- pvr
 *  |     |---- pvr/clip_stats
 *  ---- audio
 *  |     |---- audio/3d_surround
 *  |     |---- audio/3d_surround_choices
 *  |     |---- audio/3d_surround_speaker_position
 *  |     |---- audio/3d_surround_speaker_position_choices
 *  |     |---- audio/aac
 *  |     |---- audio/aac_choices
 *  |     |---- audio/aac_transcode
 *  |     |---- audio/aac_transcode_choices
 *  |     |---- audio/ac3
 *  |     |---- audio/ac3_choices
 *  |     |---- audio/ac3plus
 *  |     |---- audio/ac3plus_choices
 *  |     |---- audio/audio_delay_bitstream
 *  |     |---- audio/audio_delay_pcm
 *  |     |---- audio/avl
 *  |     |---- audio/avl_choices
 *  |     |---- audio/clip_stats
 *  |     |---- audio/dts
 *  |     |---- audio/dts_choices
 *  |     |---- audio/force_hdmi_audio_disable
 *  |     |---- audio/j1_mute
 *  |     |---- audio/multichannel_pcm
 *  |     |---- audio/pts_offset
 *  ---- vmpeg
 *  |     |---- vmpeg/deinterlace
 *  |     |---- vmpeg/deinterlace_choices
 *  |     |---- vmpeg/0
 *  |     |---- vmpeg/0/aspect
 *  |     |---- vmpeg/0/clip_height
 *  |     |---- vmpeg/0/clip_left
 *  |     |---- vmpeg/0/clip_stats
 *  |     |---- vmpeg/0/clip_top
 *  |     |---- vmpeg/0/clip_width
 *  |     |---- vmpeg/0/codec
 *  |     |---- vmpeg/0/dst_all
 *  |     |---- vmpeg/0/dst_height
 *  |     |---- vmpeg/0/dst_left
 *  |     |---- vmpeg/0/dst_top
 *  |     |---- vmpeg/0/dst_width
 *  |     |---- vmpeg/0/fallback_framerate
 *  |     |---- vmpeg/0/fallback_framerate_choices
 *  |     |---- vmpeg/0/framerate
 *  |     |---- vmpeg/0/pep_apply
 *  |     |---- vmpeg/0/pep_auto_flesh
 *  |     |---- vmpeg/0/pep_block_noise_reduction
 *  |     |---- vmpeg/0/pep_blue_boost
 *  |     |---- vmpeg/0/pep_brightness
 *  |     |---- vmpeg/0/pep_contrast
 *  |     |---- vmpeg/0/pep_digital_contour_removal
 *  |     |---- vmpeg/0/pep_dynamic_contrast
 *  |     |---- vmpeg/0/pep_green_boost
 *  |     |---- vmpeg/0/pep_hue
 *  |     |---- vmpeg/0/pep_mosquito_noise_reduction
 *  |     |---- vmpeg/0/pep_saturation
 *  |     |---- vmpeg/0/pep_scaler_sharpness
 *  |     |---- vmpeg/0/pep_sharpness
 *  |     |---- vmpeg/0/pep_split
 *  |     |---- vmpeg/0/progressive
 *  |     |---- vmpeg/0/pts
 *  |     |---- vmpeg/0/pts_offset
 *  |     |---- vmpeg/0/sharpness_control
 *  |     |---- vmpeg/0/sharpness_control_choices
 *  |     |---- vmpeg/0/sharpness_value
 *  |     |---- vmpeg/0/xres
 *  |     |---- vmpeg/0/yres
 *  |     |---- vmpeg/1
 *  ---- denc
 *  |     |---- denc/0
 *  |     |---- denc/0/wss
 *  |     |---- denc/0/wss_choices
 *  ---- avs
 *  |     |---- avs/0
 *  |     |---- avs/0/colorformat
 *  |     |---- avs/0/colorformat_choices
 *  |     |---- avs/0/fb
 *  |     |---- avs/0/fb_choices
 *  |     |---- avs/0/input
 *  |     |---- avs/0/input_choices
 *  |     |---- avs/0/sb
 *  |     |---- avs/0/sb_choices
 *  |     |---- avs/0/standby
 *  |     |---- avs/0/volume
 *  ---- video
 *  |     |---- video/alpha
 *  |     |---- video/aspect
 *  |     |---- video/aspect_choices
 *  |     |---- video/force_dvi
 *  |     |---- video/hdmi_colordepth
 *  |     |---- video/hdmi_colorimetry
 *  |     |---- video/hdmi_colorspace
 *  |     |---- video/hdmi_colorspace_choices
 *  |     |---- video/pal_h_end
 *  |     |---- video/pal_h_start
 *  |     |---- video/pal_v_end
 *  |     |---- video/pal_v_start
 *  |     |---- video/policy
 *  |     |---- video/policy_choices
 *  |     |---- video/policy2
 *  |     |---- video/policy2_choices
 *  |     |---- video/videomode_50hz
 *  |     |---- video/videomode_50hz_choices
 *  |     |---- video/videomode_60hz
 *  |     |---- video/videomode_60hz_choices
 *  |     |---- video/videomode_choices
 *  |     |---- video/videomode_preferred
 *  |     |---- video/videomode
 *  |     |---- video/zapmode
 *  |     |---- video/zapping_mode
 *  ---- hdmi
 *  |     |---- hdmi/audio_source
 *  |     |---- hdmi/audio_source_choices
 *  |     |---- hdmi/bypass_edid_checking
 *  |     |---- hdmi/enable_hdmi_resets
 *  |     |---- hdmi/output
 *  |     |---- hdmi/output_choices
 *  |     |---- hdmi/preemphasis
 *  ---- ir
 *  |     |---- ir/mouse
 *  |     |---- ir/mouse/left_right_swap
 *  |     |---- ir/mouse/left_right_swap_choices
 *  |     |---- ir/mouse/up_down_swap
 *  |     |---- ir/mouse/up_down_swap_choices
 *  |     |---- ir/rc
 *  |     |---- ir/rc/key_swap
 *  |     |---- ir/rc/key_swap_choices
 *  |     |---- ir/rc/mask0
 *  |     |---- ir/rc/mask1
 *  |     |---- ir/rc/type
 *  ---- fp
 *  |     |---- fp/events
 *  |     |---- fp/fan_pwm
 *  |     |---- fp/fan_speed
 *  |     |---- fp/fan_vlt
 *  |     |---- fp/force_restart
 *  |     |---- fp/led_pattern_speed
 *  |     |---- fp/led0_pattern
 *  |     |---- fp/led_set_pattern
 *  |     |---- fp/led_set_speed
 *  |     |---- fp/lnb_sense0
 *  |     |---- fp/lnb_sense1
 *  |     |---- fp/oled_brightness
 *  |     |---- fp/rtc
 *  |     |---- fp/temp_sensor
 *  |     |---- fp/temp_sensor_avs
 *  |     |---- fp/vcr_fns
 *  |     |---- fp/version
 *  |     |---- fp/wakeup_time
 *  |     |---- fp/was_timer_wakeup
 *  ---- sensors
 *  |     |---- sensors/temp
 *  |     |---- sensors/temp/value
 *  |     |---- sensors/temp0
 *  |     |---- sensors/temp0/value
 *  ---- lcd
 *  |     |---- lcd/bpp
 *  |     |---- lcd/fps
 *  |     |---- lcd/mode
 *  |     |---- lcd/oled_brightness
 *  |     |---- lcd/right_half
 *  |     |---- lcd/scroll_delay
 *  |     |---- lcd/scroll_repeats
 *  |     |---- lcd/show_outputresolution
 *  |     |---- lcd/show_symbols
 *  |     |---- lcd/symbol_hdd
 *  |     |---- lcd/symbol_hddprogress
 *  |     |---- lcd/symbol_network
 *  |     |---- lcd/symbol_signal
 *  |     |---- lcd/symbol_timeshift
 *  |     |---- lcd/symbol_tv
 *  |     |---- lcd/symbol_usb
 *  |     |---- lcd/vfd
 *  |     |---- lcd/xres
 *  |     |---- lcd/yres
 *  ---- fb
 *  |     |---- fb/3dmode
 *  |     |---- fb/3dmode_choices
 *  |     |---- fb/primary
 *  |     |---- fb/primary/3d
 *  |     |---- fb/primary/zoffset
 *  |     |---- fb/znorm
 *  ---- tsmux
 *  |     |---- tsmux/ci0_input
 *  |     |---- tsmux/ci0_tsclk
 *  |     |---- tsmux/ci1_input
 *  |     |---- tsmux/ci1_tsclk
 *  |     |---- tsmux/input0
 *  |     |---- tsmux/input1
 *  |     |---- tsmux/input2
 *  |     |---- tsmux/lnb_b_input
 *  ---- message
 *  ---- power
 *  |     |---- power/standbyled
 *  |     |---- power/vfd
 *  ---- tuner
 *  ---- misc
 *  |     |---- misc/12V_output
 */

#include <linux/version.h>
#if LINUX_VERSION_CODE >= KERNEL_VERSION(2, 6, 34)
#include <generated/autoconf.h>
#else
#include <linux/autoconf.h>
#endif
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/errno.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/fs.h>
#include <linux/slab.h>
#include <linux/proc_fs.h>
#include <asm/uaccess.h>
#include <linux/cdev.h>
#include "internal.h"

#define MODULE_NAME "e2proc"

#define cProcDir		1
#define cProcEntry		2 

#define cProcNotExist 		1
#define cProcAlreadyExist 	2
 
struct ProcStructure_s
{
	int   type;
	int proc_dir_entry_exists;
	char* name;
	struct proc_dir_entry* entry;
	read_proc_t *read_proc;
	write_proc_t *write_proc;
};

static int progress = 0;

static int info_model_read(char *page, char **start, off_t off, int count,
                           int *eof, void *data)
{
  int len = sprintf(page, "dm800\n");

  return len;
}

static int info_perevision_read(char *page, char **start, off_t off, int count,
                           int *eof, void *data)
{
  int len = sprintf(page, "r190\n");

  return len;
}

static int info_peversion_read(char *page, char **start, off_t off, int count,
                           int *eof, void *data)
{
  int len = sprintf(page, "rc8\n");

  return len;
}

static int zero_read(char *page, char **start, off_t off, int count,
                           int *eof, void *data)
{
  int len = sprintf(page, "0");

  return len;
}

static int default_read_proc(char *page, char **start, off_t off, int count,
                           int *eof, void *data)
{
  return 0;
}

static int default_write_proc(struct file *file, const char __user *buf,
                            unsigned long count, void *data)
{
  return count;
}


int proc_progress_write(struct file *file, const char __user *buf,
                           unsigned long count, void *data)
{
    char        *page;
    char        *myString;
    ssize_t     ret = -ENOMEM;
    /* int      result; */

    //printk("%s %ld - ", __FUNCTION__, count);

    page = (char *)__get_free_page(GFP_KERNEL);
    if (page)
    {
        ret = -EFAULT;
        if (copy_from_user(page, buf, count))
            goto out;

        myString = (char *) kmalloc(count + 1, GFP_KERNEL);
        strncpy(myString, page, count);
        myString[count] = '\0';

        //printk("%s\n", myString);

        sscanf(myString, "%d", &progress);

        kfree(myString);
        //result = sscanf(page, "%3s %3s %3s %3s %3s", s1, s2, s3, s4, s5);
    }

    ret = count;
out:

    free_page((unsigned long)page);
    return ret;
}

int proc_progress_read (char *page, char **start, off_t off, int count,
              int *eof, void *data_unused)
{
    int len = 0;
    //printk("%s %d\n", __FUNCTION__, count);

    len = sprintf(page, "%d\n", progress);

        return len;
}

struct ProcStructure_s e2Proc[] = 
{
	{cProcEntry, cProcNotExist, "progress"                                       , NULL, proc_progress_read, proc_progress_write},
	{cProcEntry, cProcNotExist, "bus/nim_sockets"                                , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb"                                            , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/info"                                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/board_revision"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/boxmode"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/boxtype"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/chipset"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/hwmodel"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/micomver"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/model"                                 , NULL, info_model_read, NULL},
	{cProcEntry, cProcNotExist, "stb/info/perevision"                            , NULL, info_perevision_read, NULL},
	{cProcEntry, cProcNotExist, "stb/info/peversion"                             , NULL, info_peversion_read, NULL},
	{cProcEntry, cProcNotExist, "stb/info/subtype"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/info/version"                               , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/frontend"                                   , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/frontend/0"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/tone_amplitude"                  , NULL, zero_read, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/min_delay_base"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/static_current_limiting_choices" , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/static_current_limiting"         , NULL, zero_read, NULL},
	{cProcDir  , cProcNotExist, "stb/frontend/1"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/tone_amplitude"                  , NULL, zero_read, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/min_delay_base"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/static_current_limiting_choices" , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/static_current_limiting"         , NULL, zero_read, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/lnb_sense"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/rf_switch"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/0/mode"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/lnb_sense"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/rf_switch"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/frontend/1/mode"                            , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/pvr"                                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/pvr/clip_stats"                             , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/audio"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/3d_surround"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/3d_surround_choices"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/3d_surround_speaker_position"         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/3d_surround_speaker_position_choices" , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/aac"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/aac_choices"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/aac_transcode"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/aac_transcode_choices"                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/ac3"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/ac3_choices"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/ac3plus"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/ac3plus_choices"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/audio_delay_bitstream"                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/audio_delay_pcm"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/avl"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/avl_choices"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/clip_stats"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/dts"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/dts_choices"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/force_hdmi_audio_disable"             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/j1_mute"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/multichannel_pcm"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/audio/pts_offset"                           , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/vmpeg"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/deinterlace"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/deinterlace_choices"                  , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/vmpeg/0"                                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/aspect"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/clip_height"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/clip_left"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/clip_stats"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/clip_top"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/clip_width"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/codec"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/dst_all"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/dst_height"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/dst_left"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/dst_top"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/dst_width"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/fallback_framerate"                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/fallback_framerate_choices"         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/framerate"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_apply"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_auto_flesh"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_block_noise_reduction"          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_blue_boost"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_brightness"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_contrast"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_digital_contour_removal"        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_dynamic_contrast"               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_green_boost"                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_hue"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_mosquito_noise_reduction"       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_saturation"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_scaler_sharpness"               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_sharpness"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pep_split"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/progressive"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pts"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/pts_offset"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/sharpness_control"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/sharpness_control_choices"          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/sharpness_value"                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/xres"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/vmpeg/0/yres"                               , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/vmpeg/1"                                    , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/denc"                                       , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/denc/0"                                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/denc/0/wss"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/denc/0/wss_choices"                         , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/avs"                                        , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/avs/0"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/colorformat"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/colorformat_choices"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/fb"                                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/fb_choices"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/input"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/input_choices"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/sb"                                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/sb_choices"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/standby"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/avs/0/volume"                               , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/video"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/alpha"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/aspect"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/aspect_choices"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/force_dvi"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/hdmi_colordepth"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/hdmi_colorimetry"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/hdmi_colorspace"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/hdmi_colorspace_choices"              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/pal_h_end"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/pal_h_start"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/pal_v_end"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/pal_v_start"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/policy"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/policy_choices"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/policy2"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/policy2_choices"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_50hz"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_50hz_choices"               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_60hz"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_60hz_choices"               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_choices"                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode_preferred"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/videomode"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/zapmode"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/video/zapping_mode"                         , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/hdmi"                                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/audio_source"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/audio_source_choices"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/bypass_edid_checking"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/enable_hdmi_resets"                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/output"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/output_choices"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/hdmi/preemphasis"                           , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/ir"                                         , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/ir/mouse"                                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/mouse/left_right_swap"                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/mouse/left_right_swap_choices"           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/mouse/up_down_swap"                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/mouse/up_down_swap_choices"              , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/ir/rc"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/rc/key_swap"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/rc/key_swap_choices"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/rc/mask0"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/rc/mask1"                                , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/ir/rc/type"                                 , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/fp"                                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/events"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/fan_pwm"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/fan_speed"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/fan_vlt"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/force_restart"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/led_pattern_speed"                       , NULL, NULL, default_write_proc},
	{cProcEntry, cProcNotExist, "stb/fp/led0_pattern"                            , NULL, NULL, default_write_proc},
	{cProcEntry, cProcNotExist, "stb/fp/led_set_pattern"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/led_set_speed"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/lnb_sense0"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/lnb_sense1"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/oled_brightness"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/rtc"                                     , NULL, zero_read, default_write_proc},
	{cProcEntry, cProcNotExist, "stb/fp/temp_sensor"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/temp_sensor_avs"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/vcr_fns"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/version"                                 , NULL, zero_read, NULL},
	{cProcEntry, cProcNotExist, "stb/fp/wakeup_time"                             , NULL, default_read_proc, default_write_proc},
	{cProcEntry, cProcNotExist, "stb/fp/was_timer_wakeup"                        , NULL, default_read_proc, NULL},
	{cProcDir  , cProcNotExist, "stb/sensors"                                    , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/sensors/temp"                               , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/sensors/temp/value"                         , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/sensors/temp0"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/sensors/temp0/value"                        , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/lcd"                                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/bpp"                                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/fps"                                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/mode"                                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/oled_brightness"                        , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/right_half"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/scroll_delay"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/scroll_repeats"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/show_outputresolution"                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/show_symbols"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_hdd"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_hddprogress"                     , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_network"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_signal"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_timeshift"                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_tv"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/symbol_usb"                             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/vfd"                                    , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/xres"                                   , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/lcd/yres"                                   , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/fb"                                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fb/3dmode"                                  , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fb/3dmode_choices"                          , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/fb/primary"                                 , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fb/primary/3d"                              , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fb/primary/zoffset"                         , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/fb/znorm"                                   , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/tsmux"				             , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/tsmux/ci0_input"                            , NULL, proc_tsmux_ci0_input_read, proc_tsmux_ci0_input_write},
	{cProcEntry, cProcNotExist, "stb/tsmux/ci0_tsclk"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/tsmux/ci1_input"                            , NULL, proc_tsmux_ci1_input_read, proc_tsmux_ci1_input_write},
	{cProcEntry, cProcNotExist, "stb/tsmux/ci1_tsclk"                            , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/tsmux/input0"                               , NULL, proc_tsmux_input0_read, proc_tsmux_input_write},
	{cProcEntry, cProcNotExist, "stb/tsmux/input1"                               , NULL, proc_tsmux_input1_read, proc_tsmux_input_write},
	{cProcEntry, cProcNotExist, "stb/tsmux/input2"                               , NULL, proc_tsmux_input2_read, proc_tsmux_input_write},
	{cProcEntry, cProcNotExist, "stb/tsmux/lnb_b_input"                          , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/message"                                    , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/power"                                      , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/power/standbyled"                           , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/power/vfd"                                  , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/tuner"                                      , NULL, NULL, NULL},
	{cProcDir  , cProcNotExist, "stb/misc"                                       , NULL, NULL, NULL},
	{cProcEntry, cProcNotExist, "stb/misc/12V_output"                            , NULL, NULL, NULL},
};


struct proc_dir_entry *exist_proc_dir(char *name, struct proc_dir_entry *entry) 
{
	int len;
	struct proc_dir_entry *child_proc_dir, *parent_entry;

	/*
	if (!entry)
		parent_entry = &proc_root;
	else
		parent_entry = entry;
	*/
	if (!entry)
		return NULL;

	parent_entry = entry;
	len = strlen(name);

	for (child_proc_dir = parent_entry->subdir; child_proc_dir; child_proc_dir=child_proc_dir->next) 
	{
		 	if ((child_proc_dir->namelen == len) && (! memcmp(child_proc_dir->name, name, len)))
				return child_proc_dir;
	}

	return NULL;
}


struct proc_dir_entry * find_proc_dir(char * name)
{
  int i;

  for(i = 0; i < sizeof(e2Proc) / sizeof(e2Proc[0]); i++)
  {
    if((e2Proc[i].type == cProcDir) && (strcmp(name, e2Proc[i].name) == 0))
      return e2Proc[i].entry;
  }

  return NULL;
}

static char * dirname(char * name)
{
  static char path[100];
  int i = 0;
  int pos = 0;

  while((name[i] != 0) && (i < sizeof(path)))
  {
    if(name[i] == '/')
      pos = i;
    path[i] = name[i];
    i++;
  }

  path[i] = 0;
  path[pos] = 0;

  return path;
}

static char * basename(char * name)
{
  int i = 0;
  int pos = 0;

  while(name[i] != 0)
  {
    if(name[i] == '/')
      pos = i;
    i++;
  }

  if(name[pos] == '/')
    pos++;

  return name + pos;
}


int install_e2_procs(char *path, read_proc_t *read_func, write_proc_t *write_func, void *data)
{
  int i;

  /* find the entry */
  for(i = 0; i < sizeof(e2Proc) / sizeof(e2Proc[0]); i++)
  {
    if((e2Proc[i].type == cProcEntry) &&
       (strcmp(path, e2Proc[i].name) == 0))
    {
      if(e2Proc[i].entry == NULL)
      {
        printk("<%s>: entry not available '%s'\n", __func__, path);
      }
      else
      {
        /* check whther the default entry is installed */
				if((e2Proc[i].entry->read_proc != e2Proc[i].read_proc) ||
					 (e2Proc[i].entry->write_proc != e2Proc[i].write_proc))
				{
					printk("<%s>: entry already in use '%s'\n", __func__, path);
				}
        else
        {
					/* install the provided functions */
					e2Proc[i].entry->read_proc = read_func;
					e2Proc[i].entry->write_proc = write_func;
					e2Proc[i].entry->data = data;
        }
      }
      break;
    }
  }

  if(i == sizeof(e2Proc) / sizeof(e2Proc[0]))
  {
    printk("<%s>: entry not found '%s'\n", __func__, path);
  }

  return 0;
}
EXPORT_SYMBOL(install_e2_procs);


int remove_e2_procs(char *path, read_proc_t *read_func, write_proc_t *write_func)
{
  int i;

  /* find the entry */
  for(i = 0; i < sizeof(e2Proc) / sizeof(e2Proc[0]); i++)
  {
    if((e2Proc[i].type == cProcEntry) &&
       (strcmp(path, e2Proc[i].name) == 0))
    {
      if(e2Proc[i].entry == NULL)
      {
        printk("<%s>: entry not available '%s'\n", __func__, path);
      }
      else
      {
        /* replace the entry with the default */
		if(e2Proc[i].entry->read_proc == read_func)
					e2Proc[i].entry->read_proc = e2Proc[i].read_proc;
        else
				  printk("<%s>: different read_procs '%s' (%p, %p)\n",
                 __func__, path, e2Proc[i].entry->read_proc, read_func);

				if(e2Proc[i].entry->write_proc == write_func)
				  e2Proc[i].entry->write_proc = e2Proc[i].write_proc;
        else
				  printk("<%s>: different write_procs '%s' (%p, %p)\n",
                 __func__, path, e2Proc[i].entry->write_proc, write_func);
      }
      break;
    }
  }

  if(i == sizeof(e2Proc) / sizeof(e2Proc[0]))
  {
    printk("<%s>: entry not found '%s'\n", __func__, path);
  }

  return 0;
}
EXPORT_SYMBOL(remove_e2_procs);


static int __init e2_proc_init(void)
{
	int i;
	char *fullname;
	char *path;
	char *name;

	for(i = 0; i < sizeof(e2Proc) / sizeof(e2Proc[0]); i++)
	{
		fullname = e2Proc[i].name;
		path = dirname(e2Proc[i].name);
		name = basename(e2Proc[i].name);
		switch(e2Proc[i].type)
		{
			case cProcDir:
				e2Proc[i].entry = exist_proc_dir(name, find_proc_dir(path));

				if (!e2Proc[i].entry)
					e2Proc[i].entry = proc_mkdir(name, find_proc_dir(path));
				else 
					e2Proc[i].proc_dir_entry_exists = cProcAlreadyExist;

				if(e2Proc[i].entry == NULL)
						printk("<%s>: not exist subdir for entry %s\n", __func__, e2Proc[i].name);

				break;
			case cProcEntry:
				if(strcmp("bus", path) == 0)
				{
					e2Proc[i].entry = create_proc_entry(fullname, 0, NULL);
				}
				else
				{
					e2Proc[i].entry = create_proc_entry(name, 0, find_proc_dir(path));
				}
				if(e2Proc[i].entry != NULL)
				{
					e2Proc[i].entry->read_proc = e2Proc[i].read_proc;
					e2Proc[i].entry->write_proc = e2Proc[i].write_proc;
				}
				else
				{
					printk("<%s>: could not create entry %s\n", __func__, e2Proc[i].name);
				}
				break;
			default:
				printk("<%s>: invalid type %d\n", __func__, e2Proc[i].type);
		}
	}
	
	printk(KERN_INFO "%s: Module loaded, Built as %s at %s %s\n", MODULE_NAME,
	 #ifdef DEBUG
			 "debug",
	 #else
			 "retail",
	 #endif
		 __TIME__, __DATE__);

	return 0;
}

static void __exit e2_proc_cleanup(void)
{
  int i;
  char *name;

  for(i = sizeof(e2Proc)/sizeof(e2Proc[0]) - 1; i >= 0; i--)
  {
    name = basename(e2Proc[i].name);
		printk("<%s>: entry name %s\n", __func__, name);

		if (e2Proc[i].type == cProcDir) {
			if (e2Proc[i].proc_dir_entry_exists == cProcNotExist) {
					printk("%s(): entry %s deleted\n", __func__, name);
					remove_proc_entry(name, e2Proc[i].entry->parent);
			}
			else 
					printk("%s(): entry %s not deleted\n", __func__, name);
		}
		else {
			remove_proc_entry(name, e2Proc[i].entry->parent);
		}
  }

  for(i = sizeof(e2Proc)/sizeof(e2Proc[0]) - 1; i >= 0; i--)
  {
    name = basename(e2Proc[i].name);
    remove_proc_entry(name, e2Proc[i].entry->parent);
  }
}

module_init(e2_proc_init);
module_exit(e2_proc_cleanup);

MODULE_DESCRIPTION("proc file system for enigma2");
MODULE_VERSION("rc8");
MODULE_AUTHOR("Persian Prince");
MODULE_LICENSE("CLOSED");

