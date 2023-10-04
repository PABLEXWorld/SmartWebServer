// -----------------------------------------------------------------------------------
// Locale Español (default,) ISO ISO639-1 language code "es"
#pragma once

// General
#define L_UPLOAD "Subir"
#define L_DOWNLOAD "Descargar"
#define L_ACCEPT "Aceptar"
#define L_CONTINUE "Continuar"
#define L_ARE_YOU_SURE "Estás seguro"
#define L_LOGOUT "Cerrar sesión"

#define L_UT "Hora universal"
#define L_LST "Tiempo sideral"
#define L_LONG "Long."
#define L_LAT "Lat."
#define L_EAST "Este"
#define L_WEST "Oeste"
#define L_ZENITH "Cenit"
#define L_NCP "Polo celeste norte"
#define L_SCP "Polo celeste sur"

#define L_NONE "Ninguno"
#define L_AUTO "Automático"
#define L_OK "OK"
#define L_ON "Encendido"
#define L_OFF "Apagado"
#define L_START "Iniciar"
#define L_DELTA "Delta"
#define L_ZERO "Cero"
#define L_SPAN "Lapso"
#define L_POWER "Energía"
#define L_GUIDE "Guía"
#define L_CENTER "Centro"
#define L_BLUE "Azul"
#define L_GREEN "Verde"
#define L_RATE "velocidad"
#define L_RANGE "rango"
#define L_UNKNOWN "Desconocido"
#define L_FAULT "Falla"

// ---------------------------- Index ----------------------------
// date/time
#define L_TIME_BROWSER_UT "Hora universal (del navegador)"

// weather
#define L_TELE_TEMPERATURE "Temperatura del telescopio"
#define L_TEMPERATURE "Temperatura ambiente"
#define L_PRESSURE "Presión barométrica"
#define L_HUMIDITY "Humedad relativa"
#define L_DEW_POINT "Punto de rocío"

// operation
#define L_TRACKING "Seguimiento"
#define L_SITE "Sitio"
#define L_COORDINATES "Coordenadas"
#define L_CURRENT "Corriente"
#define L_TARGET "Objetivo&nbsp;&nbsp;"
#define L_ENCODER "Codificador"
#define L_POLAR_ALIGN "Alineamiento polar"

// pier side
#define L_PIER_SIDE "Lado del muelle"
#define L_MERIDIAN_FLIPS "cambio de meridiano"
#define L_ALIGN_MESSAGE "Montar en relación a"
#define L_MERIDIAN_FLIP_W_TO_E "Cambio de meridiano, Oeste a Este"
#define L_MERIDIAN_FLIP_E_TO_W "Cambio de meridiano, Este a Oeste"

#define L_OPERATIONS "Operaciones"

// parking
#define L_PARKING "Aparcando"
#define L_PARKED "Aparcado"
#define L_NOT_PARKED "No Aparcado"
#define L_PARKING "Aparcando"
#define L_PARK_FAILED "Fallo al aparcar"

// home
#define L_AT_HOME "En posición inicial"
#define L_INGOTO "Desplazando"
#define L_PPS_SYNC "Sincronización PPS"

// tracking
#define L_REFR_COMP_RA "Refr. Comp. Eje RA"
#define L_REFR_COMP_BOTH "Refr. Comp. Ambos ejes"
#define L_FULL_COMP_RA "Comp. Completa Eje RA"
#define L_FULL_COMP_BOTH "Comp. Completa Ambos ejes"
#define L_TRACKING "Siguiendo"
#define L_TRACKING_RATE "Velocidad de seguimiento"
#define L_CURRENT_MAXRATE "Velocidad máxima actual"
#define L_DEFAULT_MAXRATE "Velocidad máxima predeterminada"
#define L_CURRENT_MAXSLEW "Velocidad máxima de desplazamiento"

// driver status
#define L_DRIVER_STATUS "Driver"
#define L_STATE "Estado"
#define L_COMMS_FAILURE "Fallo de comunicación"
#define L_STANDSTILL "Parada"
#define L_OPEN_LOAD "Carga abierta"
#define L_SHORT_GND "Cortocircuito a tierra"
#define L_SHUTDOWN_OVER "Apagado terminado"
#define L_PRE_WARNING "Pre-advertencia"
#define L_DRIVER_FAULT "Fallo"

