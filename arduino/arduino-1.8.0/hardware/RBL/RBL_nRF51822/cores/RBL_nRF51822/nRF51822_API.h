
#ifndef NRF51822_API_H_
#define NRF51822_API_H_

#include "nRF5xCharacteristicDescriptorDiscoverer.h"
#include "nRF5xDiscoveredCharacteristic.h"
#include "nRF5xGap.h"
#include "nRF5xGattClient.h"
#include "nRF5xGattServer.h"
#include "nRF5xn.h"
#include "nRF5xSecurityManager.h"
#include "nRF5xServiceDiscovery.h"
#include "projectconfig.h"


#include "btle.h"
#include "btle_advertising.h"
#include "btle_discovery.h"
#include "btle_gap.h"
#include "btle_security.h"
#include "custom_helper.h"


#include "ansi_escape.h"
#include "assertion.h"
#include "binary.h"
#include "ble_error.h"
#include "common.h"
#include "compiler.h"

//components/ble
#include "ble_radio_notification.h"
#include "ble_dfu.h"
#include "ble_advdata.h"
#include "ble_conn_params.h"
#include "ble_conn_state.h"
#include "ble_date_time.h"
#include "ble_gatt_db.h"
#include "ble_sensor_location.h"
#include "ble_srv_common.h"
#include "device_manager.h"
#include "device_manager_cnfg.h"
#include "id_manager.h"
#include "peer_data.h"
#include "peer_data_storage.h"
#include "peer_database.h"
#include "peer_id.h"
#include "peer_manager_types.h"
#include "pm_buffer.h"
#include "pm_mutex.h"

//components/device
#include "compiler_abstraction.h"
#include "nrf.h"
#include "nrf51.h"
#include "nrf51_bitfields.h"
#include "nrf51_deprecated.h"

//components/drivers_nrf
#include "ble_flash.h"
#include "nrf_delay.h"
#include "nrf_ecb.h"
#include "nrf_gpio.h"
#include "nrf_gpiote.h"
#include "nrf_nvmc.h"
#include "nrf_temp.h"
#include "nrf_wdt.h"
#include "pstorage.h"
#include "pstorage_platform.h"

//components/libraries
#include "bootloader.h"
#include "bootloader_types.h"
#include "bootloader_util.h"
#include "dfu.h"
#include "dfu_app_handler.h"
#include "dfu_bank_internal.h"
#include "dfu_ble_svc.h"
#include "dfu_ble_svc_internal.h"
#include "dfu_init.h"
#include "dfu_transport.h"
#include "dfu_types.h"
#include "hci_mem_pool_internal.h"

#include "crc16.h"
#include "section_vars.h"
#include "fds.h"
#include "fds_config.h"
#include "fds_types_internal.h"

#include "fstorage.h"
#include "fstorage_config.h"
#include "hci_mem_pool.h"
#include "app_scheduler.h"
#include "app_timer.h"

#include "app_error.h"
#include "app_util.h"
#include "app_util_platform.h"
#include "common.h"
#include "nordic_common.h"
#include "nrf_assert.h"
#include "sdk_common.h"
#include "sdk_errors.h"
#include "sdk_mapped_flags.h"
#include "sdk_os.h"

//components/softdevice
#include "ant_stack_handler_types.h"
#include "ble_stack_handler_types.h"
#include "softdevice_handler.h"
#include "softdevice_handler_appsh.h"

#include "nrf_ble.h"
#include "ble_err.h"
#include "ble_gap.h"
#include "ble_gatt.h"
#include "ble_gattc.h"
#include "ble_gatts.h"
#include "ble_hci.h"
#include "ble_l2cap.h"
#include "ble_ranges.h"
#include "ble_types.h"
#include "nrf_error.h"
#include "nrf_error_sdm.h"
#include "nrf_error_soc.h"
#include "nrf_mbr.h"
#include "nrf_sdm.h"
#include "nrf_soc.h"
#include "nrf_svc.h"
#include "softdevice_assert.h"


#endif
