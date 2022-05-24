Altera Complete Design Suite Release 8.1 README.TXT
=================================================================

This readme.txt file accompanies the Quartus II software version 8.1. 

Although we have made every effort to ensure that this version
of the Altera(R) software functions correctly, there may be
problems that we haven't encountered. If you have a question or
problem that is not answered by the information provided in
this readme.txt file, please contact Altera support at 
1-800-800-EPLD or submit a Service Request at mysupport.altera.com.

This readme.txt file contains the following information:
*  Location of Additional Information -- tells you where to find
   additional information about the Altera Complete Design Suite
*  Package Contents -- describes the contents of the Altera Complete
   Design Suite
*  System Requirements -- describes the system requirements for the
   components of the Altera Complete Design Suite

Location of Additional Information
==================================
You can find additional information about the Altera Complete
Design Suite at the following locations:  

Release Notes - for information about new features, known issues 
and workarounds, timing model status, device support status, 
revision history and supported versions of other EDA tools, please 
refer to the Quartus II Software Release Notes, the Nios II EDS 
Release Notes, and MegaCore IP Release Notes, available from the 
Literature page of the Altera website. 

Errata sheets that describe known issues with Altera MegaCore 
functions and Nios II EDS are available from the Literature page 
of the Altera website.

Installation & Licensing - for information about installing and 
licensing your Altera design software, please refer to the 
Quartus II Installation & Licensing manuals, which are available 
in versions for Linux and Windows workstations from the 
Literature page of the Altera website.
        
Package contents
================ 
The Altera Complete Design Suite contains the following tools,  
MegaCore functions, and documentation:

*  Quartus II Design Software
*  ModelSim-Altera VHDL and Verilog HDL Simulation Tool
*  Nios II Embedded Design Suite
*  DSP Builder
*  MegaCore IP Library                           
                 
You can download software tools and the MegaCore IP Library 
from the Altera Download Center at the following URL: 
www.altera.com/download
        
The Altera Complete Design Suite also contains the following
technical documentation:
   Introduction to Quartus II manual
   Installation & Licensing manuals  
   Quartus II Handbook
   Mentor Graphics ModelSim Support chapter
   AN 340: Altera Software Licensing
   AN 320: OpenCore Plus Evaluation of Megafunctions
   AN 343: OpenCore Evaluation of AMPP Megafunctions
   Nios II Processor Reference Handbook
   Nios II Software Developer's Handbook
   Nios II C2H Compiler User Guide

   You can download the most current versions of these
   documents from the Literature pages of the Altera website
   at www.altera.com.    

System Requirements
===================
Software requirements
---------------------
The Quartus II Design Software is supported on the 
following operating systems and versions:
   Windows XP SP2
   Windows XP Pro X64 Edition
     (Requires .NET Framework version 2.0)
   Windows Vista 64-bit
   Windows Vista 32-bit 
   Red Hat Enterprise Linux 4.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   Red Hat Enterprise Linux 5.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   SUSE 9 Enterprise Linux
   CentOS 4/5 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   
The ModelSim VHDL and Verilog HDL Simulation Tool is supported on 
the following operating systems and versions:
   Windows XP SP2
   Red Hat Enterprise Linux 4.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   Red Hat Enterprise Linux 5.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   SUSE 9 Enterprise Linux

    
The Nios II Embedded Design Suite is supported on the following 
operating systems and versions:
   Windows XP SP2
   Windows XP Pro X64 Edition
   Windows Vista 32-bit 
   Windows Vista 64-bit 
   Red Hat Linux Enterprise 4.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   Red Hat Enterprise Linux 5.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs  
   SUSE 9 Enterprise Linux
   
The Altera MegaCore IP Library is supported on the following 
operating systems and versions:
   Windows XP SP2
   Windows XP Pro X64 Edition
   Windows Vista 64-bit
   Windows Vista 32-bit 
   Red Hat Linux 4.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   Red Hat Linux 5.0 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
   SUSE 9 Enterprise Linux
   CentOS 4/5 for 32-bit and for AMD64 
     or Intel EMT64 64-bit CPUs
                        
   Some MegaCore functions do not support all the listed operating 
   systems. Refer to the user guide for the individual MegaCore
   function. Additional software, such as MATLAB, is required for 
   some MegaCore functions. Refer to the User Guide for the 
   individual MegaCore function.

DSP Builder is supported on the following operating systems and 
versions:
   All operating systems supported by the Quartus II software version 
   8.1, except Linux
   The following additional software is required to run DSP Builder:
   The MathWorks releases R2007b, R2008a, or R2008b 
   (only the 32-bit versions are supported)
   The DSP Builder Advanced blockset uses Simulink fixed-point 
   types for all operations and requires licensed versions of the 
   Simulink Fixed-Point Blockset and Fixed-Point Toolbox. 
   The Signal Processing Blockset is also recommended and is used 
   in many of the demonstration designs.
   Quartus II software version 8.1
   
Browser
   The Quartus II software uses a web browser to display the 
   interactive tutorial and certain other features. If your 
   operating system does not provide a default browser, you must 
   configure a web browser in the Internet Connectivity page of 
   the Options dialog box. 
   