// misc. errors/workload
#define L_INTERNAL_TEMP "Temperatura interna de la controladora"
#define L_LAST_GENERAL_ERROR "Último error general (de fondo)"
#define L_WORKLOAD "Carga de trabajo"
#define L_WIRELESS_SIGNAL_STRENGTH "Intensidad de la señal inalámbrica"

// --------------------------- Control ---------------------------

#if DISPLAY_SPECIAL_CHARS == ON
  #define HOME_CH "&#x1F3E0;"
  #define ARROW_DR "&#x27A5;"
  #define ARROW_UR "&#x27A6;"
  #define ARROW_R2 "&#x27A4;"
  #define CAUTION_CH "&#9888;"
  #define CLOCK_CH "&#x1F565;"
  #define ARROW_LL "&lt;&lt;"
  #define ARROW_L "&lt;"
  #define ARROW_R "&gt;"
  #define ARROW_RR "&gt;&gt;"
  #define ARROW_DD "&lt;&lt;"
  #define ARROW_D "&lt;"
  #define ARROW_U "&gt;"
  #define ARROW_UU "&gt;&gt;"
  #define SIDEREAL_CH "&#9733;"
  #define LUNAR_CH "&#9790;"
  #define SOLAR_CH "&#9737;"
#else
  #define HOME_CH "H"
  #define ARROW_DR "-&gt;"
  #define ARROW_UR "-&gt;"
  #define ARROW_R2 "&gt;"
  #define CAUTION_CH "!"
  #define CLOCK_CH "T"
  #define ARROW_LL "&lt;&lt;"
  #define ARROW_L "&lt;"
  #define ARROW_R "&gt;"
  #define ARROW_RR "&gt;&gt;"
  #define ARROW_DD "&lt;&lt;"
  #define ARROW_D "&lt;"
  #define ARROW_U "&gt;"
  #define ARROW_UU "&gt;&gt;"
  #define SIDEREAL_CH "*"
  #define LUNAR_CH "("
  #define SOLAR_CH "O"
#endif

#define BUTTON_N "N"
#define BUTTON_S "S"
#define BUTTON_E "E"
#define BUTTON_W "W"
#define BUTTON_SYNC "@"

#define L_CENTER_RATE "Centro"
#define L_FIND_RATE "Buscar"
#define L_FAST_RATE "Rápido"
#define L_VFAST_RATE "Muy rápido"

#define L_HINT_CLOCK "Configurar fecha/hora"
#define L_HINT_CONTINUE_GOTO "Continuar desplazamiento (al pausar en posición inicial)"
#define L_HINT_FIND_HOME "Buscar posición inicial"
#define L_HINT_RESET_HOME "En posición inicial (Reset)"
#define L_HINT_UNPARK "Desaparcar"
#define L_HINT_PARK "Aparcar"
#define L_HINT_EMERGENCY_STOP "Parada de emergencia!"
#define L_HINT_RATE_SIDEREAL "Rango sideral"
#define L_HINT_RATE_LUNAR "Rango lunar"
#define L_HINT_RATE_SOLAR "Rango solar"
#define L_HINT_FOC_SEL "Seleccionar foco"
#define L_HINT_FOC_FIND_HOME "Buscar posición inicial de foco"
#define L_HINT_FOC_RESET_HOME "Foco en posición incial (Reset)"
#define L_HINT_ROT_FIND_HOME "Buscar posición inicial de rotador"
#define L_HINT_ROT_RESET_HOME "Rotador en posición inicial (Reset)"
#define L_HINT_DEROTATE_ON "Desrotar activado"
#define L_HINT_ROTATOR_REV "Invertir movimiento de rotador"
#define L_HINT_ROTATOR_PAR "Mover rotador a ángula paraláctico"
#define L_HINT_DEROTATE_OFF "Desrotar desactivado"

#define L_ALIGN "Alinear"
#define L_AUX_FEATURES "Funciones auxiliares"

