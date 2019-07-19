

sudo su
apt-get install git cmake build-essential libavahi-client-dev libsqlite3-dev chromium-browser libssl-dev libudev-dev libgtest-dev libbluetooth3 libbluetooth-dev bluez-tools gstreamer1.0* libpulse-dev


sudo apt-get install vlc





root@sdl-core:/sdl_core/vagrant/sdl_core/scripts# gst-launch-1.0 filesrc location=sample_iPod.m4v  ! decodebin ! videoconvert ! ximagesink sync=false
No protocol specified
Failed to connect to Mir: Failed to connect to server socket: No such file or directory
Unable to init server: Could not connect: Connection refused

(gst-plugin-scanner:21243): Clutter-CRITICAL **: Unable to initialize Clutter: Could not initialise GDK
No protocol specified
Failed to connect to Mir: Failed to connect to server socket: No such file or directory
Unable to init server: Could not connect: Connection refused

(gst-plugin-scanner:21243): Clutter-CRITICAL **: Unable to initialize Clutter: Could not initialise GDK

(gst-plugin-scanner:21243): Clutter-Gst-CRITICAL **: Unable to initialize Clutter
Setting pipeline to PAUSED ...
No protocol specified
ERROR: Pipeline doesn't want to pause.
ERROR: from element /GstPipeline:pipeline0/GstXImageSink:ximagesink0: Could not initialise X output
Additional debug info:
ximagesink.c(863): gst_x_image_sink_xcontext_get (): /GstPipeline:pipeline0/GstXImageSink:ximagesink0:
Could not open display
Setting pipeline to NULL ...
Freeing pipeline ...
root@sdl-core:/sdl_core/vagrant/sdl_core/scripts# 







http://gstreamer-devel.966125.n4.nabble.com/Problem-using-Gstreamer-td4503209.html

osssink is not used widely


oss is not widely in use anymore. If you want make a patch to the documentation and replace osssink with autoaudiosink. Submit the patch to http://bugzilla.gnome.org for product=gstreamer.


gst-launch-1.0 filesrc location=cello82.mp3 ! mad ! audioconvert ! audioresample ! autoaudiosink






https://ubuntuforums.org/showthread.php?t=1707497


https://askubuntu.com/questions/4662/where-is-the-x-org-config-file-how-do-i-configure-x-there
X -configure


#Gstream list all
gst-inspect-1.0  | grep demux


#Setup Display
https://askubuntu.com/questions/438451/could-not-open-display-null-error-how-can-i-fix-this
export DISPLAY=:0.0



##Test
gst-launch-1.0 videotestsrc ! ximagesink

#Demultiplexer
https://en.wikipedia.org/wiki/Demultiplexer_(media_file)

##mpegpsdemux
http://gstreamer-devel.966125.n4.nabble.com/Where-is-dvddemux-in-1-2-td4670342.html

gst-inspect-1.0  | grep mpegp


#Detect Encoding
To automatically detect and select the right decoder for a given encoded stream in a pipeline, try any of the following:

gst-launch-1.0 filesrc location=thesong.mp3 ! decodebin ! audioconvert ! pulsesink
gst-launch-1.0 filesrc location=my-random-media-file.mpeg ! decodebin ! pulsesink
gst-launch-1.0 filesrc location=my-random-media-file.mpeg ! decodebin ! videoconvert ! xvimagesink


#Test From File
do not run as root? run as vagrant?

gst-launch-1.0 videotestsrc ! ximagesink

gst-launch-1.0 filesrc location=DELTA.mpg ! decodebin ! videoconvert !  ximagesink


https://stackoverflow.com/questions/54097034/gst-good-plugins-installed-but-no-element-autovideosink

locate libgstautodetect.so

https://askubuntu.com/questions/468875/gstreamer-plugins-ugly-and-bad


gst-launch-1.0 filesrc location=/sdl_core/vagrant/sdl_core/scripts/sample_iPod.m4v ! decodebin ! videoconvert ! xvimagesink


gst-launch-1.0 filesrc location=DELTA.mpg ! dvddemux ! mpeg2dec ! xvimagesink

cd /sdl_core/vagrant/sdl_core/scripts/
gst-launch-1.0 filesrc location=DELTA.mpg ! tsdemux ! mpeg2dec ! ximagesink



#List of debumuxers
http://gstreamer-devel.966125.n4.nabble.com/issue-in-playing-video-td969701.html

