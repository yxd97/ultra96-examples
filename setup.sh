VERSION=2020.2
echo setting up Vitis-$VERSION environment......
unset LM_LICENSE_FILE
export XILINXD_LICENSE_FILE=2100@flex.ece.cornell.edu
export VITIS=/opt/xilinx/Xilinx_Vivado_vitis_2020.2/Vitis/2020.2
export HLS_INCLUDE=/opt/xilinx/Xilinx_Vivado_vitis_2020.2/Vitis_HLS/2020.2/include
source $VITIS/settings64.sh
source /opt/xilinx/xrt/setup.sh
echo Vitis-$VERSION setup finished