#define L_FOCUSER "Foco"
#define L_ROTATOR "Rotador"
#define L_CAMERA_EXPOSURE "Exposición"
#define L_CAMERA_DELAY "Retraso"
#define L_CAMERA_COUNT "Cantidad"

// ---------------------------- Library --------------------------

#define L_CATALOG "Catálogo"
#define L_CATALOGS "Catálogos"
#define L_RECS_AVAIL "registros disponibles"
#define L_NO_CATALOG "No se seleccionó ningún catálogo"
#define L_CAT_DATA "Datos (descargados o a subir.)"

#define L_CAT_EXAMPLE1 "Campos:<br /><pre>"
#define L_CAT_EXAMPLE2 "  Se requiere un registro de Nombre de catálogo para la fila 1, que<br />"
#define L_CAT_EXAMPLE3 "  consta de un '$' seguido de hasta 10 caracteres.<br /><br />"
#define L_CAT_EXAMPLE4 "  El nombre del objeto es una secuencia de hasta 11 caracteres.<br /><br />"
#define L_CAT_EXAMPLE5 "  Cat es un código de categoría como sigue:<br />"
#define L_CAT_EXAMPLE6 "  RA (Jnow) está en horas, minutos y segundos.<br />"
#define L_CAT_EXAMPLE7 "  Dec (Jnow) está en +/- grados, minutos y segundos.<br />"
#define L_CAT_NO_NAME "Catálogo seleccionado, no tiene nombre."
#define L_CAT_GET_NAME_FAIL "Catálogo seleccionado, fallo al obtener nombre."
#define L_CAT_NO_CAT "No se seleccionó ningún catálogo."
#define L_SELECTED "seleccionado"
#define L_CAT_DOWNLOAD_FAIL "Fallo al descargar, datos incorrectos."
#define L_CAT_DOWNLOAD_SUCCESS "Descarga exitosa."
#define L_CAT_DOWNLOAD_INDEX_FAIL "Fallo al descargar, no se pudo indizar al catálogo."
#define L_CAT_DATA_REMOVED "Datos del catálogo borrados"
#define L_CAT_UPLOAD_FAIL "Fallo al subir, nombre del catálogo incorrecto."
#define L_CAT_UPLOAD_INDEX_FAIL "Fallo al subir, indizando nombre del catálogo rec."
#define L_CAT_DELETE_FAIL "Fallo al subir, eliminando nombre del catálogo rec."
#define L_CAT_WRITE_NAME_FAIL "Fallo al subir, grabando nombre del catálogo rec."
#define L_CAT_UPLOAD_NO_NAME_FAIL "Fallo al subir, la línea 1 debe contener el nombre del catálogo."
#define L_CAT_BAD_FORM "Fallo al subir, formato incorrecto en línea# "
#define L_CAT_UPLOAD_BAD_OBJECT_NAME "Fallo al subir, nombre de objeto incorrecto en línea# "
#define L_CAT_BAD_CATEGORY "Fallo al subir, categoría incorrenta en línea# "
#define L_CAT_BAD_RA "Fallo al subir, formato de RA incorrecto en línea# "
#define L_CAT_BAD_DEC "Fallo al subir, formato de Dec incorrecto en línea# "
#define L_CAT_UPLOAD_RA_FAIL "Fallo al subir RA en línea# "
#define L_CAT_UPLOAD_DEC_FAIL "Fallo al subir Dec en línea# "
#define L_CAT_UPLOAD_LINE_FAIL "Fallo al subir línea# "
#define L_CAT_UPLOAD_SUCCESS "Éxito al subir"
#define L_CAT_UPLOAD_LINES_WRITTEN "líneas grabadas"
#define L_CAT_UPLOAD_SELECT_FAIL "Fallo al subir, no se puede seleccionar el catálogo."
#define L_CAT_UPLOAD_NO_CAT "Fallo al subir, no se seleccionó ningún catálogo."
#define L_CAT_CLEAR "Limpiar catálogo"
#define L_CAT_CLEAR_LIB "Limpiar biblioteca"

// --------------------------- Encoders --------------------------