mx27# gst-inspect
wavenc:  wavenc: WAV audio muxer
asf:  asfdemux: ASF Demuxer
id3demux:  id3demux: ID3 tag demuxer
coreindexers:  memindex: A index that stores entries in memory
annodex:  cmmldec: CMML stream decoder
annodex:  cmmlenc: CMML streams encoder
videoparse:  videoparse: Video Parse
mpegstream:  dvddemux: DVD Demuxer
mpegstream:  mpegdemux: MPEG Demuxer
mpegstream:  mpegparse: MPEG System Parser
dvdsub:  dvdsubdec: DVD subtitle Decoder
videoflip:  videoflip: Video flipper
coreelements:  multiqueue: MultiQueue
coreelements:  typefind: TypeFind
coreelements:  tee: Tee pipe fitting
coreelements:  filesink: File Sink
coreelements:  queue: Queue
coreelements:  identity: Identity
coreelements:  filesrc: File Source
coreelements:  fdsink: Filedescriptor Sink
coreelements:  fdsrc: Disk Source
coreelements:  fakesink: Fake Sink
coreelements:  fakesrc: Fake Source
coreelements:  capsfilter: CapsFilter
speed:  speed: Speed
mulaw:  mulawdec: Mu Law audio decoder
mulaw:  mulawenc: Mu Law audio encoder
nuvdemux:  nuvdemux: Nuv demuxer
matroska:  matroskamux: Matroska muxer
matroska:  matroskademux: Matroska demuxer
effectv:  quarktv: QuarkTV effect
effectv:  revtv: RevTV effect
effectv:  vertigotv: VertigoTV effect
effectv:  shagadelictv: ShagadelicTV
effectv:  warptv: WarpTV effect
effectv:  dicetv: DiceTV effect
effectv:  agingtv: AgingTV effect
effectv:  edgetv: EdgeTV effect
typefindfunctions: video/vivo: viv
typefindfunctions: application/x-mmsh: no extensions
typefindfunctions: multipart/x-mixed-replace: no extensions
typefindfunctions: video/x-dirac: no extensions
typefindfunctions: application/x-ms-dos-executable: dll, exe, ocx, sys, scr, msstyles, cpl
typefindfunctions: application/x-ar: a
typefindfunctions: application/x-tar: tar
typefindfunctions: application/x-rar: rar
typefindfunctions: audio/x-wavpack-correction: wvc
typefindfunctions: audio/x-wavpack: wv, wvp
typefindfunctions: audio/x-spc: spc
typefindfunctions: adts_mpeg_stream: aac
typefindfunctions: application/x-executable: no extensions
typefindfunctions: text/x-cmml: no extensions
typefindfunctions: application/x-ogg-skeleton: no extensions
typefindfunctions: audio/x-speex: no extensions
typefindfunctions: application/x-ogm-text: no extensions
typefindfunctions: application/x-ogm-audio: no extensions
typefindfunctions: application/x-ogm-video: no extensions
typefindfunctions: video/x-theora: no extensions
typefindfunctions: audio/x-vorbis: no extensions
typefindfunctions: audio/x-flac: flac
typefindfunctions: application/x-compress: Z
typefindfunctions: application/zip: zip
typefindfunctions: application/x-gzip: gz
typefindfunctions: application/x-bzip: bz2
typefindfunctions: image/x-sun-raster: ras
typefindfunctions: image/x-xpixmap: xpm
typefindfunctions: image/x-jng: jng
typefindfunctions: video/x-mng: mng
typefindfunctions: image/x-xcf: xcf
typefindfunctions: audio/x-sid: sid
typefindfunctions: audio/iLBC-sh: ilbc
typefindfunctions: audio/x-amr-wb-sh: amr
typefindfunctions: audio/x-amr-nb-sh: amr
typefindfunctions: video/x-dv: dv, dif
typefindfunctions: video/x-mve: mve
typefindfunctions: video/x-matroska: mkv, mka
typefindfunctions: image/tiff: tif, tiff
typefindfunctions: image/bmp: bmp
typefindfunctions: image/png: png
typefindfunctions: image/gif: gif
typefindfunctions: image/jpeg: jpg, jpe, jpeg
typefindfunctions: application/x-ape: ape
typefindfunctions: audio/x-shorten: shn
typefindfunctions: audio/x-w64: w64
typefindfunctions: audio/x-ircam: sf
typefindfunctions: audio/x-sds: sds
typefindfunctions: audio/x-voc: voc
typefindfunctions: audio/x-nist: nist
typefindfunctions: audio/x-paris: paf
typefindfunctions: audio/x-svx: iff, svx
typefindfunctions: audio/x-aiff: aiff, aif, aifc
typefindfunctions: audio/x-wav: wav
typefindfunctions: application/xml: xml
typefindfunctions: application/smil: smil
typefindfunctions: text/uri-list: ram
typefindfunctions: text/plain: txt
typefindfunctions: video/x-flv: flv
typefindfunctions: application/x-shockwave-flash: swf, swfl
typefindfunctions: application/x-pn-realaudio: ra, ram, rm, rmvb
typefindfunctions: application/vnd.rn-realmedia: ra, ram, rm, rmvb
typefindfunctions: text/html: htm, html
typefindfunctions: image/x-quicktime: qif, qtif, qti
typefindfunctions: video/quicktime: mov
typefindfunctions: application/x-3gp: 3gp
typefindfunctions: audio/x-m4a: m4a
typefindfunctions: video/x-nuv: nuv
typefindfunctions: video/mpeg4: m4v
typefindfunctions: video/mpeg-stream: mpv, mpeg, mpg
typefindfunctions: video/mpeg: mpv, mpeg, mpg
typefindfunctions: application/ogg: anx, ogg, ogm
typefindfunctions: video/mpegts: ts
typefindfunctions: video/mpeg2: mpe, mpeg, mpg
typefindfunctions: video/mpeg1: mpe, mpeg, mpg
typefindfunctions: audio/x-ac3: ac3
typefindfunctions: audio/mpeg: mp3, mp2, mp1, mpga
typefindfunctions: audio/x-mod: 669, amf, dsm, gdm, far, imf, it, med, mod, mtm, okt, sam, s3m, stm, stx, ult, xm
typefindfunctions: audio/x-ttafile: tta
typefindfunctions: application/x-apetag: ape, mpc, wv
typefindfunctions: application/x-id3v1: mp3, mp2, mp1, mpga, ogg, flac, tta
typefindfunctions: application/x-id3v2: mp3, mp2, mp1, mpga, ogg, flac, tta
typefindfunctions: video/x-fli: flc, fli
typefindfunctions: video/x-vcd: dat
typefindfunctions: video/x-cdxa: dat
typefindfunctions: video/x-msvideo: avi
typefindfunctions: audio/x-au: au, snd
typefindfunctions: audio/x-musepack: mpc
typefindfunctions: video/x-ms-asf: asf, wm, wma, wmv
avi:  avimux: Avi muxer
avi:  avidemux: Avi demuxer
videobox:  videobox: Video box filter
realmedia:  rdtdepay: RDT packet parser
realmedia:  rmdemux: RealMedia Demuxer
alsa:  alsasink: Audio sink (ALSA)
alsa:  alsasrc: Audio source (ALSA)
alsa:  alsamixer: Alsa mixer
videoscale:  videoscale: Video scaler
udp:  udpsrc: UDP packet receiver
udp:  dynudpsink: UDP packet sender
udp:  multiudpsink: UDP packet sender
udp:  udpsink: UDP packet sender
rfbsrc:  rfbsrc: Rfb source
videorate:  videorate: Video rate adjuster
subparse:  ssaparse: SSA Subtitle Parser
subparse:  subparse: Subtitle parser
subparse: subparse_typefind: srt, sub, mpsub, mdvd, smi, txt
audiorate:  audiorate: Audio rate adjuster
ossaudio:  osssink: Audio Sink (OSS)
ossaudio:  osssrc: Audio Source (OSS)
ossaudio:  ossmixer: OSS Mixer
goom:  goom: GOOM: what a GOOM!
spectrum:  spectrum: Spectrum analyzer
gdp:  gdppay: GDP Payloader
gdp:  gdpdepay: GDP Depayloader
volume:  volume: Volume
mpegaudioparse:  mp3parse: MPEG1 Audio Parser
level:  level: Level
qtdemux:  qtdemux: QuickTime demuxer
iec958:  ac3iec958: AC3 to IEC958 filter
icydemux:  icydemux: ICY tag demuxer
videotestsrc:  videotestsrc: Video test source
tta:  ttadec: TTA audio decoder
tta:  ttaparse: TTA file parser
mad:  id3mux: id3 tag muxer
mad:  mad: mad mp3 decoder
cutter:  cutter: Audio cutter
auparse:  auparse: AU audio demuxer
alphacolor:  alphacolor: Alpha color filter
modplug:  modplug: ModPlug
videomixer:  videomixer: Video mixer
navigationtest:  navigationtest: Video navigation test
videocrop:  videocrop: Crop
freeze:  freeze: Stream freezer
autodetect:  autoaudiosink: Auto audio sink
autodetect:  autovideosink: Auto video sink
replaygain:  rganalysis: ReplayGain analysis
filter:  bpwsinc: Band-pass Windowed sinc filter
filter:  lpwsinc: Low-pass Windowed sinc filter
filter:  iir: Infinite Impulse Response (IIR) filter
rtp:  rtpvorbispay: RTP packet depayloader
rtp:  rtpvorbisdepay: RTP packet depayloader
rtp:  rtptheorapay: RTP packet depayloader
rtp:  rtptheoradepay: RTP packet depayloader
rtp:  rtpsv3vdepay: RTP packet depayloader
rtp:  rtpspeexdepay: RTP packet depayloader
rtp:  rtpspeexpay: RTP packet payloader
rtp:  rtpmp4gpay: RTP packet payloader
rtp:  rtpmp4gdepay: RTP packet depayloader
rtp:  rtpmp4vdepay: RTP packet depayloader
rtp:  rtpmp4vpay: RTP packet payloader
rtp:  rtpmp2tdepay: RTP packet depayloader
rtp:  asteriskh263: RTP packet parser
rtp:  rtph264depay: RTP packet depayloader
rtp:  rtph263pay: RTP packet payloader
rtp:  rtph263pdepay: RTP packet depayloader
rtp:  rtph263ppay: RTP packet payloader
rtp:  rtpmpapay: RTP packet payloader
rtp:  rtpmpadepay: RTP packet depayloader
rtp:  rtppcmapay: RTP packet payloader
rtp:  rtppcmupay: RTP packet payloader
rtp:  rtppcmudepay: RTP packet depayloader
rtp:  rtppcmadepay: RTP packet depayloader
rtp:  rtpamrpay: RTP packet payloader
rtp:  rtpamrdepay: RTP packet depayloader
rtp:  rtpgsmpay: RTP GSM audio payloader
rtp:  rtpgsmdepay: RTP packet depayloader
rtp:  rtpilbcdepay: RTP iLBC packet depayloader
rtp:  rtpilbcpay: RTP Payloader for iLBC Audio
rtp:  rtpdepay: RTP payloader
h264parse:  h264parse: H264Parse
rtsp:  rtpdec: RTP Decoder
rtsp:  rtspsrc: RTSP packet receiver
gstinterlace:  deinterlace: Deinterlace
ffmpegcolorspace:  ffmpegcolorspace: FFMPEG Colorspace converter
apetag:  apedemux: APE tag demuxer
xingheader:  xingmux: MP3 Xing muxer
audiotestsrc:  audiotestsrc: Audio test source
audiofx:  audiopanorama: AudioPanorama
alsaspdif:  alsaspdifsink: S/PDIF ALSA audiosink
audioconvert:  audioconvert: Audio converter
decodebin2:  decodebin2: Decoder Bin
multipart:  multipartmux: Multipart muxer
multipart:  multipartdemux: Multipart demuxer
playbin:  playbin: Player Bin
decodebin:  decodebin: Decoder Bin
videobalance:  videobalance: Video balance
alaw:  alawdec: A Law audio decoder
alaw:  alawenc: A Law audio encoder
dvbsrc:  dvbsrc: DVB Source
nsfdec:  nsfdec: Nsf decoder
cdxaparse:  cdxaparse: (S)VCD parser
video4linux:  v4lsrc: Video (video4linux/raw) Source
flxdec:  flxdec: FLX audio decoder
multifile:  multifilesink: Multi-File Sink
multifile:  multifilesrc: Multi-File Source
debug:  testsink: Test plugin
debug:  progressreport: Progress report
debug:  navseek: Seek based on left-right arrows
debug:  breakmydata: Break my data
smpte:  smpte: SMPTE transitions
y4menc:  y4menc: YUV4MPEG video encoder
adder:  adder: Adder
tcp:  multifdsink: Multi filedescriptor sink
tcp:  tcpserversrc: TCP server source
tcp:  tcpserversink: TCP server sink
tcp:  tcpclientsrc: TCP client source
tcp:  tcpclientsink: TCP client sink
audioresample:  audioresample: Audio scaler
wavparse:  wavparse: WAV audio demuxer
alpha:  alpha: Alpha filter
dvdlpcmdec:  dvdlpcmdec: DVD LPCM Audio decoder
staticelements:  bin: Generic bin
staticelements:  pipeline: Pipeline object