FLEXlm
   The Altera Complete Design Suite uses the FLEXlm license server 
   software to support network (multiuser) licensing. 
   If it is not installed, the Quartus II installation process 
   installs it automatically. However, if you already have FLEXlm 
   license server software installed for an application other than 
   the Quartus II or MAX+PLUS(R) II software, you should verify 
   that the version is Flexlm 8.0 or later.
   
Display Manager
   Linux
      KDE version included in Red Hat distribution
      Gnome version included in Red Hat distribution
                        
Hardware requirements/recommendations
-------------------------------------
   Pentium III or later for Windows or Linux 
   Color display capable of 1024 X 768 pixel resolution
   DVD-ROM drive
   One or more of the following I/O ports:
   -  USB port (if using Windows XP or Windows 2000) for 
      USB-Blaster(TM) or MasterBlaster(TM) 
      communications cables, or APU programming unit
   -  Parallel port for ByteBlasterMV(TM) or 
      ByteBlaster(TM) II download cables
   -  Serial port for MasterBlaster communications cable

Memory requirements/recommendations
-----------------------------------
A full installation of the Altera Complete Design Suite version 
8.1 requires approximately 7 GB of available disk space on the 
drive or partition where you are installing the Altera Complete 
Design Suite and approximately 30 MB of available space on the 
drive that contains your TEMP directory (Windows only).

The Quartus II Stand-Alone Programmer requires a minimum of 1 GB
of RAM plus additional memory based on the size and number of SOF
files and the size and number of devices being configured.

Altera recommends that your system be configured to provide swap
space (virtual memory) equal to the recommended physical RAM that
is required to process your design.

The following table shows the memory required to process designs
targeted for Altera devices:

Device                                   Recommended Physical RAM
                                         32-bit            64-bit  
-----------------------------------------------------------------
All ACEX(TM) 1K                           256 MB                         
APEX(TM) 20K, APEX 20KE &
APEX 20KC
(EP20K30E, EP20K60E,
EP20K100/100E, EP20K160E,
EP20K200/200C/200E)
Cyclone(TM) (EP1C3, EP1C4, EP1C6)
Cyclone II (EP2C5)
Cyclone III (EP3C5, EP3C10, EP3C16)       256 MB           384 MB
All FLEX 6000
All FLEX(R) 10KE
All FLEX 10KA
All MAX 3000A
All MAX 7000
All MAX 7000AE
All MAX 7000B
All MAX 7000S
MAX II (EPM240, EPM 570)

Cyclone III (EP3C25)                      384 MB           512 MB

APEX 20K, APEX 20KE &                     512 MB                
APEX 20KC
(EP20K300E, EP20K400/400C/400E,
EP20K600C/600E)
APEX II (EP2A15, EP2A25, EP2A40)
Cyclone (EP1C12, EP1C20)
Cyclone II (EP2C8, EP2C20)
Cyclone III (EP3C40)                      512 MB            512 MB
HardCopy(TM) Stratix (HC1S25)
MAX II (EPM1270, EPM2210)
Stratix(TM) (EP1S10, EP1S20)
Stratix GX (EP1SGX10)
Stratix II (EP2S15)
Arria GX (EP1AGX20C)

Cyclone III (EP3C55, EP3C80)              768 MB           1.0 GB


APEX 20KE & APEX 20KC                     1.0 GB           1.5 GB              
(EP20K1000C/1000E, 
EP20K1500E)
Cyclone II (EP2C35, EP2C50)
Cyclone III (EP3C120)
HardCopy Stratix (HC1S30, HC1S40,
HC1S60)
Stratix (EP1S25, EP1S30, EP1S40, EP1S60)
Stratix GX (EP1SGX25, EP1SGX40)
Stratix II (EP2S30)
Stratix II GX (EP2SGX30,EP2SGX60)
Stratix III (EP3SL50, EP3SE50, EP3SL70)
Arria GX (EP1AGX35C, EP1AGX35D,
EP1AGX50D, EP1AGX60C, EP1AGX60D, 
EP1AGX60E)

APEX(TM) II (EP2A70)                      1.5 GB           2.0 GB     
Cyclone II (EP2C70)
HardCopy Stratix (HC1S80)
HardCopy II (HC210)
Stratix (EP1S80)
Stratix II (EP2S60, EP2S90)
Stratix II GX (EP2SGX90)
Stratix III (EP3SE80)
Arria GX (EP1AGX90E)
Stratix IV (EP4SGX70)
                      

Stratix II (EP2S130)                      2.0 GB           3.0 GB    
Stratix II GX (EP2SGX130)
HardCopy II (HC220)
Stratix III (EP3SL110, EP3SE110, EP3SE150)
Stratix IV (EP4SGX110)


Stratix II (EP2S180)                      3.0 GB           4.0 GB     
HardCopy II (HC230, HC240)
Stratix III (EP3SL200)
Stratix IV (EP4SGX230)


Stratix III (EP3SE260, EP3SL340)          4.0 GB           6.0 GB
Stratix IV (EP4GS290)


Stratix IV (EP4SGX360, EP4SGX530, 	  N/A	           8.0 GB	 
EP4SE530)
		  