// general settings
#define L_ENC_SYNC_TO_ENC "Sincronizar OnStep a Codificadores"
#define L_ENC_SYNC_TO_ONS "Sincronizar Codificadores a OnStep"
#define L_ENC_ZERO_TO_ONS "Configurar Cero Absoluto de Codificador a OnStep"
#define L_ENC_AUTO_SYNC "Automáticamente sinc. OnStep a Codificadores"
#define L_ENC_CONF "Configuración de codificadores"
#define L_ENC_SET_TPD "Cuenta por grado"
#define L_ENC_MAX_ANGLE "Dist. máx angular (Cod. vs OnStep)"
#define L_ENC_MAX_ANGLE_AXIS1 "en arc-seg 0 to 9999"
#define L_ENC_MAX_ANGLE_AXIS2 "en arc-seg 0 to 9999"
#define L_ENC_AUTO_RATE "Control de velocidad de OnStep"
#define L_ENC_SYNC_NOW "Ahora"

// encoder rate control
#define L_ENC_BINNED_SAMPLES "Encoder rate averaging, binned samples"
#define L_ENC_SAMPLES "Encoder rate averaging, samples"
#define L_ENC_PROPORTIONAL "Proportional response"
#define L_ENC_MIN_GUIDE "Minimum guide"
#define L_ENC_RATE_COMP "Encoder rate comp"
#define L_ENC_MAGN "Magnitud"
#define L_ENC_PHASE "Fase"
#define L_ENC_COUNTS "Cuenta por grado"
#define L_ENC_STAT_RATE_AXIS1 "Tasas del Eje1 (sideral)"
#define L_ENC_STAT_INTPOL_COMP "Comp. Intpol"
#define L_ENC_STAT_INTPOL_PHASE "Fase Intpol"

// ------------------------------ PEC ----------------------------

#define L_PEC_STATUS "Estado del PEC"
#define L_PEC_CONTROL "Control del PEC"
#define L_PEC_PLAY "Reproducir"
#define L_STOP "Parar"
#define L_PEC_CLEAR "Borrar"
#define L_PEC_REC "Grabar"
#define L_PEC_CLEAR_MESSAGE "Borrar elimina el búfer de memoria, no el EEPROM. Durante la grabación las correcciones son promediadas 3:1 favoreciendo el búfer a menos que hayan sido eliminadas, en cuyo caso se usa la corrección completa."
#define L_PEC_EEWRITE "Grabar a EEPROM"
#define L_PEC_EEWRITE_MESSAGE "Graba los datos del PEC al EEPROM así se preservan si OnStep es reiniciado. Grabar los datos puede tomar unos segundos."
#define L_PEC_NO_PEC_MESSAGE "CONTROLES DE PEC DESHABILITADOS"
#define L_PEC_IDLE "Inactivo"
#define L_PEC_WAIT_PLAY "Reproducir esperando a comenzar"
#define L_PEC_PLAYING "Reproduciendo"
#define L_PEC_WAIT_REC "Grabar esperando al índice"
#define L_PEC_RECORDING "Grabando"
#define L_PEC_UNK "Desconocido"
#define L_PEC_EEWRITING "grabando al EEPROM"

// --------------------------- Settings --------------------------

#define L_REFINE_POLAR_ALIGN "Refinar alineamiento polar"
#define L_REFINE_PA "Refinar AP"
#define L_REFINE_MESSAGE1 "Preparar y alinear la montura usando 3 estrellas o más. Desplace a una estrella brillante cerca del polo norte o sur con Dec en un rango de 50 a 80 grados (N o S.) "
#define L_REFINE_MESSAGE2 "Presione el botón [Refinar AP]. Use los botones de ajuste de AP de la montura para centrar la estrella nuevamente. "
#define L_REFINE_MESSAGE3 "Opcional alinee la montura nuevamente."

#define L_PARK "Aparcar"
#define L_SET_PARK "Configurar aparcamiento"

#define L_TRK_FASTER "más rápido"
#define L_TRK_SLOWER "más lento"
#define L_TRK_RESET "Reset (predeterminado)"
#define L_TRK_COMP "Velocidad de seguimiento compensada (modelo señalador/refracción)"
#define L_TRK_FULL "Completo"
#define L_TRK_REFR "Sólo refracción"
#define L_TRK_DUAL "Ambos ejes"
#define L_TRK_SINGLE "Eje único"

#define L_BUZZER "Alerta de desplazamiento, Zumbador"

#define L_MERIDIAN_FLIP_AUTO "Cambio de meridiano automático en el límite"
#define L_MERIDIAN_FLIP_NOW "Ahora"
#define L_MERIDIAN_FLIP_PAUSE "Cambio de meridiano, pausar en posición inicial"

// ------------------------ Configuration ------------------------

#define L_BASIC_SET_TITLE "Básico:"

#define L_MAX_SLEW_SPEED "Velocidad máxima de desplazamiento"

// goto Rate
#define L_VSLOW "Muy lento (0.5x)"
#define L_SLOW "Lento (0.75x)"
#define L_NORMAL "Normal (1x)"
#define L_FAST "Rápido (1.5x)"
#define L_VFAST "Muy rápido (2x)"

// backlash
#define L_BACKLASH_RANGE_AXIS1 "Resistencia, en arcosegundos 0 a 3600"
#define L_BACKLASH_RANGE_AXIS2 "Resistencia, en arcosegundos 0 a 3600"
#define L_BACKLASH_RANGE_AXIS345 "Resistencia, en pasos 0 a 32767"

// deadband/TCF
#define L_DEADBAND_RANGE_AXIS45 "Banda muerta de TCF, en pasos 1 a 32767"
#define L_TCF_COEF_RANGE_AXIS45 "Coeficiente TCF, en micrones/grado. C -999.0 a 999.0"
#define L_TCF_COEF_EN_AXIS45 "Habilitar TCF, 0 falso o 1 verdadero"

// limits
#define L_LIMITS_TITLE "Limites de horizonte y superior"
#define L_LIMITS_RANGE_HORIZON "Límite del horizonte, altura mínima en grados +/- 30"
#define L_LIMITS_RANGE_OVERHEAD "Límite superior, altura máxima en grados 60 a 90"
#define L_LIMITS_RANGE_MERIDIAN_E "Pasado del meridiano cuando al este del muelle, en grados +/- 270"
#define L_LIMITS_RANGE_MERIDIAN_W "Pasado del meridiano cuando al oeste del muelle, en grados +/- 270"

// location
#define L_LOCATION_TITLE "Latitud, longitud, y desplazamiento UTC del sitio"
#define L_LOCATION_LONG "Longitud grados mín. seg. +/- 180, W es +"
#define L_LOCATION_LAT  "Latitud grados mín. seg. +/- 90, N es +"
#define L_LOCATION_RANGE_UTC_OFFSET "Desplazamiento UTC, en horas y minutos. -14 a +12"
#define L_LOCATION_MESSAGE_UTC_OFFSET "Opuesto al valor de la zona horaria, para hora estándar (no horario de verano.)"

// advanced configuration
#define L_REVERT "Volver a los valores predeterminados"
#define L_ADV_SET_TITLE "Avanzado"
#define L_ADV_SET_HEADER_MSG "Los siguientes cambios tomarán efecto luego de reiniciar OnStep:"
#define L_ADV_MOUNT_TYPE "Seleccionar 1 GEM, 2 Muelle EQ, or 3 Alt/Azm"

#define L_ADV_SET_SPWR "Pasos por rotación del sinfín (0 para deshabilitar)"
#define L_ADV_SET_SPD "Pasos por grado"
#define L_ADV_SET_SPM "Pasos por micrón"
#define L_ADV_SET_us  "Micropasos"
#define L_ADV_SET_ma  "Corriente in miliamperios, <i>advertencia!</i>"
#define L_ADV_SET_REV "Invertir sentido, 0 falso o 1 verdadero"
#define L_ADV_SET_MIN "Posición mínima"
#define L_ADV_SET_MAX "Posición máximo"
#define L_ADV_ENABLE "Habilitar configuración avanzada"
#define L_ADV_DISABLE "Deshabilitar configuración avanzada (todos los valores volverán a los predeterminados luego de reiniciar)"
#define L_ADV_SET_NO_EDIT "La edición para todos los ejes está deshabilitada en este momento. Es posible que esta función no esté habilitada o que deba reiniciar OnStep."
#define L_ADV_SET_FOOTER_MSG1 "Luego de presionar [Subir] tome nota de los cambios arriba ya que la subida puede ser rechazada debido a un parámetro inválido."
#define L_ADV_SET_FOOTER_MSG2 "Si elige [Revertir] no podrá volver a editar ese grupo hasta que reinicie OnStep."
#define L_ADV_SET_FOOTER_MSG3 "Si IRUN está configurado a un valor distinto del predeterminado de Config.h, IHOLD y IGOTO serán deshabilitados."
#define L_ADV_SET_FOOTER_MSG4 "Cambiar los parámetros del Eje1 puede dañar los datos de la biblioteca. Backupee los catálogos primero si hace falta."

// reset control
#define L_RESET_TITLE "Control de reinicio de OnStep:"
#define L_RESET "Reiniciar OnStep"
#define L_RESET_FWU "Reiniciar OnStep para subir firmware"
#define L_RESET_MSG1 "OnStep debe estar aparcado o en posición inicial, en caso contrario el pedido de reseteo será ignorado."

// ----------------------------  SETUP ----------------------------

#define L_NETWORK_PERFORMANCE "Rendimiento y compatibilidad"
#define L_NETWORK_CMD_TO "Se agotó el tiempo de espera para la lectura en serie del canal de comando"
#define L_NETWORK_WWW_TO "Se agotó el tiempo de espera para la lectura en serie del canal web"

#define L_NETWORK_STA_TITLE "Modo estación (conectar a un punto de acceso)"
#define L_NETWORK_PWD "Contraseña"
#define L_NETWORK_PWD_MSG "8 caracteres mínimo"
#define L_NETWORK_EN_DHCP "Activar DHCP"
#define L_NETWORK_EN_DHCP_MSG "Nota: las direcciones de arriba serán ignoradas si DHCP está activo"
#define L_NETWORK_EN_STA "Activar modo estación"
#define L_IP_ADDRESS "Dirección IP"
#define L_GATEWAY "Puerta de acceso predeterminada"
#define L_SUBNET "Subred"
#define L_NETWORK_CHA "Canal"
#define L_NETWORK_EN_AP_MODE "Activar modo AP"

#define L_NETWORK_CONFIG_SECURITY "Seguridad de red"

#define L_NETWORK_AP "Modo AP"

#define L_NETWORK_RESTART_MSG "Debe <u>manualmente</u> reiniciar para que los cambios surjan efecto."

#define L_NETWORK_TITLE "Ingrese la contraseña para cambiar la configuración:"

#define L_NETWORK_ADVICE1 "Configuración:<br/><br/>"
#define L_NETWORK_ADVICE2 "Habilite modo estación <b>O</b> el modo AP, habilitar ambos puede causar<br/><br/>"
#define L_NETWORK_ADVICE3 "problemas de rendimiento. Si desea que OnStep se conecte a su red WiFi, habilite sólo el "
#define L_NETWORK_ADVICE4 "modo estación y  desactive el modo AP. Si OnStep no puede conectarse a la red habilitará "
#define L_NETWORK_ADVICE5 "el modo AP de forma automática; esto es útil si cambia de sitio y/o para proteger contra "
#define L_NETWORK_ADVICE6 "quedar bloqueado.<br/><br/>"
#define L_NETWORK_ADVICE7 "Si no puede acceder al Wi-Fi puede usar la IDE de Arduino para reiniciar la memoria flash "
#define L_NETWORK_ADVICE8 "y recuperar los valores predeterminados.) Del menú Herramientas de Arduino, Cambie "
#define L_NETWORK_ADVICE9 "Erase Flash 'Only Sketch' a Erase Flash 'All Flash Contents' y suba el sketch de nuevo."

// --------------------------- Constants -------------------------

#define L_DOWN_TITLE "La interfaz serie a OnStep ha caído!"
#define L_DOWN_MESSAGE1 "Si acaba de reiniciar OnStep espere varios segundos a que se reinicie, luego asegúrese que aún está conectado a WiFi.<br /><br />"
#define L_DOWN_MESSAGE2 "Si este problema persiste aquí hay otras causas posibles:<br /><ul>"
#define L_DOWN_MESSAGE3 "Discrepancia en la velocidad de baudios debido al reinicio de sólo OnStep, reinicie todo el sistema."
#define L_DOWN_MESSAGE4 "Velocidad de baudios de SWS incorrecto."
#define L_DOWN_MESSAGE5 "Velocidad de baudios de OnStep incorrecto."
#define L_DOWN_MESSAGE6 "Conexión incorrecta de los puertos COM."
#define L_DOWN_MESSAGE7 "Conexión incorrecta de la fuente. Tierra debe estar compartida entre OnStep y SWS."

#define L_PAGE_STATUS "Estado"
#define L_PAGE_CONTROL "Control"
#define L_PAGE_AUX "Aux"
#define L_PAGE_LIBRARY "Biblioteca"
#define L_PAGE_ENCODERS "Codificadores"
#define L_PAGE_PEC "PEC"
#define L_PAGE_SETTINGS "Configuración"
#define L_PAGE_CONFIG "Config"
#define L_PAGE_SETUP "Red"

// ------------------------- MountStatus -------------------------

// general (background) errors
#define L_GE_NONE "Ninguno"
#define L_GE_MOTOR_FAULT "Falla de motor/driver"
#define L_GE_ALT_MIN "Por debajo del límite del horizonte" 
#define L_GE_LIMIT_SENSE "Sensor de límites"
#define L_GE_DEC "Límite de Dec excedido"
#define L_GE_AZM "Límite de Azm excedido"
#define L_GE_UNDER_POLE "límite de polo bajo excedido"
#define L_GE_MERIDIAN "límite de meridiano excedido"
#define L_GE_SYNC "límite de seguridad de sincronización excedido"
#define L_GE_PARK "Fallo al aparcar"
#define L_GE_GOTO_SYNC "Fallo al sincronizar desplazamiento"
#define L_GE_UNSPECIFIED "Error desconocido"
#define L_GE_ALT_MAX "Por encima del límite superior"
#define L_GE_WEATHER_INIT "Fallo al inicializar sensor de clima"
#define L_GE_SITE_INIT "Hora o unicación no actualizada"
#define L_GE_NV_INIT "Fallo al inicializar NV/EEPROM"
#define L_GE_OTHER "Error desconocido, código"

// command errors
#define L_CE_NONE "Sin errores"
#define L_CE_0 "Respuesta 0"
#define L_CE_CMD_UNKNOWN "comando desconocido"
#define L_CE_REPLY_UNKNOWN "respuesta inválida"
#define L_CE_PARAM_RANGE "parámetro fuera de rango"
#define L_CE_PARAM_FORM "formato de parámetro incorrecto"
#define L_CE_ALIGN_FAIL "fallo al alinear"
#define L_CE_ALIGN_NOT_ACTIVE "alineamiento no activo"
#define L_CE_NOT_PARKED_OR_AT_HOME "no aparcado ni en posición inicial"
#define L_CE_PARKED "ya aparcado"
#define L_CE_PARK_FAILED "fallo al aparcar"
#define L_CE_NOT_PARKED "no aparcado"
#define L_CE_NO_PARK_POSITION_SET "no se configuró posición de aparcamiento"
#define L_CE_GOTO_FAIL "fallo al desplazar"
#define L_CE_LIBRARY_FULL "biblioteca llena"
#define L_CE_GOTO_ERR_BELOW_HORIZON "desplazamiento debajo del horizonte"
#define L_CE_GOTO_ERR_ABOVE_OVERHEAD "desplazamiento por encima del límite superior"
#define L_CE_SLEW_ERR_IN_STANDBY "desplazando en espera"
#define L_CE_SLEW_ERR_IN_PARK "desplazando aparcado"
#define L_CE_GOTO_ERR_GOTO "ya en movimiento"
#define L_CE_GOTO_ERR_OUTSIDE_LIMITS "desplazamiento por fuera de los límites"
#define L_CE_SLEW_ERR_HARDWARE_FAULT "falla de hardware"
#define L_CE_MOUNT_IN_MOTION "montura en movimiento"
#define L_CE_GOTO_ERR_UNSPECIFIED "otro"
#define L_CE_UNK "desconocido"
